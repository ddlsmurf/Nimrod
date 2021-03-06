//
//
//           The Nimrod Compiler
//        (c) Copyright 2009 Andreas Rumpf
//
//    See the file "copying.txt", included in this
//    distribution, for details about the copyright.
//
unit types;

// this module contains routines for accessing and iterating over types

interface

{$include 'config.inc'}

uses
  nsystem, ast, astalgo, trees, msgs, strutils, platform;

function firstOrd(t: PType): biggestInt;
function lastOrd(t: PType): biggestInt;
function lengthOrd(t: PType): biggestInt;

type
  TPreferedDesc = (preferName, preferDesc);
function TypeToString(typ: PType; prefer: TPreferedDesc = preferName): string;
function getProcHeader(sym: PSym): string;

function base(t: PType): PType;


// ------------------- type iterator: ----------------------------------------
type
  TTypeIter = function (t: PType; closure: PObject): bool;
    // should return true if the iteration should stop

  TTypeMutator = function (t: PType; closure: PObject): PType;
    // copy t and mutate it

  TTypePredicate = function (t: PType): bool;

function IterOverType(t: PType; iter: TTypeIter; closure: PObject): bool;
// Returns result of `iter`.

function mutateType(t: PType; iter: TTypeMutator; closure: PObject): PType;
// Returns result of `iter`.


function SameType(x, y: PType): Boolean;
function SameTypeOrNil(a, b: PType): Boolean;
function equalOrDistinctOf(x, y: PType): bool;

type
  TParamsEquality = (paramsNotEqual,      // parameters are not equal
                     paramsEqual,         // parameters are equal
                     paramsIncompatible); // they are equal, but their
                                          // identifiers or their return
                                          // type differ (i.e. they cannot be
                                          // overloaded)
  // this used to provide better error messages
function equalParams(a, b: PNode): TParamsEquality;
// returns whether the parameter lists of the procs a, b are exactly the same


function isOrdinalType(t: PType): Boolean;
function enumHasWholes(t: PType): Boolean;

const
  abstractPtrs = {@set}[tyVar, tyPtr, tyRef, tyGenericInst, tyDistinct, tyOrdinal];
  abstractVar = {@set}[tyVar, tyGenericInst, tyDistinct, tyOrdinal];
  abstractRange = {@set}[tyGenericInst, tyRange, tyDistinct, tyOrdinal];
  abstractVarRange = {@set}[tyGenericInst, tyRange, tyVar, tyDistinct, tyOrdinal];
  abstractInst = {@set}[tyGenericInst, tyDistinct, tyOrdinal];

function skipTypes(t: PType; kinds: TTypeKinds): PType;

function elemType(t: PType): PType;

function containsObject(t: PType): bool;

function containsGarbageCollectedRef(typ: PType): Boolean;
function containsHiddenPointer(typ: PType): Boolean;
function canFormAcycle(typ: PType): boolean;

function isCompatibleToCString(a: PType): bool;

function getOrdValue(n: PNode): biggestInt;


function computeSize(typ: PType): biggestInt;
function getSize(typ: PType): biggestInt;

function isPureObject(typ: PType): boolean;

function inheritanceDiff(a, b: PType): int;
// | returns: 0 iff `a` == `b`
// | returns: -x iff `a` is the x'th direct superclass of `b`
// | returns: +x iff `a` is the x'th direct subclass of `b`
// | returns: `maxint` iff `a` and `b` are not compatible at all


function InvalidGenericInst(f: PType): bool;
// for debugging


type
  TTypeFieldResult = (
    frNone,    // type has no object type field 
    frHeader,  // type has an object type field only in the header
    frEmbedded // type has an object type field somewhere embedded
  );

function analyseObjectWithTypeField(t: PType): TTypeFieldResult;
// this does a complex analysis whether a call to ``objectInit`` needs to be
// made or intializing of the type field suffices or if there is no type field
// at all in this type.

function typeAllowed(t: PType; kind: TSymKind): bool;

implementation

function InvalidGenericInst(f: PType): bool;
begin
  result := (f.kind = tyGenericInst) and (lastSon(f) = nil);
end;

function inheritanceDiff(a, b: PType): int;
var
  x, y: PType;
begin
  // conversion to superclass?
  x := a;
  result := 0;
  while (x <> nil) do begin
    if x.id = b.id then exit;
    x := x.sons[0];
    dec(result);
  end;
  // conversion to baseclass?
  y := b;
  result := 0;
  while (y <> nil) do begin
    if y.id = a.id then exit;
    y := y.sons[0];
    inc(result);
  end;
  result := high(int);
end;

function isPureObject(typ: PType): boolean;
var
  t: PType;
begin
  t := typ;
  while t.sons[0] <> nil do t := t.sons[0];
  result := (t.sym <> nil) and (sfPure in t.sym.flags);
end;

function getOrdValue(n: PNode): biggestInt;
begin
  case n.kind of
    nkCharLit..nkInt64Lit: result := n.intVal;
    nkNilLit: result := 0;
    else begin
      liMessage(n.info, errOrdinalTypeExpected);
      result := 0
    end
  end
end;

function isCompatibleToCString(a: PType): bool;
begin
  result := false;
  if a.kind = tyArray then
    if (firstOrd(a.sons[0]) = 0)
    and (skipTypes(a.sons[0], {@set}[tyRange]).kind in [tyInt..tyInt64])
    and (a.sons[1].kind = tyChar) then
      result := true
