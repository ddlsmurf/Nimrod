/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY50548 TY50548;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50526 TY50526;
typedef struct TY101006 TY101006;
typedef struct TY101002 TY101002;
typedef struct TY89031 TY89031;
typedef struct TY71204 TY71204;
typedef struct TY88028 TY88028;
typedef struct TY77011 TY77011;
typedef struct TY73267 TY73267;
typedef struct TY73263 TY73263;
typedef struct TY50552 TY50552;
typedef struct TY42538 TY42538;
typedef struct TY49011 TY49011;
typedef struct TY50520 TY50520;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY49005 TY49005;
typedef struct TY50530 TY50530;
typedef struct TY50528 TY50528;
typedef struct TY50540 TY50540;
typedef struct TY47008 TY47008;
typedef struct TY50544 TY50544;
typedef struct TY50550 TY50550;
typedef struct TY34021 TY34021;
typedef struct TY89029 TY89029;
typedef struct TY55215 TY55215;
typedef struct TY55213 TY55213;
typedef struct TY55211 TY55211;
typedef struct TY50564 TY50564;
typedef struct TY50562 TY50562;
typedef struct TY50560 TY50560;
typedef struct TY72015 TY72015;
typedef struct TY73281 TY73281;
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
typedef N_NIMCALL_PTR(TY50548*, TY101041) (NimStringDesc* Filename_101042);
typedef N_NIMCALL_PTR(TY50526*, TY101045) (NimStringDesc* Filename_101046);
typedef N_NIMCALL_PTR(TY101002*, TY101007) (TY50548* Module_101008, NimStringDesc* Filename_101009);
typedef N_NIMCALL_PTR(TY101002*, TY101012) (TY50548* Module_101013, NimStringDesc* Filename_101014, TY89031* Rd_101015);
typedef N_NIMCALL_PTR(TY50526*, TY101018) (TY101002* P_101019, TY50526* N_101020);
typedef N_NIMCALL_PTR(TY50526*, TY101023) (TY101002* P_101024, TY50526* Toplevelstmt_101025);
struct TY101006 {
TY101007 Open;
TY101012 Opencached;
TY101018 Close;
TY101023 Process;
};
typedef TY101006 TY101131[10];
struct TY77011 {
TY73267* Lex;
TY73263* Tok;
};
struct TY88028 {
NU8 Skin;
TY77011 Parser;
};
typedef TY101002* TY101129[10];
struct TY42538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50526 {
TY50552* Typ;
NimStringDesc* Comment;
TY42538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY50548* Sym;
} S4;
struct {TY49011* Ident;
} S5;
struct {TY50520* Sons;
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
struct TY71204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY50530 {
TNimType* m_type;
NI Counter;
TY50528* Data;
};
struct TY50540 {
NU8 K;
NU8 S;
NU8 Flags;
TY50552* T;
TY47008* R;
NI A;
};
struct TY50548 {
  TY49005 Sup;
NU8 Kind;
NU8 Magic;
TY50552* Typ;
TY49011* Name;
TY42538 Info;
TY50548* Owner;
NU32 Flags;
TY50530 Tab;
TY50526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY50540 Loc;
TY50544* Annex;
};
struct TY50552 {
  TY49005 Sup;
NU8 Kind;
TY50550* Sons;
TY50526* N;
NU8 Flags;
NU8 Callconv;
TY50548* Owner;
TY50548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY50540 Loc;
};
struct TY101002 {
  TNimObject Sup;
};
struct TY55211 {
NI Key;
NI Val;
};
struct TY55215 {
NI Counter;
TY55213* Data;
};
struct TY89029 {
NI Lastidxkey;
NI Lastidxval;
TY55215 Tab;
TY47008* R;
NI Offset;
};
struct TY50560 {
TY49005* Key;
TNimObject* Val;
};
struct TY50564 {
NI Counter;
TY50562* Data;
};
struct TY89031 {
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
TY89029 Index;
TY89029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY50564 Syms;
};
struct TY72015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY71204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY73267 {
  TY72015 Sup;
NimStringDesc* Filename;
TY73281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY73263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY49011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY73263* Next;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct TY50544 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50526* Path;
};
struct TY50520 {
  TGenericSeq Sup;
  TY50526* data[SEQ_DECL_SIZE];
};
struct TY50528 {
  TGenericSeq Sup;
  TY50548* data[SEQ_DECL_SIZE];
};
struct TY50550 {
  TGenericSeq Sup;
  TY50552* data[SEQ_DECL_SIZE];
};
struct TY34021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY55213 {
  TGenericSeq Sup;
  TY55211 data[SEQ_DECL_SIZE];
};
struct TY50562 {
  TGenericSeq Sup;
  TY50560 data[SEQ_DECL_SIZE];
};
struct TY73281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Openpasses_101150)(TY101002** A_101153, TY50548* Module_101154, NimStringDesc* Filename_101155);
N_NIMCALL(TY71204*, Llstreamopen_71224)(NimStringDesc* Filename_71226, NU8 Mode_71227);
N_NIMCALL(void, Rawmessage_43045)(NU8 Msg_43047, NimStringDesc* Arg_43048);
N_NIMCALL(void, Openparsers_88034)(TY88028* P_88037, NimStringDesc* Filename_88038, TY71204* Inputstream_88039);
N_NIMCALL(TY50526*, Parsetoplevelstmt_88048)(TY88028* P_88051);
N_NIMCALL(void, Processtoplevelstmt_101219)(TY50526* N_101221, TY101002** A_101223);
N_NIMCALL(void, Closeparsers_88040)(TY88028* P_88043);
N_NIMCALL(void, Closepasses_101202)(TY101002** A_101205);
N_NIMCALL(void, Idsynchronizationpoint_50699)(NI Idrange_50701);
N_NIMCALL(void, Openpassescached_101183)(TY101002** A_101186, TY50548* Module_101187, NimStringDesc* Filename_101188, TY89031* Rd_101189);
N_NIMCALL(TY50526*, Loadinitsection_89067)(TY89031* R_89069);
static N_INLINE(NI, Sonslen_50804)(TY50526* N_50806);
N_NIMCALL(void, Processtoplevelstmtcached_101237)(TY50526* N_101239, TY101002** A_101241);
N_NIMCALL(void, Closepassescached_101255)(TY101002** A_101258);
TY101041 Gimportmodule_101044;
TY101045 Gincludefile_101048;
TY101131 Gpasses_101133;
NI Gpasseslen_101134;
extern TY50526* Emptynode_50858;
N_NIMCALL(void, Openpasses_101150)(TY101002** A_101153, TY50548* Module_101154, NimStringDesc* Filename_101155) {
NI I_101179;
NI HEX3Atmp_101180;
NI Res_101182;
I_101179 = 0;
HEX3Atmp_101180 = 0;
HEX3Atmp_101180 = (NI32)(Gpasseslen_101134 - 1);
Res_101182 = 0;
Res_101182 = 0;
while (1) {
if (!(Res_101182 <= HEX3Atmp_101180)) goto LA1;
I_101179 = Res_101182;
if (!!(((void*) (Gpasses_101133[(I_101179)-0].Open)) == 0)) goto LA3;
A_101153[(I_101179)-0] = Gpasses_101133[(I_101179)-0].Open(Module_101154, Filename_101155);
goto LA2;
LA3: ;
A_101153[(I_101179)-0] = NIM_NIL;
LA2: ;
Res_101182 += 1;
} LA1: ;
}
N_NIMCALL(void, Processtoplevelstmt_101219)(TY50526* N_101221, TY101002** A_101223) {
TY50526* M_101224;
NI I_101233;
NI HEX3Atmp_101234;
NI Res_101236;
M_101224 = 0;
M_101224 = N_101221;
I_101233 = 0;
HEX3Atmp_101234 = 0;
HEX3Atmp_101234 = (NI32)(Gpasseslen_101134 - 1);
Res_101236 = 0;
Res_101236 = 0;
while (1) {
if (!(Res_101236 <= HEX3Atmp_101234)) goto LA1;
I_101233 = Res_101236;
if (!!(((void*) (Gpasses_101133[(I_101233)-0].Process)) == 0)) goto LA3;
M_101224 = Gpasses_101133[(I_101233)-0].Process(A_101223[(I_101233)-0], M_101224);
LA3: ;
Res_101236 += 1;
} LA1: ;
}
N_NIMCALL(void, Closepasses_101202)(TY101002** A_101205) {
TY50526* M_101206;
NI I_101215;
NI HEX3Atmp_101216;
NI Res_101218;
M_101206 = 0;
M_101206 = NIM_NIL;
I_101215 = 0;
HEX3Atmp_101216 = 0;
HEX3Atmp_101216 = (NI32)(Gpasseslen_101134 - 1);
Res_101218 = 0;
Res_101218 = 0;
while (1) {
if (!(Res_101218 <= HEX3Atmp_101216)) goto LA1;
I_101215 = Res_101218;
if (!!(((void*) (Gpasses_101133[(I_101215)-0].Close)) == 0)) goto LA3;
M_101206 = Gpasses_101133[(I_101215)-0].Close(A_101205[(I_101215)-0], M_101206);
LA3: ;
A_101205[(I_101215)-0] = NIM_NIL;
Res_101218 += 1;
} LA1: ;
}
N_NIMCALL(void, Openpassescached_101183)(TY101002** A_101186, TY50548* Module_101187, NimStringDesc* Filename_101188, TY89031* Rd_101189) {
NI I_101198;
NI HEX3Atmp_101199;
NI Res_101201;
I_101198 = 0;
HEX3Atmp_101199 = 0;
HEX3Atmp_101199 = (NI32)(Gpasseslen_101134 - 1);
Res_101201 = 0;
Res_101201 = 0;
while (1) {
if (!(Res_101201 <= HEX3Atmp_101199)) goto LA1;
I_101198 = Res_101201;
if (!!(((void*) (Gpasses_101133[(I_101198)-0].Opencached)) == 0)) goto LA3;
A_101186[(I_101198)-0] = Gpasses_101133[(I_101198)-0].Opencached(Module_101187, Filename_101188, Rd_101189);
goto LA2;
LA3: ;
A_101186[(I_101198)-0] = NIM_NIL;
LA2: ;
Res_101201 += 1;
} LA1: ;
}
static N_INLINE(NI, Sonslen_50804)(TY50526* N_50806) {
NI Result_51880;
Result_51880 = 0;
if (!(*N_50806).KindU.S6.Sons == 0) goto LA2;
Result_51880 = 0;
goto LA1;
LA2: ;
Result_51880 = (*N_50806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_51880;
}
N_NIMCALL(void, Processtoplevelstmtcached_101237)(TY50526* N_101239, TY101002** A_101241) {
TY50526* M_101242;
NI I_101251;
NI HEX3Atmp_101252;
NI Res_101254;
M_101242 = 0;
M_101242 = N_101239;
I_101251 = 0;
HEX3Atmp_101252 = 0;
HEX3Atmp_101252 = (NI32)(Gpasseslen_101134 - 1);
Res_101254 = 0;
Res_101254 = 0;
while (1) {
if (!(Res_101254 <= HEX3Atmp_101252)) goto LA1;
I_101251 = Res_101254;
if (!!(((void*) (Gpasses_101133[(I_101251)-0].Opencached)) == 0)) goto LA3;
M_101242 = Gpasses_101133[(I_101251)-0].Process(A_101241[(I_101251)-0], M_101242);
LA3: ;
Res_101254 += 1;
} LA1: ;
}
N_NIMCALL(void, Closepassescached_101255)(TY101002** A_101258) {
TY50526* M_101259;
NI I_101268;
NI HEX3Atmp_101269;
NI Res_101271;
NIM_BOOL LOC3;
M_101259 = 0;
M_101259 = Emptynode_50858;
I_101268 = 0;
HEX3Atmp_101269 = 0;
HEX3Atmp_101269 = (NI32)(Gpasseslen_101134 - 1);
Res_101271 = 0;
Res_101271 = 0;
while (1) {
if (!(Res_101271 <= HEX3Atmp_101269)) goto LA1;
I_101268 = Res_101271;
LOC3 = !(((void*) (Gpasses_101133[(I_101268)-0].Opencached)) == 0);
if (!(LOC3)) goto LA4;
LOC3 = !(((void*) (Gpasses_101133[(I_101268)-0].Close)) == 0);
LA4: ;
if (!LOC3) goto LA5;
M_101259 = Gpasses_101133[(I_101268)-0].Close(A_101258[(I_101268)-0], M_101259);
LA5: ;
A_101258[(I_101268)-0] = NIM_NIL;
Res_101271 += 1;
} LA1: ;
}
N_NIMCALL(void, Processmodule_101035)(TY50548* Module_101037, NimStringDesc* Filename_101038, TY71204* Stream_101039, TY89031* Rd_101040) {
TY88028 P_101278;
TY101129 A_101279;
TY71204* S_101280;
TY50526* N_101317;
TY50526* N_101340;
NI I_101349;
NI HEX3Atmp_101364;
NI LOC18;
NI Res_101366;
memset((void*)&P_101278, 0, sizeof(P_101278));
memset((void*)&A_101279, 0, sizeof(A_101279));
S_101280 = 0;
if (!(Rd_101040 == NIM_NIL)) goto LA2;
Openpasses_101150(A_101279, Module_101037, Filename_101038);
if (!(Stream_101039 == NIM_NIL)) goto LA5;
S_101280 = Llstreamopen_71224(Filename_101038, ((NU8) 0));
if (!(S_101280 == NIM_NIL)) goto LA8;
Rawmessage_43045(((NU8) 2), Filename_101038);
goto BeforeRet;
LA8: ;
goto LA4;
LA5: ;
S_101280 = Stream_101039;
LA4: ;
while (1) {
Openparsers_88034(&P_101278, Filename_101038, S_101280);
while (1) {
N_101317 = 0;
N_101317 = Parsetoplevelstmt_88048(&P_101278);
if (!((*N_101317).Kind == ((NU8) 1))) goto LA13;
goto LA11;
LA13: ;
Processtoplevelstmt_101219(N_101317, A_101279);
} LA11: ;
Closeparsers_88040(&P_101278);
if (!!(((*S_101280).Kind == ((NU8) 3)))) goto LA16;
goto LA10;
LA16: ;
} LA10: ;
Closepasses_101202(A_101279);
Idsynchronizationpoint_50699(1000);
goto LA1;
LA2: ;
Openpassescached_101183(A_101279, Module_101037, Filename_101038, Rd_101040);
N_101340 = 0;
N_101340 = Loadinitsection_89067(Rd_101040);
I_101349 = 0;
HEX3Atmp_101364 = 0;
LOC18 = Sonslen_50804(N_101340);
HEX3Atmp_101364 = (NI32)(LOC18 - 1);
Res_101366 = 0;
Res_101366 = 0;
while (1) {
if (!(Res_101366 <= HEX3Atmp_101364)) goto LA19;
I_101349 = Res_101366;
Processtoplevelstmtcached_101237((*N_101340).KindU.S6.Sons->data[I_101349], A_101279);
Res_101366 += 1;
} LA19: ;
Closepassescached_101255(A_101279);
LA1: ;
BeforeRet: ;
}
N_NIMCALL(void, Registerpass_101028)(TY101006* P_101030) {
Gpasses_101133[(Gpasseslen_101134)-0] = (*P_101030);
Gpasseslen_101134 += 1;
}
N_NIMCALL(void, Initpass_101031)(TY101006* P_101034) {
(*P_101034).Open = NIM_NIL;
(*P_101034).Opencached = NIM_NIL;
(*P_101034).Close = NIM_NIL;
(*P_101034).Process = NIM_NIL;
}
N_NIMCALL(NIM_BOOL, Astneeded_101057)(TY50548* S_101059) {
NIM_BOOL Result_101060;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
NIM_BOOL LOC4;
Result_101060 = 0;
LOC4 = ((3072 &(1<<(((*S_101059).Kind)&31)))!=0);
if (!(LOC4)) goto LA5;
LOC4 = ((34078720 & (*S_101059).Flags) == 0);
LA5: ;
LOC3 = LOC4;
if (!(LOC3)) goto LA6;
LOC3 = !(((*(*S_101059).Typ).Callconv == ((NU8) 5)));
LA6: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA7;
LOC2 = ((*(*(*S_101059).Ast).KindU.S6.Sons->data[1]).Kind == ((NU8) 1));
LA7: ;
if (!LOC2) goto LA8;
Result_101060 = NIM_FALSE;
goto LA1;
LA8: ;
Result_101060 = NIM_TRUE;
LA1: ;
return Result_101060;
}
N_NOINLINE(void, passesInit)(void) {
}

