#
#
#           The Nimrod Compiler
#        (c) Copyright 2011 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## This module implements semantic checking for calls. 

proc sameMethodDispatcher(a, b: PSym): bool = 
  result = false
  if a.kind == skMethod and b.kind == skMethod: 
    var aa = lastSon(a.ast)
    var bb = lastSon(b.ast)
    if aa.kind == nkSym and bb.kind == nkSym and aa.sym == bb.sym: 
      result = true
  
proc semDirectCallWithBinding(c: PContext, n, f: PNode, filter: TSymKinds,
                              initialBinding: PNode): PNode = 
  var
    o: TOverloadIter
    x, y, z: TCandidate
  #Message(n.info, warnUser, renderTree(n))
  var sym = initOverloadIter(o, c, f)
  result = nil
  if sym == nil: return 
  initCandidate(x, sym, initialBinding)
  initCandidate(y, sym, initialBinding)

  while sym != nil: 
    if sym.kind in filter: 
      initCandidate(z, sym, initialBinding)
      z.calleeSym = sym
      matches(c, n, z)
      if z.state == csMatch: 
        case x.state
        of csEmpty, csNoMatch: x = z
        of csMatch: 
          var cmp = cmpCandidates(x, z)
          if cmp < 0: x = z # z is better than x
          elif cmp == 0: y = z # z is as good as x
          else: nil
    sym = nextOverloadIter(o, c, f)
  if x.state == csEmpty: 
    # no overloaded proc found
    # do not generate an error yet; the semantic checking will check for
    # an overloaded () operator
  elif y.state == csMatch and cmpCandidates(x, y) == 0 and
      not sameMethodDispatcher(x.calleeSym, y.calleeSym): 
    if x.state != csMatch: 
      InternalError(n.info, "x.state is not csMatch") 
    LocalError(n.Info, errGenerated, msgKindToString(errAmbiguousCallXYZ) % [
      getProcHeader(x.calleeSym), getProcHeader(y.calleeSym), 
      x.calleeSym.Name.s])
  else: 
    # only one valid interpretation found:
    markUsed(n, x.calleeSym)
    if x.calleeSym.ast == nil: 
      internalError(n.info, "calleeSym.ast is nil") # XXX: remove this check!
    if x.calleeSym.ast.sons[genericParamsPos].kind != nkEmpty: 
      # a generic proc!
      x.calleeSym = generateInstance(c, x.calleeSym, x.bindings, n.info)
      x.callee = x.calleeSym.typ
    result = x.call
    result.sons[0] = newSymNode(x.calleeSym)
    result.typ = x.callee.sons[0]
        
proc semDirectCall(c: PContext, n: PNode, filter: TSymKinds): PNode = 
  # process the bindings once:
  var initialBinding: PNode
  var f = n.sons[0]
  if f.kind == nkBracketExpr:
    # fill in the bindings:
    initialBinding = f
    f = f.sons[0]
  else: 
    initialBinding = nil
  result = semDirectCallWithBinding(c, n, f, filter, initialBinding)

proc explictGenericInstantiation(c: PContext, n: PNode, s: PSym): PNode = 
  assert n.kind == nkBracketExpr
  for i in 1..sonsLen(n)-1:
    n.sons[i].typ = semTypeNode(c, n.sons[i], nil)
  # we cannot check for the proper number of type parameters because in
  # `f[a,b](x, y)` `f` is not resolved yet properly.
  # XXX: BUG this should be checked somehow!
  assert n.sons[0].kind == nkSym
  
  var x: TCandidate
  initCandidate(x, s, n)
  var newInst = generateInstance(c, s, x.bindings, n.info)
  
  markUsed(n, s)
  result = newSymNode(newInst)
  result.info = n.info