end;

function getProcHeader(sym: PSym): string;
var
  i: int;
  n, p: PNode;
begin
  result := sym.name.s + '(';
  n := sym.typ.n;
  for i := 1 to sonsLen(n)-1 do begin
    p := n.sons[i];
    if (p.kind <> nkSym) then InternalError('getProcHeader');
    add(result, p.sym.name.s);
    add(result, ': ');
    add(result, typeToString(p.sym.typ));
    if i <> sonsLen(n)-1 then add(result, ', ');
  end;
  addChar(result, ')');
  if n.sons[0].typ <> nil then
    result := result +{&} ': ' +{&} typeToString(n.sons[0].typ);
end;

function elemType(t: PType): PType;
begin
  assert(t <> nil);
  case t.kind of
    tyGenericInst, tyDistinct: result := elemType(lastSon(t));
    tyArray, tyArrayConstr: result := t.sons[1];
    else result := t.sons[0];
  end;
  assert(result <> nil);
end;

function skipGeneric(t: PType): PType;
begin
  result := t;
  while result.kind = tyGenericInst do result := lastSon(result)
end;

function skipRange(t: PType): PType;
begin
  result := t;
  while result.kind = tyRange do result := base(result)
end;

function skipAbstract(t: PType): PType;
begin
  result := t;
  while result.kind in [tyRange, tyGenericInst] do
    result := lastSon(result);
end;

function skipVar(t: PType): PType;
begin
  result := t;
  while result.kind = tyVar do result := result.sons[0];
end;

function skipVarGeneric(t: PType): PType;
begin
  result := t;
  while result.kind in [tyGenericInst, tyVar] do result := lastSon(result);
end;

function skipPtrsGeneric(t: PType): PType;
begin
  result := t;
  while result.kind in [tyGenericInst, tyVar, tyPtr, tyRef] do
    result := lastSon(result);
end;

function skipVarGenericRange(t: PType): PType;
begin
  result := t;
  while result.kind in [tyGenericInst, tyVar, tyRange] do
    result := lastSon(result);
end;

function skipGenericRange(t: PType): PType;
begin
  result := t;
  while result.kind in [tyGenericInst, tyVar, tyRange] do
    result := lastSon(result);
end;

function skipTypes(t: PType; kinds: TTypeKinds): PType;
begin
  result := t;
  while result.kind in kinds do result := lastSon(result);
end;

function isOrdinalType(t: PType): Boolean;
begin
  assert(t <> nil);
  result := (t.Kind in [tyChar, tyInt..tyInt64, tyBool, tyEnum])
    or (t.Kind in [tyRange, tyOrdinal]) and isOrdinalType(t.sons[0]);
end;

function enumHasWholes(t: PType): Boolean;
var
  b: PType;
begin
  b := t;
  while b.kind = tyRange do b := b.sons[0];
  result := (b.Kind = tyEnum) and (tfEnumHasWholes in b.flags)
end;

function iterOverTypeAux(var marker: TIntSet; t: PType; iter: TTypeIter;
                         closure: PObject): bool; forward;

function iterOverNode(var marker: TIntSet; n: PNode; iter: TTypeIter;
                      closure: PObject): bool;
var
  i: int;
begin
  result := false;
  if n <> nil then begin
    case n.kind of
      nkNone..nkNilLit: begin // a leaf
        result := iterOverTypeAux(marker, n.typ, iter, closure);
      end;
      else begin
        for i := 0 to sonsLen(n)-1 do begin
          result := iterOverNode(marker, n.sons[i], iter, closure);
          if result then exit;
        end
      end
    end
  end
end;

function iterOverTypeAux(var marker: TIntSet; t: PType; iter: TTypeIter;
                         closure: PObject): bool;
var
  i: int;
begin
  result := false;
  if t = nil then exit;
  result := iter(t, closure);
  if result then exit;
  if not IntSetContainsOrIncl(marker, t.id) then begin
    case t.kind of
      tyGenericInst, tyGenericBody: 
        result := iterOverTypeAux(marker, lastSon(t), iter, closure);
      else begin
        for i := 0 to sonsLen(t)-1 do begin
          result := iterOverTypeAux(marker, t.sons[i], iter, closure);
          if result then exit;
        end;
        if t.n <> nil then result := iterOverNode(marker, t.n, iter, closure)
      end
    end
  end
end;

function IterOverType(t: PType; iter: TTypeIter; closure: PObject): bool;
var
  marker: TIntSet;
begin
  IntSetInit(marker);
  result := iterOverTypeAux(marker, t, iter, closure);
end;

function searchTypeForAux(t: PType; predicate: TTypePredicate;
                          var marker: TIntSet): bool; forward;

function searchTypeNodeForAux(n: PNode; p: TTypePredicate;
                              var marker: TIntSet): bool;
var
  i: int;
