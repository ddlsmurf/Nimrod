/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50547 TY50547;
typedef struct TY102012 TY102012;
typedef struct TY55089 TY55089;
typedef struct TY49011 TY49011;
typedef struct TY50529 TY50529;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50527 TY50527;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY100002 TY100002;
typedef struct TNimObject TNimObject;
typedef struct TY102006 TY102006;
typedef struct TY50525 TY50525;
typedef struct TY55104 TY55104;
typedef struct TY55106 TY55106;
typedef struct TY50900 TY50900;
typedef struct TY50896 TY50896;
typedef struct TY50898 TY50898;
typedef struct TY38019 TY38019;
typedef struct TY38013 TY38013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY49005 TY49005;
typedef struct TY50551 TY50551;
typedef struct TY42536 TY42536;
typedef struct TY50539 TY50539;
typedef struct TY47008 TY47008;
typedef struct TY50543 TY50543;
typedef struct TY50519 TY50519;
typedef struct TY50549 TY50549;
struct TY55089 {
NI H;
TY49011* Name;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY50529 {
TNimType* m_type;
NI Counter;
TY50527* Data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY100002 {
  TNimObject Sup;
};
struct TY55104 {
NI Tos;
TY55106* Stack;
};
struct TY50900 {
NI Counter;
NI Max;
TY50896* Head;
TY50898* Data;
};
struct TY38019 {
TNimType* m_type;
TY38013* Head;
TY38013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY50525*, TY102032) (TY102012* C_102033, TY50525* N_102034);
typedef N_NIMCALL_PTR(TY50525*, TY102037) (TY102012* C_102038, TY50525* N_102039);
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY102012 {
  TY100002 Sup;
TY50547* Module;
TY102006* P;
NI Instcounter;
TY50525* Generics;
NI Lastgenericidx;
TY55104 Tab;
TY50900 Ambiguoussymbols;
TY50527* Converters;
TY38019 Optionstack;
TY38019 Libs;
NIM_BOOL Fromcache;
TY102032 Semconstexpr;
TY102037 Semexpr;
TY50900 Includedfiles;
NimStringDesc* Filename;
TY50529 Userpragmas;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY42536 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50539 {
NU8 K;
NU8 S;
NU8 Flags;
TY50551* T;
TY47008* R;
NI A;
};
struct TY50547 {
  TY49005 Sup;
NU8 Kind;
NU8 Magic;
TY50551* Typ;
TY49011* Name;
TY42536 Info;
TY50547* Owner;
NU32 Flags;
TY50529 Tab;
TY50525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY50539 Loc;
TY50543* Annex;
};
struct TY50525 {
TY50551* Typ;
NimStringDesc* Comment;
TY42536 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY50547* Sym;
} S4;
struct {TY49011* Ident;
} S5;
struct {TY50519* Sons;
} S6;
} KindU;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY50551 {
  TY49005 Sup;
NU8 Kind;
TY50549* Sons;
TY50525* N;
NU8 Flags;
NU8 Callconv;
TY50547* Owner;
TY50547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY50539 Loc;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY102006 {
TY50547* Owner;
TY50547* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8214[8];
struct TY50896 {
TY50896* Next;
NI Key;
TY8214 Bits;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY50543 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50525* Path;
};
struct TY50527 {
  TGenericSeq Sup;
  TY50547* data[SEQ_DECL_SIZE];
};
struct TY55106 {
  TGenericSeq Sup;
  TY50529 data[SEQ_DECL_SIZE];
};
struct TY50898 {
  TGenericSeq Sup;
  TY50896* data[SEQ_DECL_SIZE];
};
struct TY50519 {
  TGenericSeq Sup;
  TY50525* data[SEQ_DECL_SIZE];
};
struct TY50549 {
  TGenericSeq Sup;
  TY50551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY50547*, Initidentiter_55092)(TY55089* Ti_55095, TY50529* Tab_55096, TY49011* S_55097);
N_NIMCALL(NIM_BOOL, Equalgenericparams_116014)(TY50525* Proca_116016, TY50525* Procb_116017);
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805);
N_NIMCALL(void, Internalerror_42571)(TY42536 Info_42573, NimStringDesc* Errmsg_42574);
N_NIMCALL(NIM_BOOL, Sametypeornil_92052)(TY50551* A_92054, TY50551* B_92055);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_91035)(TY50525* A_91037, TY50525* B_91038);
N_NIMCALL(NU8, Equalparams_92065)(TY50525* A_92067, TY50525* B_92068);
N_NIMCALL(void, Limessage_42566)(TY42536 Info_42568, NU8 Msg_42569, NimStringDesc* Arg_42570);
N_NIMCALL(TY50547*, Nextidentiter_55098)(TY55089* Ti_55101, TY50529* Tab_55102);
N_NIMCALL(NIM_BOOL, Paramsfitborrow_116247)(TY50525* A_116249, TY50525* B_116250);
N_NIMCALL(NIM_BOOL, Equalordistinctof_92056)(TY50551* X_92058, TY50551* Y_92059);
STRING_LITERAL(TMP190175, "equalGenericParams", 18);
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805) {
NI Result_51880;
Result_51880 = 0;
if (!(*N_50805).KindU.S6.Sons == 0) goto LA2;
Result_51880 = 0;
goto LA1;
LA2: ;
Result_51880 = (*N_50805).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_51880;
}
N_NIMCALL(NIM_BOOL, Equalgenericparams_116014)(TY50525* Proca_116016, TY50525* Procb_116017) {
NIM_BOOL Result_116018;
TY50547* A_116019;
TY50547* B_116020;
NIM_BOOL LOC5;
NI LOC10;
NI LOC11;
NI I_116076;
NI HEX3Atmp_116191;
NI LOC14;
NI Res_116193;
NIM_BOOL LOC23;
NIM_BOOL LOC25;
NIM_BOOL LOC29;
NIM_BOOL LOC34;
Result_116018 = 0;
A_116019 = 0;
B_116020 = 0;
Result_116018 = (Proca_116016 == Procb_116017);
if (!Result_116018) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = (Proca_116016 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (Procb_116017 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sonslen_50803(Proca_116016);
LOC11 = Sonslen_50803(Procb_116017);
if (!!((LOC10 == LOC11))) goto LA12;
goto BeforeRet;
LA12: ;
I_116076 = 0;
HEX3Atmp_116191 = 0;
LOC14 = Sonslen_50803(Proca_116016);
HEX3Atmp_116191 = (NI64)(LOC14 - 1);
Res_116193 = 0;
Res_116193 = 0;
while (1) {
if (!(Res_116193 <= HEX3Atmp_116191)) goto LA15;
I_116076 = Res_116193;
if (!!(((*(*Proca_116016).KindU.S6.Sons->data[I_116076]).Kind == ((NU8) 3)))) goto LA17;
Internalerror_42571((*Proca_116016).Info, ((NimStringDesc*) &TMP190175));
LA17: ;
if (!!(((*(*Procb_116017).KindU.S6.Sons->data[I_116076]).Kind == ((NU8) 3)))) goto LA20;
Internalerror_42571((*Procb_116017).Info, ((NimStringDesc*) &TMP190175));
LA20: ;
A_116019 = (*(*Proca_116016).KindU.S6.Sons->data[I_116076]).KindU.S4.Sym;
B_116020 = (*(*Procb_116017).KindU.S6.Sons->data[I_116076]).KindU.S4.Sym;
LOC23 = !(((*(*A_116019).Name).Sup.Id == (*(*B_116020).Name).Sup.Id));
if (LOC23) goto LA24;
LOC25 = Sametypeornil_92052((*A_116019).Typ, (*B_116020).Typ);
LOC23 = !(LOC25);
LA24: ;
if (!LOC23) goto LA26;
goto BeforeRet;
LA26: ;
LOC29 = !(((*A_116019).Ast == NIM_NIL));
if (!(LOC29)) goto LA30;
LOC29 = !(((*B_116020).Ast == NIM_NIL));
LA30: ;
if (!LOC29) goto LA31;
LOC34 = Exprstructuralequivalent_91035((*A_116019).Ast, (*B_116020).Ast);
if (!!(LOC34)) goto LA35;
goto BeforeRet;
LA35: ;
LA31: ;
Res_116193 += 1;
} LA15: ;
Result_116018 = NIM_TRUE;
BeforeRet: ;
return Result_116018;
}
N_NIMCALL(TY50547*, Searchforproc_116004)(TY102012* C_116006, TY50547* Fn_116007, NI Tos_116008) {
TY50547* Result_116199;
TY55089 It_116200;
NIM_BOOL LOC6;
NU8 LOC9;
Result_116199 = 0;
memset((void*)&It_116200, 0, sizeof(It_116200));
Result_116199 = Initidentiter_55092(&It_116200, &(*C_116006).Tab.Stack->data[Tos_116008], (*Fn_116007).Name);
while (1) {
if (!!((Result_116199 == NIM_NIL))) goto LA1;
if (!((*Result_116199).Kind == (*Fn_116007).Kind)) goto LA3;
LOC6 = Equalgenericparams_116014((*(*Result_116199).Ast).KindU.S6.Sons->data[1], (*(*Fn_116007).Ast).KindU.S6.Sons->data[1]);
if (!LOC6) goto LA7;
LOC9 = Equalparams_92065((*(*Result_116199).Typ).N, (*(*Fn_116007).Typ).N);
switch (LOC9) {
case ((NU8) 1):
goto BeforeRet;
break;
case ((NU8) 2):
Limessage_42566((*Fn_116007).Info, ((NU8) 63), (*(*Fn_116007).Name).S);
goto BeforeRet;
break;
case ((NU8) 0):
break;
}
LA7: ;
LA3: ;
Result_116199 = Nextidentiter_55098(&It_116200, &(*C_116006).Tab.Stack->data[Tos_116008]);
} LA1: ;
BeforeRet: ;
return Result_116199;
}
N_NIMCALL(NIM_BOOL, Paramsfitborrow_116247)(TY50525* A_116249, TY50525* B_116250) {
NIM_BOOL Result_116251;
NI Length_116252;
TY50547* M_116253;
TY50547* N_116254;
NI LOC2;
NI I_116264;
NI HEX3Atmp_116355;
NI Res_116357;
NIM_BOOL LOC7;
NIM_BOOL LOC11;
Result_116251 = 0;
Length_116252 = 0;
M_116253 = 0;
N_116254 = 0;
Length_116252 = Sonslen_50803(A_116249);
Result_116251 = NIM_FALSE;
LOC2 = Sonslen_50803(B_116250);
if (!(Length_116252 == LOC2)) goto LA3;
I_116264 = 0;
HEX3Atmp_116355 = 0;
HEX3Atmp_116355 = (NI64)(Length_116252 - 1);
Res_116357 = 0;
Res_116357 = 1;
while (1) {
if (!(Res_116357 <= HEX3Atmp_116355)) goto LA5;
I_116264 = Res_116357;
M_116253 = (*(*A_116249).KindU.S6.Sons->data[I_116264]).KindU.S4.Sym;
N_116254 = (*(*B_116250).KindU.S6.Sons->data[I_116264]).KindU.S4.Sym;
LOC7 = Equalordistinctof_92056((*M_116253).Typ, (*N_116254).Typ);
if (!!(LOC7)) goto LA8;
goto BeforeRet;
LA8: ;
Res_116357 += 1;
} LA5: ;
LOC11 = Equalordistinctof_92056((*(*A_116249).KindU.S6.Sons->data[0]).Typ, (*(*B_116250).KindU.S6.Sons->data[0]).Typ);
if (!!(LOC11)) goto LA12;
goto BeforeRet;
LA12: ;
Result_116251 = NIM_TRUE;
LA3: ;
BeforeRet: ;
return Result_116251;
}
N_NIMCALL(TY50547*, Searchforborrowproc_116009)(TY102012* C_116011, TY50547* Fn_116012, NI Tos_116013) {
TY50547* Result_116363;
TY55089 It_116364;
NI Scope_116387;
NI Res_116437;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
NIM_BOOL LOC13;
Result_116363 = 0;
memset((void*)&It_116364, 0, sizeof(It_116364));
Scope_116387 = 0;
Res_116437 = 0;
Res_116437 = Tos_116013;
while (1) {
if (!(0 <= Res_116437)) goto LA1;
Scope_116387 = Res_116437;
Result_116363 = Initidentiter_55092(&It_116364, &(*C_116011).Tab.Stack->data[Scope_116387], (*Fn_116012).Name);
while (1) {
if (!!((Result_116363 == NIM_NIL))) goto LA2;
LOC4 = ((*Result_116363).Kind == (*Fn_116012).Kind);
if (!(LOC4)) goto LA5;
LOC4 = !(((*Result_116363).Sup.Id == (*Fn_116012).Sup.Id));
LA5: ;
if (!LOC4) goto LA6;
LOC9 = Equalgenericparams_116014((*(*Result_116363).Ast).KindU.S6.Sons->data[1], (*(*Fn_116012).Ast).KindU.S6.Sons->data[1]);
if (!LOC9) goto LA10;
LOC13 = Paramsfitborrow_116247((*(*Fn_116012).Typ).N, (*(*Result_116363).Typ).N);
if (!LOC13) goto LA14;
goto BeforeRet;
LA14: ;
LA10: ;
LA6: ;
Result_116363 = Nextidentiter_55098(&It_116364, &(*C_116011).Tab.Stack->data[Scope_116387]);
} LA2: ;
Res_116437 -= 1;
} LA1: ;
BeforeRet: ;
return Result_116363;
}
N_NOINLINE(void, procfindInit)(void) {
}

