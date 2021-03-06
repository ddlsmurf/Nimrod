/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55526 TY55526;
typedef struct TY92028 TY92028;
typedef struct TY81011 TY81011;
typedef struct TY77267 TY77267;
typedef struct TY77263 TY77263;
typedef struct TY75204 TY75204;
typedef struct TY55552 TY55552;
typedef struct TY47538 TY47538;
typedef struct TY55548 TY55548;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY54005 TY54005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY76015 TY76015;
typedef struct TY77281 TY77281;
typedef struct TY55550 TY55550;
typedef struct TY55540 TY55540;
typedef struct TY52008 TY52008;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55544 TY55544;
typedef struct TY43013 TY43013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY92013[3];
typedef NimStringDesc* TY92017[4];
struct TY81011 {
TY77267* Lex;
TY77263* Tok;
};
struct TY92028 {
NU8 Skin;
TY81011 Parser;
};
struct TY47538 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY55526 {
TY55552* Typ;
NimStringDesc* Comment;
TY47538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY55548* Sym;
} S4;
struct {TY54011* Ident;
} S5;
struct {TY55520* Sons;
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
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
typedef NimStringDesc* TY46331[1];
struct TY75204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TY76015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY75204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY77267 {
  TY76015 Sup;
NimStringDesc* Filename;
TY77281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY77263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY54011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY77263* Next;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
};
struct TY55552 {
  TY54005 Sup;
NU8 Kind;
TY55550* Sons;
TY55526* N;
NU8 Flags;
NU8 Callconv;
TY55548* Owner;
TY55548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY55540 Loc;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY55548 {
  TY54005 Sup;
NU8 Kind;
NU8 Magic;
TY55552* Typ;
TY54011* Name;
TY47538 Info;
TY55548* Owner;
NU32 Flags;
TY55530 Tab;
TY55526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY55540 Loc;
TY55544* Annex;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY43013 {
  TNimObject Sup;
TY43013* Prev;
TY43013* Next;
};
struct TY55544 {
  TY43013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY52008* Name;
TY55526* Path;
};
struct TY55520 {
  TGenericSeq Sup;
  TY55526* data[SEQ_DECL_SIZE];
};
struct TY77281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, Open_3817)(FILE** F_3820, NimStringDesc* Filename_3821, NU8 Mode_3822, NI Bufsize_3823);
N_NIMCALL(void, Rawmessage_48045)(NU8 Msg_48047, NimStringDesc* Arg_48048);
N_NIMCALL(void, Openparsers_92034)(TY92028* P_92037, NimStringDesc* Filename_92038, TY75204* Inputstream_92039);
N_NIMCALL(TY55526*, Parsepipe_92122)(NimStringDesc* Filename_92124, TY75204* Inputstream_92125);
N_NIMCALL(TY75204*, Llstreamopen_75224)(NimStringDesc* Filename_75226, NU8 Mode_75227);
N_NIMCALL(NimStringDesc*, Llstreamreadline_75240)(TY75204* S_75242);
N_NIMCALL(NI, Utf8bom_92077)(NimStringDesc* S_92079);
N_NIMCALL(NIM_BOOL, Containsshebang_92087)(NimStringDesc* S_92089, NI I_92090);
N_NIMCALL(void, Openparser_81018)(TY81011* P_81021, NimStringDesc* Filename_81022, TY75204* Inputstream_81023);
N_NIMCALL(TY75204*, Llstreamopen_75217)(NimStringDesc* Data_75219);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(TY55526*, Parseall_81014)(TY81011* P_81017);
N_NIMCALL(void, Closeparser_81024)(TY81011* P_81027);
N_NIMCALL(void, Llstreamclose_75232)(TY75204* S_75234);
N_NIMCALL(TY75204*, Evalpipe_92374)(TY92028* P_92377, TY55526* N_92378, NimStringDesc* Filename_92379, TY75204* Start_92380);
N_NIMCALL(NIM_BOOL, Identeq_54028)(TY54011* Id_54030, NimStringDesc* Name_54031);
N_NIMCALL(TY75204*, Applyfilter_92337)(TY92028* P_92340, TY55526* N_92341, NimStringDesc* Filename_92342, TY75204* Stdin_92343);
N_NIMCALL(TY54011*, Getcallee_92258)(TY55526* N_92260);
N_NIMCALL(NimStringDesc*, Rendertree_85042)(TY55526* N_85044, NU8 Renderflags_85047);
N_NIMCALL(NU8, Getfilter_92184)(TY54011* Ident_92186);
N_NIMCALL(NU8, Getparser_92221)(TY54011* Ident_92223);
N_NIMCALL(TY75204*, Filtertmpl_91001)(TY75204* Stdin_91003, NimStringDesc* Filename_91004, TY55526* Call_91005);
N_NIMCALL(TY75204*, Filterstrip_90009)(TY75204* Stdin_90011, NimStringDesc* Filename_90012, TY55526* Call_90013);
N_NIMCALL(TY75204*, Filterreplace_90004)(TY75204* Stdin_90006, NimStringDesc* Filename_90007, TY55526* Call_90008);
N_NIMCALL(void, Rawmessage_47971)(NU8 Msg_47973, NimStringDesc** Args_47975, NI Args_47975Len0);
N_NIMCALL(void, Messageout_47775)(NimStringDesc* S_47777);
N_NIMCALL(TY75204*, Llstreamopen_75220)(FILE** F_75223);
N_NIMCALL(TY55526*, Parseall_92044)(TY92028* P_92047);
N_NIMCALL(TY55526*, Parseall_83004)(TY81011* P_83007);
N_NIMCALL(void, Internalerror_48163)(NimStringDesc* Errmsg_48165);
N_NIMCALL(void, Closeparsers_92040)(TY92028* P_92043);
N_NIMCALL(TY55526*, Parsetoplevelstmt_81028)(TY81011* P_81031);
N_NIMCALL(TY55526*, Parsetoplevelstmt_83008)(TY81011* P_83011);
STRING_LITERAL(TMP92020, "standard", 8);
STRING_LITERAL(TMP92021, "braces", 6);
STRING_LITERAL(TMP92022, "endx", 4);
NIM_CONST TY92013 Parsernames_92012 = {((NimStringDesc*) &TMP92020),
((NimStringDesc*) &TMP92021),
((NimStringDesc*) &TMP92022)}
;
STRING_LITERAL(TMP92023, "none", 4);
STRING_LITERAL(TMP92024, "stdtmpl", 7);
STRING_LITERAL(TMP92025, "replace", 7);
STRING_LITERAL(TMP92026, "strip", 5);
NIM_CONST TY92017 Filternames_92016 = {((NimStringDesc*) &TMP92023),
((NimStringDesc*) &TMP92024),
((NimStringDesc*) &TMP92025),
((NimStringDesc*) &TMP92026)}
;
STRING_LITERAL(TMP195739, "|", 1);
STRING_LITERAL(TMP195862, "parser to implement", 19);
extern TY55526* Emptynode_55858;
extern NI Gverbosity_46085;
N_NIMCALL(NI, Utf8bom_92077)(NimStringDesc* S_92079) {
NI Result_92080;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
Result_92080 = 0;
LOC3 = ((NU8)(S_92079->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(S_92079->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)(S_92079->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
Result_92080 = 3;
goto LA1;
LA6: ;
Result_92080 = 0;
LA1: ;
return Result_92080;
}
N_NIMCALL(NIM_BOOL, Containsshebang_92087)(NimStringDesc* S_92089, NI I_92090) {
NIM_BOOL Result_92091;
NIM_BOOL LOC2;
NI J_92096;
Result_92091 = 0;
LOC2 = ((NU8)(S_92089->data[I_92090]) == (NU8)(35));
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(S_92089->data[(NI32)(I_92090 + 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_92096 = 0;
J_92096 = (NI32)(I_92090 + 2);
while (1) {
if (!(((NU8)(S_92089->data[J_92096])) == ((NU8)(32)) || ((NU8)(S_92089->data[J_92096])) == ((NU8)(9)) || ((NU8)(S_92089->data[J_92096])) == ((NU8)(11)) || ((NU8)(S_92089->data[J_92096])) == ((NU8)(13)) || ((NU8)(S_92089->data[J_92096])) == ((NU8)(10)) || ((NU8)(S_92089->data[J_92096])) == ((NU8)(12)))) goto LA6;
J_92096 += 1;
} LA6: ;
Result_92091 = ((NU8)(S_92089->data[J_92096]) == (NU8)(47));
LA4: ;
return Result_92091;
}
N_NIMCALL(TY55526*, Parsepipe_92122)(NimStringDesc* Filename_92124, TY75204* Inputstream_92125) {
TY55526* Result_92126;
TY75204* S_92127;
NimStringDesc* Line_92139;
NI I_92140;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY81011 Q_92180;
NimStringDesc* LOC14;
TY75204* LOC15;
Result_92126 = 0;
Result_92126 = Emptynode_55858;
S_92127 = 0;
S_92127 = Llstreamopen_75224(Filename_92124, ((NU8) 0));
if (!!((S_92127 == NIM_NIL))) goto LA2;
Line_92139 = 0;
Line_92139 = Llstreamreadline_75240(S_92127);
I_92140 = 0;
I_92140 = Utf8bom_92077(Line_92139);
LOC5 = Containsshebang_92087(Line_92139, I_92140);
if (!LOC5) goto LA6;
Line_92139 = Llstreamreadline_75240(S_92127);
I_92140 = 0;
LA6: ;
LOC9 = ((NU8)(Line_92139->data[I_92140]) == (NU8)(35));
if (!(LOC9)) goto LA10;
LOC9 = ((NU8)(Line_92139->data[(NI32)(I_92140 + 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
I_92140 += 2;
while (1) {
if (!(((NU8)(Line_92139->data[I_92140])) == ((NU8)(32)) || ((NU8)(Line_92139->data[I_92140])) == ((NU8)(9)) || ((NU8)(Line_92139->data[I_92140])) == ((NU8)(11)) || ((NU8)(Line_92139->data[I_92140])) == ((NU8)(13)) || ((NU8)(Line_92139->data[I_92140])) == ((NU8)(10)) || ((NU8)(Line_92139->data[I_92140])) == ((NU8)(12)))) goto LA13;
I_92140 += 1;
} LA13: ;
memset((void*)&Q_92180, 0, sizeof(Q_92180));
LOC14 = 0;
LOC14 = copyStr(Line_92139, I_92140);
LOC15 = 0;
LOC15 = Llstreamopen_75217(LOC14);
Openparser_81018(&Q_92180, Filename_92124, LOC15);
Result_92126 = Parseall_81014(&Q_92180);
Closeparser_81024(&Q_92180);
LA11: ;
Llstreamclose_75232(S_92127);
LA2: ;
return Result_92126;
}
N_NIMCALL(TY54011*, Getcallee_92258)(TY55526* N_92260) {
TY54011* Result_92261;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
Result_92261 = 0;
LOC2 = ((*N_92260).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
LOC2 = ((*(*N_92260).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
Result_92261 = (*(*N_92260).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_92260).Kind == ((NU8) 2))) goto LA6;
Result_92261 = (*N_92260).KindU.S5.Ident;
goto LA1;
LA6: ;
LOC8 = 0;
LOC8 = Rendertree_85042(N_92260, 0);
Rawmessage_48045(((NU8) 159), LOC8);
LA1: ;
return Result_92261;
}
N_NIMCALL(NU8, Getfilter_92184)(TY54011* Ident_92186) {
NU8 Result_92187;
NU8 I_92218;
NU8 Res_92220;
NIM_BOOL LOC3;
Result_92187 = 0;
I_92218 = 0;
Res_92220 = 0;
Res_92220 = ((NU8) 0);
while (1) {
if (!(Res_92220 <= ((NU8) 3))) goto LA1;
I_92218 = Res_92220;
LOC3 = Identeq_54028(Ident_92186, Filternames_92016[(I_92218)-0]);
if (!LOC3) goto LA4;
Result_92187 = I_92218;
goto BeforeRet;
LA4: ;
Res_92220 += 1;
} LA1: ;
Result_92187 = ((NU8) 0);
BeforeRet: ;
return Result_92187;
}
N_NIMCALL(NU8, Getparser_92221)(TY54011* Ident_92223) {
NU8 Result_92224;
NU8 I_92255;
NU8 Res_92257;
NIM_BOOL LOC3;
Result_92224 = 0;
I_92255 = 0;
Res_92257 = 0;
Res_92257 = ((NU8) 0);
while (1) {
if (!(Res_92257 <= ((NU8) 2))) goto LA1;
I_92255 = Res_92257;
LOC3 = Identeq_54028(Ident_92223, Parsernames_92012[(I_92255)-0]);
if (!LOC3) goto LA4;
Result_92224 = I_92255;
goto BeforeRet;
LA4: ;
Res_92257 += 1;
} LA1: ;
Rawmessage_48045(((NU8) 28), (*Ident_92223).S);
BeforeRet: ;
return Result_92224;
}
N_NIMCALL(TY75204*, Applyfilter_92337)(TY92028* P_92340, TY55526* N_92341, NimStringDesc* Filename_92342, TY75204* Stdin_92343) {
TY75204* Result_92344;
TY54011* Ident_92345;
NU8 F_92346;
TY46331 LOC7;
TY46331 LOC8;
Result_92344 = 0;
Ident_92345 = 0;
Ident_92345 = Getcallee_92258(N_92341);
F_92346 = 0;
F_92346 = Getfilter_92184(Ident_92345);
switch (F_92346) {
case ((NU8) 0):
(*P_92340).Skin = Getparser_92221(Ident_92345);
Result_92344 = Stdin_92343;
break;
case ((NU8) 1):
Result_92344 = Filtertmpl_91001(Stdin_92343, Filename_92342, N_92341);
break;
case ((NU8) 3):
Result_92344 = Filterstrip_90009(Stdin_92343, Filename_92342, N_92341);
break;
case ((NU8) 2):
Result_92344 = Filterreplace_90004(Stdin_92343, Filename_92342, N_92341);
break;
}
if (!!((F_92346 == ((NU8) 0)))) goto LA2;
if (!(2 <= Gverbosity_46085)) goto LA5;
memset((void*)&LOC7, 0, sizeof(LOC7));
Rawmessage_47971(((NU8) 232), LOC7, 0);
Messageout_47775((*Result_92344).S);
memset((void*)&LOC8, 0, sizeof(LOC8));
Rawmessage_47971(((NU8) 233), LOC8, 0);
LA5: ;
LA2: ;
return Result_92344;
}
N_NIMCALL(TY75204*, Evalpipe_92374)(TY92028* P_92377, TY55526* N_92378, NimStringDesc* Filename_92379, TY75204* Start_92380) {
TY75204* Result_92381;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_92468;
NI Res_92536;
Result_92381 = 0;
Result_92381 = Start_92380;
if (!((*N_92378).Kind == ((NU8) 1))) goto LA2;
goto BeforeRet;
LA2: ;
LOC6 = ((*N_92378).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*N_92378).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
LOC5 = Identeq_54028((*(*N_92378).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP195739));
LA8: ;
if (!LOC5) goto LA9;
I_92468 = 0;
Res_92536 = 0;
Res_92536 = 1;
while (1) {
if (!(Res_92536 <= 2)) goto LA11;
I_92468 = Res_92536;
if (!((*(*N_92378).KindU.S6.Sons->data[I_92468]).Kind == ((NU8) 27))) goto LA13;
Result_92381 = Evalpipe_92374(P_92377, (*N_92378).KindU.S6.Sons->data[I_92468], Filename_92379, Result_92381);
goto LA12;
LA13: ;
Result_92381 = Applyfilter_92337(P_92377, (*N_92378).KindU.S6.Sons->data[I_92468], Filename_92379, Result_92381);
LA12: ;
Res_92536 += 1;
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_92378).Kind == ((NU8) 101))) goto LA15;
Result_92381 = Evalpipe_92374(P_92377, (*N_92378).KindU.S6.Sons->data[0], Filename_92379, Result_92381);
goto LA4;
LA15: ;
Result_92381 = Applyfilter_92337(P_92377, N_92378, Filename_92379, Result_92381);
LA4: ;
BeforeRet: ;
return Result_92381;
}
N_NIMCALL(void, Openparsers_92034)(TY92028* P_92037, NimStringDesc* Filename_92038, TY75204* Inputstream_92039) {
TY75204* S_92543;
TY55526* Pipe_92544;
S_92543 = 0;
(*P_92037).Skin = ((NU8) 0);
Pipe_92544 = 0;
Pipe_92544 = Parsepipe_92122(Filename_92038, Inputstream_92039);
if (!!((Pipe_92544 == NIM_NIL))) goto LA2;
S_92543 = Evalpipe_92374(P_92037, Pipe_92544, Filename_92038, Inputstream_92039);
goto LA1;
LA2: ;
S_92543 = Inputstream_92039;
LA1: ;
switch ((*P_92037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
Openparser_81018(&(*P_92037).Parser, Filename_92038, S_92543);
break;
}
}
N_NIMCALL(TY55526*, Parseall_92044)(TY92028* P_92047) {
TY55526* Result_92067;
Result_92067 = 0;
switch ((*P_92047).Skin) {
case ((NU8) 0):
Result_92067 = Parseall_81014(&(*P_92047).Parser);
break;
case ((NU8) 1):
Result_92067 = Parseall_83004(&(*P_92047).Parser);
break;
case ((NU8) 2):
Internalerror_48163(((NimStringDesc*) &TMP195862));
Result_92067 = Emptynode_55858;
break;
}
return Result_92067;
}
N_NIMCALL(void, Closeparsers_92040)(TY92028* P_92043) {
Closeparser_81024(&(*P_92043).Parser);
}
N_NIMCALL(TY55526*, Parsefile_92031)(NimStringDesc* Filename_92033) {
TY55526* Result_92055;
TY92028 P_92056;
FILE* F_92057;
NIM_BOOL LOC2;
TY75204* LOC5;
Result_92055 = 0;
memset((void*)&P_92056, 0, sizeof(P_92056));
F_92057 = 0;
LOC2 = Open_3817(&F_92057, Filename_92033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
Rawmessage_48045(((NU8) 2), Filename_92033);
goto BeforeRet;
LA3: ;
LOC5 = 0;
LOC5 = Llstreamopen_75220(&F_92057);
Openparsers_92034(&P_92056, Filename_92033, LOC5);
Result_92055 = Parseall_92044(&P_92056);
Closeparsers_92040(&P_92056);
BeforeRet: ;
return Result_92055;
}
N_NIMCALL(TY55526*, Parsetoplevelstmt_92048)(TY92028* P_92051) {
TY55526* Result_92074;
Result_92074 = 0;
switch ((*P_92051).Skin) {
case ((NU8) 0):
Result_92074 = Parsetoplevelstmt_81028(&(*P_92051).Parser);
break;
case ((NU8) 1):
Result_92074 = Parsetoplevelstmt_83008(&(*P_92051).Parser);
break;
case ((NU8) 2):
Internalerror_48163(((NimStringDesc*) &TMP195862));
Result_92074 = Emptynode_55858;
break;
}
return Result_92074;
}
N_NOINLINE(void, syntaxesInit)(void) {
}