begin
  result := false;
  case n.kind of
    nkRecList: begin
      for i := 0 to sonsLen(n)-1 do begin
        result := searchTypeNodeForAux(n.sons[i], p, marker);
        if result then exit
      end
    end;
    nkRecCase: begin
      assert(n.sons[0].kind = nkSym);
      result := searchTypeNodeForAux(n.sons[0], p, marker);
      if result then exit;
      for i := 1 to sonsLen(n)-1 do begin
        case n.sons[i].kind of
          nkOfBranch, nkElse: begin
            result := searchTypeNodeForAux(lastSon(n.sons[i]), p, marker);
            if result then exit;
          end;
          else internalError('searchTypeNodeForAux(record case branch)');
        end
      end
    end;
    nkSym: begin
      result := searchTypeForAux(n.sym.typ, p, marker);
    end;
    else internalError(n.info, 'searchTypeNodeForAux()');
  end;
end;

function searchTypeForAux(t: PType; predicate: TTypePredicate;
                          var marker: TIntSet): bool;
// iterates over VALUE types!
var
  i: int;
begin
  result := false;
  if t = nil then exit;
  if IntSetContainsOrIncl(marker, t.id) then exit;
  result := Predicate(t);
  if result then exit;
  case t.kind of
    tyObject: begin
      result := searchTypeForAux(t.sons[0], predicate, marker);
      if not result then
        result := searchTypeNodeForAux(t.n, predicate, marker);
    end;
    tyGenericInst, tyDistinct:
      result := searchTypeForAux(lastSon(t), predicate, marker);
    tyArray, tyArrayConstr, tySet, tyTuple: begin
      for i := 0 to sonsLen(t)-1 do begin
        result := searchTypeForAux(t.sons[i], predicate, marker);
        if result then exit
      end
    end
    else begin end
  end
end;

function searchTypeFor(t: PType; predicate: TTypePredicate): bool;
var
  marker: TIntSet;
begin
  IntSetInit(marker);
  result := searchTypeForAux(t, predicate, marker);
end;

function isObjectPredicate(t: PType): bool;
begin
  result := t.kind = tyObject
end;

function containsObject(t: PType): bool;
begin
  result := searchTypeFor(t, isObjectPredicate);
end;

function isObjectWithTypeFieldPredicate(t: PType): bool;
begin
  result := (t.kind = tyObject) and (t.sons[0] = nil) 
    and not ((t.sym <> nil) and (sfPure in t.sym.flags))
    and not (tfFinal in t.flags);
end;

function analyseObjectWithTypeFieldAux(t: PType; 
                                      var marker: TIntSet): TTypeFieldResult;
var 
  res: TTypeFieldResult;
  i: int;
begin
  result := frNone;
  if t = nil then exit;
  case t.kind of
    tyObject: begin
      if (t.n <> nil) then 
        if searchTypeNodeForAux(t.n, isObjectWithTypeFieldPredicate, marker) then begin
          result := frEmbedded; exit
        end;
      for i := 0 to sonsLen(t)-1 do begin
        res := analyseObjectWithTypeFieldAux(t.sons[i], marker);
        if res = frEmbedded then begin result := frEmbedded; exit end;
        if res = frHeader then result := frHeader; 
      end;
      if result = frNone then
        if isObjectWithTypeFieldPredicate(t) then result := frHeader
    end;
    tyGenericInst, tyDistinct: 
      result := analyseObjectWithTypeFieldAux(lastSon(t), marker);
    tyArray, tyArrayConstr, tyTuple: begin
      for i := 0 to sonsLen(t)-1 do begin
        res := analyseObjectWithTypeFieldAux(t.sons[i], marker);
        if res <> frNone then begin result := frEmbedded; exit end;
      end
    end
    else begin end
  end
end;

function analyseObjectWithTypeField(t: PType): TTypeFieldResult;
var
  marker: TIntSet;
begin
  IntSetInit(marker);
  result := analyseObjectWithTypeFieldAux(t, marker);
end;

function isGBCRef(t: PType): bool;
begin
  result := t.kind in [tyRef, tySequence, tyString];
end;

function containsGarbageCollectedRef(typ: PType): Boolean;
// returns true if typ contains a reference, sequence or string (all the things
// that are garbage-collected)
begin
  result := searchTypeFor(typ, isGBCRef);
end;

function isHiddenPointer(t: PType): bool;
begin
  result := t.kind in [tyString, tySequence];
end;

function containsHiddenPointer(typ: PType): Boolean;
// returns true if typ contains a string, table or sequence (all the things
// that need to be copied deeply)
begin
  result := searchTypeFor(typ, isHiddenPointer);
end;

function canFormAcycleAux(var marker: TIntSet; typ: PType; 
                          startId: int): bool; forward;

function canFormAcycleNode(var marker: TIntSet; n: PNode; startId: int): bool;
var
  i: int;
begin
  result := false;
  if n <> nil then begin
    result := canFormAcycleAux(marker, n.typ, startId);
    if not result then 
      case n.kind of
        nkNone..nkNilLit: begin end;
        else begin
          for i := 0 to sonsLen(n)-1 do begin
            result := canFormAcycleNode(marker, n.sons[i], startId);
            if result then exit
          end
        end
      end
  end
end;

function canFormAcycleAux(var marker: TIntSet; typ: PType; startId: int): bool;
var
  i: int;
  t: PType;
begin
  result := false;
  if typ = nil then exit;
  if tfAcyclic in typ.flags then exit;
  t := skipTypes(typ, abstractInst);
  if tfAcyclic in t.flags then exit;
  case t.kind of 
    tyTuple, tyObject, tyRef, tySequence, tyArray, tyArrayConstr,
    tyOpenArray: begin
      if not IntSetContainsOrIncl(marker, t.id) then begin
        for i := 0 to sonsLen(t)-1 do begin
          result := canFormAcycleAux(marker, t.sons[i], startId);
          if result then exit
        end;
        if t.n <> nil then result := canFormAcycleNode(marker, t.n, startId)
      end
      else 
        result := t.id = startId;
    end
    else begin end
  end
