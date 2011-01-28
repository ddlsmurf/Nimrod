/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY54525 TY54525;
typedef struct TY91028 TY91028;
typedef struct TY80011 TY80011;
typedef struct TY76267 TY76267;
typedef struct TY76263 TY76263;
typedef struct TY74013 TY74013;
typedef struct TY54551 TY54551;
typedef struct TY46536 TY46536;
typedef struct TY54547 TY54547;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY75015 TY75015;
typedef struct TY76281 TY76281;
typedef struct TY54549 TY54549;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54543 TY54543;
typedef struct TY42013 TY42013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY91013[3];
typedef NimStringDesc* TY91017[4];
struct TY80011 {
TY76267* Lex;
TY76263* Tok;
};
struct TY91028 {
NU8 Skin;
TY80011 Parser;
};
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54525 {
TY54551* Typ;
NimStringDesc* Comment;
TY46536 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54547* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54519* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
typedef NimStringDesc* TY45320[1];
struct TY74013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY75015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY74013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY76267 {
  TY75015 Sup;
NimStringDesc* Filename;
TY76281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY76263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY53011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY76263* Next;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
};
struct TY54551 {
  TY53005 Sup;
NU8 Kind;
TY54549* Sons;
TY54525* N;
NU8 Flags;
NU8 Callconv;
TY54547* Owner;
TY54547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54539 Loc;
};
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TY54547 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54551* Typ;
TY53011* Name;
TY46536 Info;
TY54547* Owner;
NU32 Flags;
TY54529 Tab;
TY54525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54539 Loc;
TY54543* Annex;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY76281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Rawmessage_46557)(NU8 Msg_46559, NimStringDesc* Arg_46560);
N_NIMCALL(void, Openparsers_91034)(TY91028* P_91037, NimStringDesc* Filename_91038, TY74013* Inputstream_91039);
N_NIMCALL(TY54525*, Parsepipe_91122)(NimStringDesc* Filename_91124, TY74013* Inputstream_91125);
N_NIMCALL(TY74013*, Llstreamopen_74032)(NimStringDesc* Filename_74034, NU8 Mode_74035);
N_NIMCALL(NimStringDesc*, Llstreamreadline_74048)(TY74013* S_74050);
N_NIMCALL(NI, Utf8bom_91077)(NimStringDesc* S_91079);
N_NIMCALL(NIM_BOOL, Containsshebang_91087)(NimStringDesc* S_91089, NI I_91090);
N_NIMCALL(void, Openparser_80018)(TY80011* P_80021, NimStringDesc* Filename_80022, TY74013* Inputstream_80023);
N_NIMCALL(TY74013*, Llstreamopen_74025)(NimStringDesc* Data_74027);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(TY54525*, Parseall_80014)(TY80011* P_80017);
N_NIMCALL(void, Closeparser_80024)(TY80011* P_80027);
N_NIMCALL(void, Llstreamclose_74040)(TY74013* S_74042);
N_NIMCALL(TY74013*, Evalpipe_91372)(TY91028* P_91375, TY54525* N_91376, NimStringDesc* Filename_91377, TY74013* Start_91378);
N_NIMCALL(NIM_BOOL, Identeq_53028)(TY53011* Id_53030, NimStringDesc* Name_53031);
N_NIMCALL(TY74013*, Applyfilter_91335)(TY91028* P_91338, TY54525* N_91339, NimStringDesc* Filename_91340, TY74013* Stdin_91341);
N_NIMCALL(TY53011*, Getcallee_91256)(TY54525* N_91258);
N_NIMCALL(NimStringDesc*, Rendertree_84042)(TY54525* N_84044, NU8 Renderflags_84047);
N_NIMCALL(NU8, Getfilter_91184)(TY53011* Ident_91186);
N_NIMCALL(NU8, Getparser_91220)(TY53011* Ident_91222);
N_NIMCALL(TY74013*, Filtertmpl_90001)(TY74013* Stdin_90003, NimStringDesc* Filename_90004, TY54525* Call_90005);
N_NIMCALL(TY74013*, Filterstrip_89009)(TY74013* Stdin_89011, NimStringDesc* Filename_89012, TY54525* Call_89013);
N_NIMCALL(TY74013*, Filterreplace_89004)(TY74013* Stdin_89006, NimStringDesc* Filename_89007, TY54525* Call_89008);
N_NIMCALL(void, Rawmessage_46561)(NU8 Msg_46563, NimStringDesc** Args_46565, NI Args_46565Len0);
N_NIMCALL(void, Messageout_46554)(NimStringDesc* S_46556);
N_NIMCALL(TY74013*, Llstreamopen_74028)(FILE** F_74031);
N_NIMCALL(TY54525*, Parseall_91044)(TY91028* P_91047);
N_NIMCALL(TY54525*, Parseall_82004)(TY80011* P_82007);
N_NIMCALL(void, Internalerror_46575)(NimStringDesc* Errmsg_46577);
N_NIMCALL(void, Closeparsers_91040)(TY91028* P_91043);
N_NIMCALL(TY54525*, Parsetoplevelstmt_80028)(TY80011* P_80031);
N_NIMCALL(TY54525*, Parsetoplevelstmt_82008)(TY80011* P_82011);
STRING_LITERAL(TMP91020, "standard", 8);
STRING_LITERAL(TMP91021, "braces", 6);
STRING_LITERAL(TMP91022, "endx", 4);
NIM_CONST TY91013 Parsernames_91012 = {((NimStringDesc*) &TMP91020),
((NimStringDesc*) &TMP91021),
((NimStringDesc*) &TMP91022)}
;
STRING_LITERAL(TMP91023, "none", 4);
STRING_LITERAL(TMP91024, "stdtmpl", 7);
STRING_LITERAL(TMP91025, "replace", 7);
STRING_LITERAL(TMP91026, "strip", 5);
NIM_CONST TY91017 Filternames_91016 = {((NimStringDesc*) &TMP91023),
((NimStringDesc*) &TMP91024),
((NimStringDesc*) &TMP91025),
((NimStringDesc*) &TMP91026)}
;
STRING_LITERAL(TMP193734, "|", 1);
STRING_LITERAL(TMP193857, "parser to implement", 19);
extern NI Gverbosity_45084;
N_NIMCALL(NI, Utf8bom_91077)(NimStringDesc* S_91079) {
NI Result_91080;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
Result_91080 = 0;
LOC3 = ((NU8)(S_91079->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(S_91079->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)(S_91079->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
Result_91080 = 3;
goto LA1;
LA6: ;
Result_91080 = 0;
LA1: ;
return Result_91080;
}
N_NIMCALL(NIM_BOOL, Containsshebang_91087)(NimStringDesc* S_91089, NI I_91090) {
NIM_BOOL Result_91091;
NIM_BOOL LOC2;
NI J_91096;
Result_91091 = 0;
LOC2 = ((NU8)(S_91089->data[I_91090]) == (NU8)(35));
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(S_91089->data[(NI64)(I_91090 + 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_91096 = 0;
J_91096 = (NI64)(I_91090 + 2);
while (1) {
if (!(((NU8)(S_91089->data[J_91096])) == ((NU8)(32)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(9)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(11)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(13)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(10)) || ((NU8)(S_91089->data[J_91096])) == ((NU8)(12)))) goto LA6;
J_91096 += 1;
} LA6: ;
Result_91091 = ((NU8)(S_91089->data[J_91096]) == (NU8)(47));
LA4: ;
return Result_91091;
}
N_NIMCALL(TY54525*, Parsepipe_91122)(NimStringDesc* Filename_91124, TY74013* Inputstream_91125) {
TY54525* Result_91126;
TY74013* S_91127;
NimStringDesc* Line_91139;
NI I_91140;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY80011 Q_91180;
NimStringDesc* LOC14;
TY74013* LOC15;
Result_91126 = 0;
S_91127 = 0;
S_91127 = Llstreamopen_74032(Filename_91124, ((NU8) 0));
if (!!((S_91127 == NIM_NIL))) goto LA2;
Line_91139 = 0;
Line_91139 = Llstreamreadline_74048(S_91127);
I_91140 = 0;
I_91140 = Utf8bom_91077(Line_91139);
LOC5 = Containsshebang_91087(Line_91139, I_91140);
if (!LOC5) goto LA6;
Line_91139 = Llstreamreadline_74048(S_91127);
I_91140 = 0;
LA6: ;
LOC9 = ((NU8)(Line_91139->data[I_91140]) == (NU8)(35));
if (!(LOC9)) goto LA10;
LOC9 = ((NU8)(Line_91139->data[(NI64)(I_91140 + 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
I_91140 += 2;
while (1) {
if (!(((NU8)(Line_91139->data[I_91140])) == ((NU8)(32)) || ((NU8)(Line_91139->data[I_91140])) == ((NU8)(9)) || ((NU8)(Line_91139->data[I_91140])) == ((NU8)(11)) || ((NU8)(Line_91139->data[I_91140])) == ((NU8)(13)) || ((NU8)(Line_91139->data[I_91140])) == ((NU8)(10)) || ((NU8)(Line_91139->data[I_91140])) == ((NU8)(12)))) goto LA13;
I_91140 += 1;
} LA13: ;
memset((void*)&Q_91180, 0, sizeof(Q_91180));
LOC14 = 0;
LOC14 = copyStr(Line_91139, I_91140);
LOC15 = 0;
LOC15 = Llstreamopen_74025(LOC14);
Openparser_80018(&Q_91180, Filename_91124, LOC15);
Result_91126 = Parseall_80014(&Q_91180);
Closeparser_80024(&Q_91180);
LA11: ;
Llstreamclose_74040(S_91127);
LA2: ;
return Result_91126;
}
N_NIMCALL(TY53011*, Getcallee_91256)(TY54525* N_91258) {
TY53011* Result_91259;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
Result_91259 = 0;
LOC2 = ((*N_91258).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
LOC2 = ((*(*N_91258).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
Result_91259 = (*(*N_91258).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_91258).Kind == ((NU8) 2))) goto LA6;
Result_91259 = (*N_91258).KindU.S5.Ident;
goto LA1;
LA6: ;
LOC8 = 0;
LOC8 = Rendertree_84042(N_91258, 0);
Rawmessage_46557(((NU8) 160), LOC8);
LA1: ;
return Result_91259;
}
N_NIMCALL(NU8, Getfilter_91184)(TY53011* Ident_91186) {
NU8 Result_91187;
NU8 I_91217;
NU8 Res_91219;
NIM_BOOL LOC3;
Result_91187 = 0;
I_91217 = 0;
Res_91219 = 0;
Res_91219 = ((NU8) 0);
while (1) {
if (!(Res_91219 <= ((NU8) 3))) goto LA1;
I_91217 = Res_91219;
LOC3 = Identeq_53028(Ident_91186, Filternames_91016[(I_91217)-0]);
if (!LOC3) goto LA4;
Result_91187 = I_91217;
goto BeforeRet;
LA4: ;
Res_91219 += 1;
} LA1: ;
Result_91187 = ((NU8) 0);
BeforeRet: ;
return Result_91187;
}
N_NIMCALL(NU8, Getparser_91220)(TY53011* Ident_91222) {
NU8 Result_91223;
NU8 I_91253;
NU8 Res_91255;
NIM_BOOL LOC3;
Result_91223 = 0;
I_91253 = 0;
Res_91255 = 0;
Res_91255 = ((NU8) 0);
while (1) {
if (!(Res_91255 <= ((NU8) 2))) goto LA1;
I_91253 = Res_91255;
LOC3 = Identeq_53028(Ident_91222, Parsernames_91012[(I_91253)-0]);
if (!LOC3) goto LA4;
Result_91223 = I_91253;
goto BeforeRet;
LA4: ;
Res_91255 += 1;
} LA1: ;
Rawmessage_46557(((NU8) 28), (*Ident_91222).S);
BeforeRet: ;
return Result_91223;
}
N_NIMCALL(TY74013*, Applyfilter_91335)(TY91028* P_91338, TY54525* N_91339, NimStringDesc* Filename_91340, TY74013* Stdin_91341) {
TY74013* Result_91342;
TY53011* Ident_91343;
NU8 F_91344;
TY45320 LOC7;
TY45320 LOC8;
Result_91342 = 0;
Ident_91343 = 0;
Ident_91343 = Getcallee_91256(N_91339);
F_91344 = 0;
F_91344 = Getfilter_91184(Ident_91343);
switch (F_91344) {
case ((NU8) 0):
(*P_91338).Skin = Getparser_91220(Ident_91343);
Result_91342 = Stdin_91341;
break;
case ((NU8) 1):
Result_91342 = Filtertmpl_90001(Stdin_91341, Filename_91340, N_91339);
break;
case ((NU8) 3):
Result_91342 = Filterstrip_89009(Stdin_91341, Filename_91340, N_91339);
break;
case ((NU8) 2):
Result_91342 = Filterreplace_89004(Stdin_91341, Filename_91340, N_91339);
break;
}
if (!!((F_91344 == ((NU8) 0)))) goto LA2;
if (!(2 <= Gverbosity_45084)) goto LA5;
memset((void*)&LOC7, 0, sizeof(LOC7));
Rawmessage_46561(((NU8) 233), LOC7, 0);
Messageout_46554((*Result_91342).S);
memset((void*)&LOC8, 0, sizeof(LOC8));
Rawmessage_46561(((NU8) 234), LOC8, 0);
LA5: ;
LA2: ;
return Result_91342;
}
N_NIMCALL(TY74013*, Evalpipe_91372)(TY91028* P_91375, TY54525* N_91376, NimStringDesc* Filename_91377, TY74013* Start_91378) {
TY74013* Result_91379;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_91467;
NI Res_91535;
Result_91379 = 0;
Result_91379 = Start_91378;
if (!(N_91376 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
LOC6 = ((*N_91376).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*N_91376).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
LOC5 = Identeq_53028((*(*N_91376).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP193734));
LA8: ;
if (!LOC5) goto LA9;
I_91467 = 0;
Res_91535 = 0;
Res_91535 = 1;
while (1) {
if (!(Res_91535 <= 2)) goto LA11;
I_91467 = Res_91535;
if (!((*(*N_91376).KindU.S6.Sons->data[I_91467]).Kind == ((NU8) 27))) goto LA13;
Result_91379 = Evalpipe_91372(P_91375, (*N_91376).KindU.S6.Sons->data[I_91467], Filename_91377, Result_91379);
goto LA12;
LA13: ;
Result_91379 = Applyfilter_91335(P_91375, (*N_91376).KindU.S6.Sons->data[I_91467], Filename_91377, Result_91379);
LA12: ;
Res_91535 += 1;
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_91376).Kind == ((NU8) 101))) goto LA15;
Result_91379 = Evalpipe_91372(P_91375, (*N_91376).KindU.S6.Sons->data[0], Filename_91377, Result_91379);
goto LA4;
LA15: ;
Result_91379 = Applyfilter_91335(P_91375, N_91376, Filename_91377, Result_91379);
LA4: ;
BeforeRet: ;
return Result_91379;
}
N_NIMCALL(void, Openparsers_91034)(TY91028* P_91037, NimStringDesc* Filename_91038, TY74013* Inputstream_91039) {
TY74013* S_91542;
TY54525* Pipe_91543;
S_91542 = 0;
(*P_91037).Skin = ((NU8) 0);
Pipe_91543 = 0;
Pipe_91543 = Parsepipe_91122(Filename_91038, Inputstream_91039);
if (!!((Pipe_91543 == NIM_NIL))) goto LA2;
S_91542 = Evalpipe_91372(P_91037, Pipe_91543, Filename_91038, Inputstream_91039);
goto LA1;
LA2: ;
S_91542 = Inputstream_91039;
LA1: ;
switch ((*P_91037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
Openparser_80018(&(*P_91037).Parser, Filename_91038, S_91542);
break;
}
}
N_NIMCALL(TY54525*, Parseall_91044)(TY91028* P_91047) {
TY54525* Result_91067;
Result_91067 = 0;
switch ((*P_91047).Skin) {
case ((NU8) 0):
Result_91067 = Parseall_80014(&(*P_91047).Parser);
break;
case ((NU8) 1):
Result_91067 = Parseall_82004(&(*P_91047).Parser);
break;
case ((NU8) 2):
Internalerror_46575(((NimStringDesc*) &TMP193857));
break;
}
return Result_91067;
}
N_NIMCALL(void, Closeparsers_91040)(TY91028* P_91043) {
Closeparser_80024(&(*P_91043).Parser);
}
N_NIMCALL(TY54525*, Parsefile_91031)(NimStringDesc* Filename_91033) {
TY54525* Result_91055;
TY91028 P_91056;
FILE* F_91057;
NIM_BOOL LOC2;
TY74013* LOC5;
Result_91055 = 0;
memset((void*)&P_91056, 0, sizeof(P_91056));
F_91057 = 0;
LOC2 = Open_3617(&F_91057, Filename_91033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
Rawmessage_46557(((NU8) 2), Filename_91033);
goto BeforeRet;
LA3: ;
LOC5 = 0;
LOC5 = Llstreamopen_74028(&F_91057);
Openparsers_91034(&P_91056, Filename_91033, LOC5);
Result_91055 = Parseall_91044(&P_91056);
Closeparsers_91040(&P_91056);
BeforeRet: ;
return Result_91055;
}
N_NIMCALL(TY54525*, Parsetoplevelstmt_91048)(TY91028* P_91051) {
TY54525* Result_91074;
Result_91074 = 0;
switch ((*P_91051).Skin) {
case ((NU8) 0):
Result_91074 = Parsetoplevelstmt_80028(&(*P_91051).Parser);
break;
case ((NU8) 1):
Result_91074 = Parsetoplevelstmt_82008(&(*P_91051).Parser);
break;
case ((NU8) 2):
Internalerror_46575(((NimStringDesc*) &TMP193857));
break;
}
return Result_91074;
}
N_NOINLINE(void, syntaxesInit)(void) {
}

