/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY50547 TY50547;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50525 TY50525;
typedef struct TY100006 TY100006;
typedef struct TY100002 TY100002;
typedef struct TY88031 TY88031;
typedef struct TY70013 TY70013;
typedef struct TY87028 TY87028;
typedef struct TY76011 TY76011;
typedef struct TY72267 TY72267;
typedef struct TY72263 TY72263;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50551 TY50551;
typedef struct TY42536 TY42536;
typedef struct TY49011 TY49011;
typedef struct TY50519 TY50519;
typedef struct TY49005 TY49005;
typedef struct TY50529 TY50529;
typedef struct TY50527 TY50527;
typedef struct TY50539 TY50539;
typedef struct TY47008 TY47008;
typedef struct TY50543 TY50543;
typedef struct TY50549 TY50549;
typedef struct TY34021 TY34021;
typedef struct TY88029 TY88029;
typedef struct TY55220 TY55220;
typedef struct TY55218 TY55218;
typedef struct TY55216 TY55216;
typedef struct TY50563 TY50563;
typedef struct TY50561 TY50561;
typedef struct TY50559 TY50559;
typedef struct TY71015 TY71015;
typedef struct TY72281 TY72281;
typedef struct TY38013 TY38013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_NIMCALL_PTR(TY50547*, TY100044) (NimStringDesc* Filename_100045);
typedef N_NIMCALL_PTR(TY50525*, TY100048) (NimStringDesc* Filename_100049);
typedef N_NIMCALL_PTR(TY100002*, TY100007) (TY50547* Module_100008, NimStringDesc* Filename_100009);
typedef N_NIMCALL_PTR(TY100002*, TY100012) (TY50547* Module_100013, NimStringDesc* Filename_100014, TY88031* Rd_100015);
typedef N_NIMCALL_PTR(TY50525*, TY100018) (TY100002* P_100019, TY50525* N_100020);
typedef N_NIMCALL_PTR(TY50525*, TY100023) (TY100002* P_100024, TY50525* Toplevelstmt_100025);
struct TY100006 {
TY100007 Open;
TY100012 Opencached;
TY100018 Close;
TY100023 Process;
};
typedef TY100006 TY100128[10];
struct TY76011 {
TY72267* Lex;
TY72263* Tok;
};
struct TY87028 {
NU8 Skin;
TY76011 Parser;
};
typedef TY100002* TY100126[10];
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
struct TY70013 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
};
struct TY42536 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY50529 {
TNimType* m_type;
NI Counter;
TY50527* Data;
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
struct TY100002 {
  TNimObject Sup;
};
struct TY55216 {
NI Key;
NI Val;
};
struct TY55220 {
NI Counter;
TY55218* Data;
};
struct TY88029 {
NI Lastidxkey;
NI Lastidxval;
TY55220 Tab;
TY47008* R;
NI Offset;
};
struct TY50559 {
TY49005* Key;
TNimObject* Val;
};
struct TY50563 {
NI Counter;
TY50561* Data;
};
struct TY88031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY34021* Moddeps;
TY34021* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY88029 Index;
TY88029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY50563 Syms;
};
struct TY71015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY70013* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY72267 {
  TY71015 Sup;
NimStringDesc* Filename;
TY72281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY72263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY49011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY72263* Next;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY50543 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50525* Path;
};
struct TY50519 {
  TGenericSeq Sup;
  TY50525* data[SEQ_DECL_SIZE];
};
struct TY50527 {
  TGenericSeq Sup;
  TY50547* data[SEQ_DECL_SIZE];
};
struct TY50549 {
  TGenericSeq Sup;
  TY50551* data[SEQ_DECL_SIZE];
};
struct TY34021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY55218 {
  TGenericSeq Sup;
  TY55216 data[SEQ_DECL_SIZE];
};
struct TY50561 {
  TGenericSeq Sup;
  TY50559 data[SEQ_DECL_SIZE];
};
struct TY72281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Openpasses_100147)(TY100002** A_100150, TY50547* Module_100151, NimStringDesc* Filename_100152);
N_NIMCALL(TY70013*, Llstreamopen_70032)(NimStringDesc* Filename_70034, NU8 Mode_70035);
N_NIMCALL(void, Rawmessage_42557)(NU8 Msg_42559, NimStringDesc* Arg_42560);
N_NIMCALL(void, Openparsers_87034)(TY87028* P_87037, NimStringDesc* Filename_87038, TY70013* Inputstream_87039);
N_NIMCALL(TY50525*, Parsetoplevelstmt_87048)(TY87028* P_87051);
N_NIMCALL(void, Processtoplevelstmt_100213)(TY50525* N_100215, TY100002** A_100217);
N_NIMCALL(void, Closeparsers_87040)(TY87028* P_87043);
N_NIMCALL(void, Closepasses_100197)(TY100002** A_100200);
N_NIMCALL(void, Idsynchronizationpoint_50698)(NI Idrange_50700);
N_NIMCALL(void, Openpassescached_100179)(TY100002** A_100182, TY50547* Module_100183, NimStringDesc* Filename_100184, TY88031* Rd_100185);
N_NIMCALL(TY50525*, Loadinitsection_88067)(TY88031* R_88069);
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805);
N_NIMCALL(void, Processtoplevelstmtcached_100230)(TY50525* N_100232, TY100002** A_100234);
N_NIMCALL(void, Closepassescached_100247)(TY100002** A_100250);
TY100044 Gimportmodule_100047;
TY100048 Gincludefile_100051;
TY100128 Gpasses_100130;
NI Gpasseslen_100131;
N_NIMCALL(void, Openpasses_100147)(TY100002** A_100150, TY50547* Module_100151, NimStringDesc* Filename_100152) {
NI I_100175;
NI HEX3Atmp_100176;
NI Res_100178;
I_100175 = 0;
HEX3Atmp_100176 = 0;
HEX3Atmp_100176 = (NI32)(Gpasseslen_100131 - 1);
Res_100178 = 0;
Res_100178 = 0;
while (1) {
if (!(Res_100178 <= HEX3Atmp_100176)) goto LA1;
I_100175 = Res_100178;
if (!!(((void*) (Gpasses_100130[(I_100175)-0].Open)) == 0)) goto LA3;
A_100150[(I_100175)-0] = Gpasses_100130[(I_100175)-0].Open(Module_100151, Filename_100152);
goto LA2;
LA3: ;
A_100150[(I_100175)-0] = NIM_NIL;
LA2: ;
Res_100178 += 1;
} LA1: ;
}
N_NIMCALL(void, Processtoplevelstmt_100213)(TY50525* N_100215, TY100002** A_100217) {
TY50525* M_100218;
NI I_100226;
NI HEX3Atmp_100227;
NI Res_100229;
M_100218 = 0;
M_100218 = N_100215;
I_100226 = 0;
HEX3Atmp_100227 = 0;
HEX3Atmp_100227 = (NI32)(Gpasseslen_100131 - 1);
Res_100229 = 0;
Res_100229 = 0;
while (1) {
if (!(Res_100229 <= HEX3Atmp_100227)) goto LA1;
I_100226 = Res_100229;
if (!!(((void*) (Gpasses_100130[(I_100226)-0].Process)) == 0)) goto LA3;
M_100218 = Gpasses_100130[(I_100226)-0].Process(A_100217[(I_100226)-0], M_100218);
LA3: ;
Res_100229 += 1;
} LA1: ;
}
N_NIMCALL(void, Closepasses_100197)(TY100002** A_100200) {
TY50525* M_100201;
NI I_100209;
NI HEX3Atmp_100210;
NI Res_100212;
M_100201 = 0;
M_100201 = NIM_NIL;
I_100209 = 0;
HEX3Atmp_100210 = 0;
HEX3Atmp_100210 = (NI32)(Gpasseslen_100131 - 1);
Res_100212 = 0;
Res_100212 = 0;
while (1) {
if (!(Res_100212 <= HEX3Atmp_100210)) goto LA1;
I_100209 = Res_100212;
if (!!(((void*) (Gpasses_100130[(I_100209)-0].Close)) == 0)) goto LA3;
M_100201 = Gpasses_100130[(I_100209)-0].Close(A_100200[(I_100209)-0], M_100201);
LA3: ;
A_100200[(I_100209)-0] = NIM_NIL;
Res_100212 += 1;
} LA1: ;
}
N_NIMCALL(void, Openpassescached_100179)(TY100002** A_100182, TY50547* Module_100183, NimStringDesc* Filename_100184, TY88031* Rd_100185) {
NI I_100193;
NI HEX3Atmp_100194;
NI Res_100196;
I_100193 = 0;
HEX3Atmp_100194 = 0;
HEX3Atmp_100194 = (NI32)(Gpasseslen_100131 - 1);
Res_100196 = 0;
Res_100196 = 0;
while (1) {
if (!(Res_100196 <= HEX3Atmp_100194)) goto LA1;
I_100193 = Res_100196;
if (!!(((void*) (Gpasses_100130[(I_100193)-0].Opencached)) == 0)) goto LA3;
A_100182[(I_100193)-0] = Gpasses_100130[(I_100193)-0].Opencached(Module_100183, Filename_100184, Rd_100185);
goto LA2;
LA3: ;
A_100182[(I_100193)-0] = NIM_NIL;
LA2: ;
Res_100196 += 1;
} LA1: ;
}
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
N_NIMCALL(void, Processtoplevelstmtcached_100230)(TY50525* N_100232, TY100002** A_100234) {
TY50525* M_100235;
NI I_100243;
NI HEX3Atmp_100244;
NI Res_100246;
M_100235 = 0;
M_100235 = N_100232;
I_100243 = 0;
HEX3Atmp_100244 = 0;
HEX3Atmp_100244 = (NI32)(Gpasseslen_100131 - 1);
Res_100246 = 0;
Res_100246 = 0;
while (1) {
if (!(Res_100246 <= HEX3Atmp_100244)) goto LA1;
I_100243 = Res_100246;
if (!!(((void*) (Gpasses_100130[(I_100243)-0].Opencached)) == 0)) goto LA3;
M_100235 = Gpasses_100130[(I_100243)-0].Process(A_100234[(I_100243)-0], M_100235);
LA3: ;
Res_100246 += 1;
} LA1: ;
}
N_NIMCALL(void, Closepassescached_100247)(TY100002** A_100250) {
TY50525* M_100251;
NI I_100259;
NI HEX3Atmp_100260;
NI Res_100262;
NIM_BOOL LOC3;
M_100251 = 0;
M_100251 = NIM_NIL;
I_100259 = 0;
HEX3Atmp_100260 = 0;
HEX3Atmp_100260 = (NI32)(Gpasseslen_100131 - 1);
Res_100262 = 0;
Res_100262 = 0;
while (1) {
if (!(Res_100262 <= HEX3Atmp_100260)) goto LA1;
I_100259 = Res_100262;
LOC3 = !(((void*) (Gpasses_100130[(I_100259)-0].Opencached)) == 0);
if (!(LOC3)) goto LA4;
LOC3 = !(((void*) (Gpasses_100130[(I_100259)-0].Close)) == 0);
LA4: ;
if (!LOC3) goto LA5;
M_100251 = Gpasses_100130[(I_100259)-0].Close(A_100250[(I_100259)-0], M_100251);
LA5: ;
A_100250[(I_100259)-0] = NIM_NIL;
Res_100262 += 1;
} LA1: ;
}
N_NIMCALL(void, Processmodule_100035)(TY50547* Module_100037, NimStringDesc* Filename_100038, TY70013* Stream_100039, TY88031* Rd_100040) {
TY87028 P_100269;
TY50525* N_100270;
TY100126 A_100271;
TY70013* S_100272;
NI I_100340;
NI HEX3Atmp_100355;
NI LOC18;
NI Res_100357;
memset((void*)&P_100269, 0, sizeof(P_100269));
N_100270 = 0;
memset((void*)&A_100271, 0, sizeof(A_100271));
S_100272 = 0;
if (!(Rd_100040 == NIM_NIL)) goto LA2;
Openpasses_100147(A_100271, Module_100037, Filename_100038);
if (!(Stream_100039 == NIM_NIL)) goto LA5;
S_100272 = Llstreamopen_70032(Filename_100038, ((NU8) 0));
if (!(S_100272 == NIM_NIL)) goto LA8;
Rawmessage_42557(((NU8) 2), Filename_100038);
goto BeforeRet;
LA8: ;
goto LA4;
LA5: ;
S_100272 = Stream_100039;
LA4: ;
while (1) {
Openparsers_87034(&P_100269, Filename_100038, S_100272);
while (1) {
N_100270 = Parsetoplevelstmt_87048(&P_100269);
if (!(N_100270 == NIM_NIL)) goto LA13;
goto LA11;
LA13: ;
Processtoplevelstmt_100213(N_100270, A_100271);
} LA11: ;
Closeparsers_87040(&P_100269);
if (!!(((*S_100272).Kind == ((NU8) 3)))) goto LA16;
goto LA10;
LA16: ;
} LA10: ;
Closepasses_100197(A_100271);
Idsynchronizationpoint_50698(1000);
goto LA1;
LA2: ;
Openpassescached_100179(A_100271, Module_100037, Filename_100038, Rd_100040);
N_100270 = Loadinitsection_88067(Rd_100040);
I_100340 = 0;
HEX3Atmp_100355 = 0;
LOC18 = Sonslen_50803(N_100270);
HEX3Atmp_100355 = (NI32)(LOC18 - 1);
Res_100357 = 0;
Res_100357 = 0;
while (1) {
if (!(Res_100357 <= HEX3Atmp_100355)) goto LA19;
I_100340 = Res_100357;
Processtoplevelstmtcached_100230((*N_100270).KindU.S6.Sons->data[I_100340], A_100271);
Res_100357 += 1;
} LA19: ;
Closepassescached_100247(A_100271);
LA1: ;
BeforeRet: ;
}
N_NIMCALL(void, Registerpass_100028)(TY100006* P_100030) {
Gpasses_100130[(Gpasseslen_100131)-0] = (*P_100030);
Gpasseslen_100131 += 1;
}
N_NIMCALL(void, Initpass_100031)(TY100006* P_100034) {
(*P_100034).Open = NIM_NIL;
(*P_100034).Opencached = NIM_NIL;
(*P_100034).Close = NIM_NIL;
(*P_100034).Process = NIM_NIL;
}
N_NIMCALL(NIM_BOOL, Astneeded_100041)(TY50547* S_100043) {
NIM_BOOL Result_100055;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
NIM_BOOL LOC4;
Result_100055 = 0;
LOC4 = ((3072 &(1<<(((*S_100043).Kind)&31)))!=0);
if (!(LOC4)) goto LA5;
LOC4 = ((34078720 & (*S_100043).Flags) == 0);
LA5: ;
LOC3 = LOC4;
if (!(LOC3)) goto LA6;
LOC3 = !(((*(*S_100043).Typ).Callconv == ((NU8) 5)));
LA6: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA7;
LOC2 = ((*(*S_100043).Ast).KindU.S6.Sons->data[1] == NIM_NIL);
LA7: ;
if (!LOC2) goto LA8;
Result_100055 = NIM_FALSE;
goto LA1;
LA8: ;
Result_100055 = NIM_TRUE;
LA1: ;
return Result_100055;
}
N_NOINLINE(void, passesInit)(void) {
}