end;

function canFormAcycle(typ: PType): boolean;
var 
  marker: TIntSet; 
begin
  IntSetInit(marker);
  result := canFormAcycleAux(marker, typ, typ.id);
end;

function mutateTypeAux(var marker: TIntSet; t: PType; iter: TTypeMutator;
                       closure: PObject): PType; forward;

function mutateNode(var marker: TIntSet; n: PNode; iter: TTypeMutator;
                    closure: PObject): PNode;
var
  i: int;
begin
  result := nil;
  if n <> nil then begin
    result := copyNode(n);
    result.typ := mutateTypeAux(marker, n.typ, iter, closure);
    case n.kind of
      nkNone..nkNilLit: begin // a leaf
      end;
      else begin
        for i := 0 to sonsLen(n)-1 do
          addSon(result, mutateNode(marker, n.sons[i], iter, closure));
      end
    end
  end
end;

function mutateTypeAux(var marker: TIntSet; t: PType; iter: TTypeMutator;
                       closure: PObject): PType;
var
  i: int;
begin
  result := nil;
  if t = nil then exit;
  result := iter(t, closure);
  if not IntSetContainsOrIncl(marker, t.id) then begin
    for i := 0 to sonsLen(t)-1 do begin
      result.sons[i] := mutateTypeAux(marker, result.sons[i], iter, closure);
      if (result.sons[i] = nil) and (result.kind = tyGenericInst) then
        assert(false);
    end;
    if t.n <> nil then
      result.n := mutateNode(marker, t.n, iter, closure)
  end;
  assert(result <> nil);
end;

function mutateType(t: PType; iter: TTypeMutator; closure: PObject): PType;
var
  marker: TIntSet;
begin
  IntSetInit(marker);
  result := mutateTypeAux(marker, t, iter, closure);
end;

function rangeToStr(n: PNode): string;
begin
  assert(n.kind = nkRange);
  result := ValueToString(n.sons[0]) + '..' +{&} ValueToString(n.sons[1])
end;

function TypeToString(typ: PType; prefer: TPreferedDesc = preferName): string;
const
  typeToStr: array [TTypeKind] of string = (
    'None', 'bool', 'Char', 'empty', 'Array Constructor [$1]', 'nil', 'expr',
    'stmt', 'typeDesc',
    'GenericInvokation',
    'GenericBody', 'GenericInst', 'GenericParam', 'distinct $1',
    'enum', 'ordinal[$1]',
    'array[$1, $2]', 'object', 'tuple', 'set[$1]', 'range[$1]',
    'ptr ', 'ref ', 'var ', 'seq[$1]', 'proc', 'pointer',
    'OpenArray[$1]', 'string', 'CString', 'Forward',
    'int', 'int8', 'int16', 'int32', 'int64',
    'float', 'float32', 'float64', 'float128'
  );
var
  t: PType;
  i: int;
  prag: string;
begin
  t := typ;
  result := '';
  if t = nil then exit;
  if (prefer = preferName) and (t.sym <> nil) then begin
    result := t.sym.Name.s;
    exit
  end;
  case t.Kind of
    tyGenericInst:
      result := typeToString(lastSon(t), prefer);
    tyArray: begin
      if t.sons[0].kind = tyRange then
        result := 'array[' +{&} rangeToStr(t.sons[0].n) +{&} ', '
                  +{&} typeToString(t.sons[1]) +{&} ']'
      else
        result := 'array[' +{&} typeToString(t.sons[0]) +{&} ', '
                  +{&} typeToString(t.sons[1]) +{&} ']'
    end;
    tyGenericInvokation, tyGenericBody: begin
      result := typeToString(t.sons[0]) + '[';
      for i := 1 to sonsLen(t)-1 do begin
        if i > 1 then add(result, ', ');
        add(result, typeToString(t.sons[i]));
      end;
      addChar(result, ']');
    end;
    tyArrayConstr:
      result := 'Array constructor[' +{&} rangeToStr(t.sons[0].n) +{&} ', '
                +{&} typeToString(t.sons[1]) +{&} ']';
    tySequence: result := 'seq[' +{&} typeToString(t.sons[0]) +{&} ']';
    tyOrdinal: result := 'ordinal[' +{&} typeToString(t.sons[0]) +{&} ']';
    tySet: result := 'set[' +{&} typeToString(t.sons[0]) +{&} ']';
    tyOpenArray: result := 'openarray[' +{&} typeToString(t.sons[0]) +{&} ']';
    tyDistinct: result := 'distinct ' +{&} typeToString(t.sons[0], preferName);
    tyTuple: begin
      // we iterate over t.sons here, because t.n may be nil
      result := 'tuple[';
      if t.n <> nil then begin
        assert(sonsLen(t.n) = sonsLen(t));
        for i := 0 to sonsLen(t.n)-1 do begin
          assert(t.n.sons[i].kind = nkSym);
          add(result, t.n.sons[i].sym.name.s +{&} ': '
                  +{&} typeToString(t.sons[i]));
          if i < sonsLen(t.n)-1 then add(result, ', ');
        end
      end
      else begin
        for i := 0 to sonsLen(t)-1 do begin
          add(result, typeToString(t.sons[i]));
          if i < sonsLen(t)-1 then add(result, ', ');
        end
      end;
      addChar(result, ']')
    end;
    tyPtr, tyRef, tyVar:
      result := typeToStr[t.kind] +{&} typeToString(t.sons[0]);
    tyRange: begin
      result := 'range ' +{&} rangeToStr(t.n);
    end;
    tyProc: begin
      result := 'proc (';
      for i := 1 to sonsLen(t)-1 do begin
        add(result, typeToString(t.sons[i]));
        if i < sonsLen(t)-1 then add(result, ', ');
      end;
      addChar(result, ')');
      if t.sons[0] <> nil then
        add(result, ': ' +{&} TypeToString(t.sons[0]));
      if t.callConv <> ccDefault then prag := CallingConvToStr[t.callConv]
      else prag := '';
      if tfNoSideEffect in t.flags then begin
        addSep(prag);
        add(prag, 'noSideEffect')
      end;
      if length(prag) <> 0 then add(result, '{.' +{&} prag +{&} '.}');
    end;
    else begin
      result := typeToStr[t.kind]
    end
  end
