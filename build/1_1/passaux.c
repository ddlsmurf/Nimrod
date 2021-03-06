/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY101006 TY101006;
typedef struct TY101002 TY101002;
typedef struct TY50548 TY50548;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY89031 TY89031;
typedef struct TY50526 TY50526;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50552 TY50552;
typedef struct TY49011 TY49011;
typedef struct TY42538 TY42538;
typedef struct TY50530 TY50530;
typedef struct TY50528 TY50528;
typedef struct TY50540 TY50540;
typedef struct TY47008 TY47008;
typedef struct TY50544 TY50544;
typedef struct TY50520 TY50520;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY34021 TY34021;
typedef struct TY89029 TY89029;
typedef struct TY55215 TY55215;
typedef struct TY55213 TY55213;
typedef struct TY55211 TY55211;
typedef struct TY50564 TY50564;
typedef struct TY50562 TY50562;
typedef struct TY50560 TY50560;
typedef struct TY50550 TY50550;
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
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY42538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
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
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10994 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10996 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY10994 Stat;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY50528 {
  TGenericSeq Sup;
  TY50548* data[SEQ_DECL_SIZE];
};
struct TY50520 {
  TGenericSeq Sup;
  TY50526* data[SEQ_DECL_SIZE];
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
struct TY50550 {
  TGenericSeq Sup;
  TY50552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_101031)(TY101006* P_101034);
N_NIMCALL(TY101002*, Verboseopen_182004)(TY50548* S_182006, NimStringDesc* Filename_182007);
N_NIMCALL(void, Rawmessage_43045)(NU8 Msg_43047, NimStringDesc* Arg_43048);
N_NIMCALL(TY50526*, Verboseprocess_182013)(TY101002* Context_182015, TY50526* N_182016);
N_NIMCALL(void, Internalerror_43163)(NimStringDesc* Errmsg_43165);
N_NIMCALL(void, Message_43149)(TY42538 Info_43151, NU8 Msg_43152, NimStringDesc* Arg_43153);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
N_NIMCALL(TY50526*, Cleanup_182037)(TY101002* C_182039, TY50526* N_182040);
static N_INLINE(NI, Sonslen_50804)(TY50526* N_50806);
N_NIMCALL(TY50548*, Getmodule_55198)(TY50548* S_55200);
N_NIMCALL(NIM_BOOL, Astneeded_101057)(TY50548* S_101059);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
STRING_LITERAL(TMP191926, "logpass: context is not nil", 27);
extern NI Gverbosity_41085;
extern NI Gid_50693;
extern NU32 Gglobaloptions_41079;
extern TY50526* Emptynode_50858;
extern TY10996 Gch_11014;
N_NIMCALL(TY101002*, Verboseopen_182004)(TY50548* S_182006, NimStringDesc* Filename_182007) {
TY101002* Result_182008;
Result_182008 = 0;
Result_182008 = NIM_NIL;
if (!(0 < Gverbosity_41085)) goto LA2;
Rawmessage_43045(((NU8) 231), (*(*S_182006).Name).S);
LA2: ;
return Result_182008;
}
N_NIMCALL(TY50526*, Verboseprocess_182013)(TY101002* Context_182015, TY50526* N_182016) {
TY50526* Result_182017;
NimStringDesc* LOC7;
Result_182017 = 0;
Result_182017 = N_182016;
if (!!((Context_182015 == NIM_NIL))) goto LA2;
Internalerror_43163(((NimStringDesc*) &TMP191926));
LA2: ;
if (!(Gverbosity_41085 == 3)) goto LA5;
LOC7 = 0;
LOC7 = nimIntToStr(Gid_50693);
Message_43149((*N_182016).Info, ((NU8) 231), LOC7);
LA5: ;
return Result_182017;
}
N_NIMCALL(TY101006, Verbosepass_182033)(void) {
TY101006 Result_182035;
memset((void*)&Result_182035, 0, sizeof(Result_182035));
Initpass_101031(&Result_182035);
Result_182035.Open = Verboseopen_182004;
Result_182035.Process = Verboseprocess_182013;
return Result_182035;
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
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230) {
NI Result_8006;
Result_8006 = 0;
(*Memloc_3229) -= X_3230;
Result_8006 = (*Memloc_3229);
return Result_8006;
}
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11014.Zct, C_12403);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019) {
TY10602* C_13020;
NI LOC4;
TY10602* C_13022;
NI LOC9;
if (!!((Src_13019 == NIM_NIL))) goto LA2;
C_13020 = 0;
C_13020 = Usrtocell_11412(Src_13019);
LOC4 = Atomicinc_3221(&(*C_13020).Refcount, 8);
LA2: ;
if (!!(((*Dest_13018) == NIM_NIL))) goto LA6;
C_13022 = 0;
C_13022 = Usrtocell_11412((*Dest_13018));
LOC9 = Atomicdec_3226(&(*C_13022).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(TY50526*, Cleanup_182037)(TY101002* C_182039, TY50526* N_182040) {
TY50526* Result_182041;
TY50548* S_182042;
NI I_182077;
NI HEX3Atmp_182158;
NI LOC4;
NI Res_182160;
TY50526* LOC6;
NIM_BOOL LOC11;
TY50548* LOC12;
NIM_BOOL LOC14;
Result_182041 = 0;
S_182042 = 0;
Result_182041 = N_182040;
if (!((Gglobaloptions_41079 &(1<<((((NU8) 4))&31)))!=0)) goto LA2;
goto BeforeRet;
LA2: ;
switch ((*N_182040).Kind) {
case ((NU8) 101):
I_182077 = 0;
HEX3Atmp_182158 = 0;
LOC4 = Sonslen_50804(N_182040);
HEX3Atmp_182158 = (NI32)(LOC4 - 1);
Res_182160 = 0;
Res_182160 = 0;
while (1) {
if (!(Res_182160 <= HEX3Atmp_182158)) goto LA5;
I_182077 = Res_182160;
LOC6 = 0;
LOC6 = Cleanup_182037(C_182039, (*N_182040).KindU.S6.Sons->data[I_182077]);
Res_182160 += 1;
} LA5: ;
break;
case ((NU8) 69):
case ((NU8) 70):
if (!((*(*N_182040).KindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA8;
S_182042 = (*(*N_182040).KindU.S6.Sons->data[0]).KindU.S4.Sym;
LOC12 = 0;
LOC12 = Getmodule_55198(S_182042);
LOC11 = !((((*LOC12).Flags &(1<<((((NU8) 28))&31)))!=0));
if (!(LOC11)) goto LA13;
LOC14 = Astneeded_101057(S_182042);
LOC11 = !(LOC14);
LA13: ;
if (!LOC11) goto LA15;
asgnRefNoCycle((void**) &(*(*S_182042).Ast).KindU.S6.Sons->data[4], Emptynode_50858);
LA15: ;
LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_182041;
}
N_NIMCALL(TY101006, Cleanuppass_182161)(void) {
TY101006 Result_182163;
memset((void*)&Result_182163, 0, sizeof(Result_182163));
Initpass_101031(&Result_182163);
Result_182163.Process = Cleanup_182037;
Result_182163.Close = Cleanup_182037;
return Result_182163;
}
N_NOINLINE(void, passauxInit)(void) {
}