end;

function resultType(t: PType): PType;
begin
  assert(t.kind = tyProc);
  result := t.sons[0] // nil is allowed
end;

function base(t: PType): PType;
begin
  result := t.sons[0]
end;

function firstOrd(t: PType): biggestInt;
begin
  case t.kind of
    tyBool, tyChar, tySequence, tyOpenArray: result := 0;
    tySet, tyVar: result := firstOrd(t.sons[0]);
    tyArray, tyArrayConstr: begin
      result := firstOrd(t.sons[0]);
    end;
    tyRange: begin
      assert(t.n <> nil);
      // range directly given:
      assert(t.n.kind = nkRange);
      result := getOrdValue(t.n.sons[0])
    end;
    tyInt: begin
      if platform.intSize = 4 then result := -(2147483646) - 2
      else result := $8000000000000000;
    end;
    tyInt8:  result := -128;
    tyInt16: result := -32768;
    tyInt32: result := -2147483646 - 2;
    tyInt64: result := $8000000000000000;
    tyEnum: begin
      // if basetype <> nil then return firstOrd of basetype
      if (sonsLen(t) > 0) and (t.sons[0] <> nil) then
        result := firstOrd(t.sons[0])
      else begin
        assert(t.n.sons[0].kind = nkSym);
        result := t.n.sons[0].sym.position;
      end;
    end;
    tyGenericInst, tyDistinct: result := firstOrd(lastSon(t));
    else begin
      InternalError('invalid kind for first(' +{&}
        typeKindToStr[t.kind] +{&} ')');
      result := 0;
    end
  end
end;

function lastOrd(t: PType): biggestInt;
begin
  case t.kind of
    tyBool: result := 1;
    tyChar: result := 255;
    tySet, tyVar: result := lastOrd(t.sons[0]);
    tyArray, tyArrayConstr: begin
      result := lastOrd(t.sons[0]);
    end;
    tyRange: begin
      assert(t.n <> nil);
      // range directly given:
      assert(t.n.kind = nkRange);
      result := getOrdValue(t.n.sons[1]);
    end;
    tyInt: begin
      if platform.intSize = 4 then result := $7FFFFFFF
      else result := $7FFFFFFFFFFFFFFF;
    end;
    tyInt8:  result := $7F;
    tyInt16: result := $7FFF;
    tyInt32: result := $7FFFFFFF;
    tyInt64: result := $7FFFFFFFFFFFFFFF;
    tyEnum: begin
      assert(t.n.sons[sonsLen(t.n)-1].kind = nkSym);
      result := t.n.sons[sonsLen(t.n)-1].sym.position;
    end;
    tyGenericInst, tyDistinct: result := firstOrd(lastSon(t));
    else begin
      InternalError('invalid kind for last(' +{&}
        typeKindToStr[t.kind] +{&} ')');
      result := 0;
    end
  end
end;

function lengthOrd(t: PType): biggestInt;
begin
  case t.kind of
    tyInt64, tyInt32, tyInt: result := lastOrd(t);
    tyDistinct: result := lengthOrd(t.sons[0]);
    else result := lastOrd(t) - firstOrd(t) + 1;
  end
end;

function equalParam(a, b: PSym): TParamsEquality;
begin
  if SameTypeOrNil(a.typ, b.typ) then begin
    if (a.ast = b.ast) then
      result := paramsEqual
    else if (a.ast <> nil) and (b.ast <> nil) then begin
      if ExprStructuralEquivalent(a.ast, b.ast) then result := paramsEqual
      else result := paramsIncompatible
    end
    else if (a.ast <> nil) then
      result := paramsEqual
    else if (b.ast <> nil) then
      result := paramsIncompatible
  end
  else
    result := paramsNotEqual
end;

function equalParams(a, b: PNode): TParamsEquality;
var
  i, len: int;
  m, n: PSym;
begin
  result := paramsEqual;
  len := sonsLen(a);
  if len <> sonsLen(b) then
    result := paramsNotEqual
  else begin
    for i := 1 to len-1 do begin
      m := a.sons[i].sym;
      n := b.sons[i].sym;
      assert((m.kind = skParam) and (n.kind = skParam));
      case equalParam(m, n) of
        paramsNotEqual: begin result := paramsNotEqual; exit end;
        paramsEqual: begin end;
        paramsIncompatible: result := paramsIncompatible;
      end;
      if (m.name.id <> n.name.id) then begin // BUGFIX
        result := paramsNotEqual; exit // paramsIncompatible;
        // continue traversal! If not equal, we can return immediately; else
        // it stays incompatible
      end
    end;
    // check their return type:
    if not SameTypeOrNil(a.sons[0].typ, b.sons[0].typ) then
      if (a.sons[0].typ = nil) or (b.sons[0].typ = nil) then
        result := paramsNotEqual // one proc has a result, the other not is OK
      else
        result := paramsIncompatible // overloading by different
                                     // result types does not work
  end
end;

function SameTypeOrNil(a, b: PType): Boolean;
begin
  if a = b then
    result := true
  else begin
    if (a = nil) or (b = nil) then result := false
    else result := SameType(a, b)
  end
end;

function SameLiteral(x, y: PNode): Boolean;
begin
  result := false;
  if x.kind = y.kind then
    case x.kind of
      nkCharLit..nkInt64Lit:
        result := x.intVal = y.intVal;
      nkFloatLit..nkFloat64Lit:
        result := x.floatVal = y.floatVal;
      nkNilLit:
        result := true
      else assert(false);
    end
end;

function SameRanges(a, b: PNode): Boolean;
begin
  result := SameLiteral(a.sons[0], b.sons[0]) and
    SameLiteral(a.sons[1], b.sons[1])
end;

function sameTuple(a, b: PType; DistinctOf: bool): boolean;
// two tuples are equivalent iff the names, types and positions are the same;
// however, both types may not have any field names (t.n may be nil) which
// complicates the matter a bit.
var
  i: int;
  x, y: PSym;
begin
  if sonsLen(a) = sonsLen(b) then begin
    result := true;
    for i := 0 to sonsLen(a)-1 do begin
      if DistinctOf then 
        result := equalOrDistinctOf(a.sons[i], b.sons[i])
      else
        result := SameType(a.sons[i], b.sons[i]);
      if not result then exit
    end;
    if (a.n <> nil) and (b.n <> nil) then begin
      for i := 0 to sonsLen(a.n)-1 do begin
        // check field names: 
        if a.n.sons[i].kind <> nkSym then InternalError(a.n.info, 'sameTuple');
        if b.n.sons[i].kind <> nkSym then InternalError(b.n.info, 'sameTuple');
        x := a.n.sons[i].sym;
        y := b.n.sons[i].sym;
        result := x.name.id = y.name.id;
        if not result then break
      end
    end
  end
  else
    result := false;
end;

function SameType(x, y: PType): Boolean;
var
  i: int;
  a, b: PType;
begin
  if x = y then begin result := true; exit end;
  a := skipTypes(x, {@set}[tyGenericInst]);
  b := skipTypes(y, {@set}[tyGenericInst]);
  assert(a <> nil);
  assert(b <> nil);
  if a.kind <> b.kind then begin result := false; exit end;
  case a.Kind of
    tyEmpty, tyChar, tyBool, tyNil, tyPointer, tyString, tyCString, 
    tyInt..tyFloat128, tyExpr, tyStmt, tyTypeDesc: 
      result := true;
    tyEnum, tyForward, tyObject, tyDistinct:
      result := (a.id = b.id);
    tyTuple: 
      result := sameTuple(a, b, false);
    tyGenericInst:
      result := sameType(lastSon(a), lastSon(b));
    tyGenericParam, tyGenericInvokation, tyGenericBody, tySequence, tyOrdinal,
    tyOpenArray, tySet, tyRef, tyPtr, tyVar, tyArrayConstr,
    tyArray, tyProc: begin
      if sonsLen(a) = sonsLen(b) then begin
        result := true;
        for i := 0 to sonsLen(a)-1 do begin
          result := SameTypeOrNil(a.sons[i], b.sons[i]); // BUGFIX
          if not result then exit
        end;
        if result and (a.kind = tyProc) then 
          result := a.callConv = b.callConv // BUGFIX
      end
      else
        result := false;
    end;
    tyRange: begin
      result := SameTypeOrNil(a.sons[0], b.sons[0])
        and SameValue(a.n.sons[0], b.n.sons[0])
        and SameValue(a.n.sons[1], b.n.sons[1])
    end;
    tyNone: result := false;
  end
end;

function equalOrDistinctOf(x, y: PType): bool;
var
  i: int;
  a, b: PType;
begin
  if x = y then begin result := true; exit end;
  if (x = nil) or (y = nil) then begin result := false; exit end;
  a := skipTypes(x, {@set}[tyGenericInst]);
  b := skipTypes(y, {@set}[tyGenericInst]);
  assert(a <> nil);
  assert(b <> nil);
  if a.kind <> b.kind then begin 
    if a.kind = tyDistinct then a := a.sons[0];
    if a.kind <> b.kind then begin result := false; exit end
  end;
  case a.Kind of
    tyEmpty, tyChar, tyBool, tyNil, tyPointer, tyString, tyCString, 
    tyInt..tyFloat128, tyExpr, tyStmt, tyTypeDesc: 
      result := true;
    tyEnum, tyForward, tyObject, tyDistinct:
      result := (a.id = b.id);
    tyTuple: 
      result := sameTuple(a, b, true);
    tyGenericInst:
      result := equalOrDistinctOf(lastSon(a), lastSon(b));
    tyGenericParam, tyGenericInvokation, tyGenericBody, tySequence, tyOrdinal,
    tyOpenArray, tySet, tyRef, tyPtr, tyVar, tyArrayConstr,
    tyArray, tyProc: begin
      if sonsLen(a) = sonsLen(b) then begin
        result := true;
        for i := 0 to sonsLen(a)-1 do begin
          result := equalOrDistinctOf(a.sons[i], b.sons[i]);
          if not result then exit
        end;
        if result and (a.kind = tyProc) then 
          result := a.callConv = b.callConv
      end
      else
        result := false;
    end;
    tyRange: begin
      result := equalOrDistinctOf(a.sons[0], b.sons[0])
        and SameValue(a.n.sons[0], b.n.sons[0])
        and SameValue(a.n.sons[1], b.n.sons[1])
    end;
    tyNone: result := false;
  end
end;

function typeAllowedAux(var marker: TIntSet; typ: PType; 
                        kind: TSymKind): bool; forward;

function typeAllowedNode(var marker: TIntSet; n: PNode; kind: TSymKind): bool;
var
  i: int;
begin
  result := true;
  if n <> nil then begin
    result := typeAllowedAux(marker, n.typ, kind);
    if not result then debug(n.typ);
    if result then 
      case n.kind of
        nkNone..nkNilLit: begin end;
        else begin
          for i := 0 to sonsLen(n)-1 do begin
            result := typeAllowedNode(marker, n.sons[i], kind);
            if not result then exit
          end
        end
      end
  end
end;

function typeAllowedAux(var marker: TIntSet; typ: PType; kind: TSymKind): bool;
var
  i: int;
  t, t2: PType;
begin
  assert(kind in [skVar, skConst, skParam]);
  result := true;
  if typ = nil then exit;
  // if we have already checked the type, return true, because we stop the
  // evaluation if something is wrong:
  if IntSetContainsOrIncl(marker, typ.id) then exit;
  t := skipTypes(typ, abstractInst);
  case t.kind of 
    tyVar: begin
      t2 := skipTypes(t.sons[0], abstractInst);
      case t2.kind of
        tyVar: result := false; // ``var var`` is always an invalid type:
        tyOpenArray: result := (kind = skParam) and 
                                typeAllowedAux(marker, t2, kind);
        else result := (kind <> skConst) and 
                                typeAllowedAux(marker, t2, kind);
      end
    end;
    tyProc: begin
      for i := 1 to sonsLen(t)-1 do begin
        result := typeAllowedAux(marker, t.sons[i], skParam);
        if not result then exit;
      end;
      if t.sons[0] <> nil then
        result := typeAllowedAux(marker, t.sons[0], skVar)
    end;
    tyExpr, tyStmt, tyTypeDesc: result := true;
    tyGenericBody, tyGenericParam, tyForward, tyNone, tyGenericInvokation: begin
      result := false;
      //InternalError('shit found');
    end;
    tyEmpty, tyNil: result := kind = skConst;
    tyString, tyBool, tyChar, tyEnum, tyInt..tyFloat128, tyCString, tyPointer: 
      result := true;
    tyOrdinal: result := kind = skParam;
    tyGenericInst, tyDistinct: 
      result := typeAllowedAux(marker, lastSon(t), kind);
    tyRange: 
      result := skipTypes(t.sons[0], abstractInst).kind in
                         [tyChar, tyEnum, tyInt..tyFloat128];
    tyOpenArray: 
      result := (kind = skParam) and typeAllowedAux(marker, t.sons[0], skVar);
    tySequence: result := (kind <> skConst) 
      and typeAllowedAux(marker, t.sons[0], skVar)
      or (t.sons[0].kind = tyEmpty);
    tyArray: result := typeAllowedAux(marker, t.sons[1], skVar);
    tyPtr, tyRef: result := typeAllowedAux(marker, t.sons[0], skVar);
    tyArrayConstr, tyTuple, tySet: begin
      for i := 0 to sonsLen(t)-1 do begin
        result := typeAllowedAux(marker, t.sons[i], kind);
        if not result then exit
      end;
    end;
    tyObject: begin
      for i := 0 to sonsLen(t)-1 do begin
        result := typeAllowedAux(marker, t.sons[i], skVar);
        if not result then exit
      end;
      if t.n <> nil then result := typeAllowedNode(marker, t.n, skVar);
    end;
  end
end;

function typeAllowed(t: PType; kind: TSymKind): bool;
var 
  marker: TIntSet; 
begin
  IntSetInit(marker);
  result := typeAllowedAux(marker, t, kind);
end;

function align(address, alignment: biggestInt): biggestInt;
begin
  result := (address + (alignment-1)) and not (alignment-1);
end;

// we compute the size of types lazily:
function computeSizeAux(typ: PType; var a: biggestInt): biggestInt; forward;

function computeRecSizeAux(n: PNode; var a, currOffset: biggestInt): biggestInt;
var
  maxAlign, maxSize, b, res: biggestInt;
  i: int;
begin
  case n.kind of
    nkRecCase: begin
      assert(n.sons[0].kind = nkSym);
      result := computeRecSizeAux(n.sons[0], a, currOffset);
      maxSize := 0;
      maxAlign := 1;
      for i := 1 to sonsLen(n)-1 do begin
        case n.sons[i].kind of
          nkOfBranch, nkElse: begin
            res := computeRecSizeAux(lastSon(n.sons[i]), b, currOffset);
            if res < 0 then begin result := res; exit end;
            maxSize := max(maxSize, res);
            maxAlign := max(maxAlign, b);
          end;
          else internalError('computeRecSizeAux(record case branch)');
        end
      end;
      currOffset := align(currOffset, maxAlign) + maxSize;
      result := align(result, maxAlign) + maxSize;
      a := maxAlign;
    end;
    nkRecList: begin
      result := 0;
      maxAlign := 1;
      for i := 0 to sonsLen(n)-1 do begin
        res := computeRecSizeAux(n.sons[i], b, currOffset);
        if res < 0 then begin result := res; exit end;
        currOffset := align(currOffset, b) + res;
        result := align(result, b) + res;
        if b > maxAlign then maxAlign := b;
      end;
      //result := align(result, maxAlign);
      // XXX: check GCC alignment for this!
      a := maxAlign;
    end;
    nkSym: begin
      result := computeSizeAux(n.sym.typ, a);
      n.sym.offset := int(currOffset);
    end;
    else begin
      InternalError('computeRecSizeAux()');
      a := 1; result := -1
    end
  end
end;

function computeSizeAux(typ: PType; var a: biggestInt): biggestInt;
var
  i: int;
  res, maxAlign, len, currOffset: biggestInt;
begin
  if typ.size = -2 then begin
    // we are already computing the size of the type
    // --> illegal recursion in type
    result := -2;
    exit
  end;
  if typ.size >= 0 then begin // size already computed
    result := typ.size;
    a := typ.align;
    exit
  end;
  typ.size := -2; // mark as being computed
  case typ.kind of
    tyInt:   begin result := IntSize; a := result; end;
    tyInt8, tyBool, tyChar:  begin result := 1; a := result; end;
    tyInt16: begin result := 2; a := result; end;
    tyInt32, tyFloat32: begin result := 4; a := result; end;
    tyInt64, tyFloat64: begin result := 8; a := result; end;
    tyFloat: begin result := floatSize; a := result; end;
    tyProc: begin
      if typ.callConv = ccClosure then result := 2 * ptrSize
      else result := ptrSize;
      a := ptrSize;
    end;
    tyNil, tyCString, tyString, tySequence, tyPtr, tyRef,
    tyOpenArray: begin result := ptrSize; a := result; end;
    tyArray, tyArrayConstr: begin
      result := lengthOrd(typ.sons[0]) * computeSizeAux(typ.sons[1], a);
    end;
    tyEnum: begin
      if firstOrd(typ) < 0 then
        result := 4 // use signed int32
      else begin
        len := lastOrd(typ); // BUGFIX: use lastOrd!
        if len+1 < shlu(1, 8) then result := 1
        else if len+1 < shlu(1, 16) then result := 2
        else if len+1 < shlu(biggestInt(1), 32) then result := 4
        else result := 8;
      end;
      a := result;
    end;
    tySet: begin
      len := lengthOrd(typ.sons[0]);
      if len <= 8 then result := 1
      else if len <= 16 then result := 2
      else if len <= 32 then result := 4
      else if len <= 64 then result := 8
      else if align(len, 8) mod 8 = 0 then result := align(len, 8) div 8
      else result := align(len, 8) div 8 + 1; // BUGFIX!
      a := result;
    end;
    tyRange: result := computeSizeAux(typ.sons[0], a);
    tyTuple: begin
      result := 0;
      maxAlign := 1;
      for i := 0 to sonsLen(typ)-1 do begin
        res := computeSizeAux(typ.sons[i], a);
        if res < 0 then begin result := res; exit end;
        maxAlign := max(maxAlign, a);
        result := align(result, a) + res;
      end;
      result := align(result, maxAlign);
      a := maxAlign;
    end;
    tyObject: begin
      if typ.sons[0] <> nil then begin
        result := computeSizeAux(typ.sons[0], a);
        if result < 0 then exit;
        maxAlign := a
      end
      else if isObjectWithTypeFieldPredicate(typ) then begin
        result := intSize; maxAlign := result;
      end
      else begin
        result := 0; maxAlign := 1
      end;
      currOffset := result;
      result := computeRecSizeAux(typ.n, a, currOffset);
      if result < 0 then exit;
      if a < maxAlign then a := maxAlign;
      result := align(result, a);
    end;
    tyGenericInst, tyDistinct, tyGenericBody: begin
      result := computeSizeAux(lastSon(typ), a);
    end;
    else begin
      //internalError('computeSizeAux()');
      result := -1;
    end
  end;
  typ.size := result;
  typ.align := int(a);
end;

function computeSize(typ: PType): biggestInt;
var
  a: biggestInt;
begin
  a := 1;
  result := computeSizeAux(typ, a);
end;

function getSize(typ: PType): biggestInt;
begin
  result := computeSize(typ);
  if result < 0 then
    InternalError('getSize(' +{&} typekindToStr[typ.kind] +{&} ')');
end;

end.
