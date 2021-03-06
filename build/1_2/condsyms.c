/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY50530 TY50530;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY50528 TY50528;
typedef struct TY50548 TY50548;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY49011 TY49011;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TY50552 TY50552;
typedef struct TY42538 TY42538;
typedef struct TY50526 TY50526;
typedef struct TY50540 TY50540;
typedef struct TY47008 TY47008;
typedef struct TY50544 TY50544;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY46449 TY46449;
typedef struct TY46036 TY46036;
typedef struct TY55071 TY55071;
typedef struct TY50550 TY50550;
typedef struct TY50520 TY50520;
typedef struct TY38013 TY38013;
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
struct TY50530 {
TNimType* m_type;
NI Counter;
TY50528* Data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY46449 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY46449 TY46462[13];
typedef NimStringDesc* TY46458[2];
struct TY46036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY46036 TY46054[21];
struct TY55071 {
NI H;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
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
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY50528 {
  TGenericSeq Sup;
  TY50548* data[SEQ_DECL_SIZE];
};
struct TY50550 {
  TGenericSeq Sup;
  TY50552* data[SEQ_DECL_SIZE];
};
struct TY50520 {
  TGenericSeq Sup;
  TY50526* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initstrtable_50747)(TY50530* X_50750);
N_NIMCALL(void, Definesymbol_59053)(NimStringDesc* Symbol_59055);
N_NIMCALL(TY49011*, Getident_49016)(NimStringDesc* Identifier_49018);
N_NIMCALL(TY50548*, Strtableget_55066)(TY50530* T_55068, TY49011* Name_55069);
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
N_NIMCALL(void, objectInit)(void* Dest_19476, TNimType* Typ_19477);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(void, Strtableadd_55061)(TY50530* T_55064, TY50548* N_55065);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_23540);
N_NIMCALL(TY50548*, Inittabiter_55073)(TY55071* Ti_55076, TY50530* Tab_55077);
N_NIMCALL(void, Messageout_42775)(NimStringDesc* S_42777);
N_NIMCALL(TY50548*, Nextiter_55078)(TY55071* Ti_55081, TY50530* Tab_55082);
STRING_LITERAL(TMP191610, "nimrod", 6);
STRING_LITERAL(TMP191611, "x86", 3);
STRING_LITERAL(TMP191612, "itanium", 7);
STRING_LITERAL(TMP191613, "x8664", 5);
STRING_LITERAL(TMP191614, "msdos", 5);
STRING_LITERAL(TMP191615, "mswindows", 9);
STRING_LITERAL(TMP191616, "win32", 5);
STRING_LITERAL(TMP191617, "unix", 4);
STRING_LITERAL(TMP191618, "posix", 5);
STRING_LITERAL(TMP191619, "sunos", 5);
STRING_LITERAL(TMP191620, "bsd", 3);
STRING_LITERAL(TMP191621, "macintosh", 9);
STRING_LITERAL(TMP191622, "cpu", 3);
extern NIM_CONST TY46462 Cpu_46461;
extern NIM_CONST TY46458 Endiantostr_46457;
extern NIM_CONST TY46054 Os_46053;
STRING_LITERAL(TMP191671, "-- List of currently defined symbols --", 39);
STRING_LITERAL(TMP191672, "-- End of list --", 17);
TY50530 Gsymbols_59001;
extern TNimType* NTI50530; /* TStrTable */
extern TNimType* NTI50524; /* PSym */
extern TNimType* NTI50548; /* TSym */
extern TY10996 Gch_11014;
extern NU8 Targetcpu_46568;
extern NU8 Targetos_46570;
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
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
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(void, Definesymbol_59053)(NimStringDesc* Symbol_59055) {
TY49011* I_59069;
TY50548* Sym_59070;
I_59069 = 0;
I_59069 = Getident_49016(Symbol_59055);
Sym_59070 = 0;
Sym_59070 = Strtableget_55066(&Gsymbols_59001, I_59069);
if (!(Sym_59070 == NIM_NIL)) goto LA2;
Sym_59070 = (TY50548*) newObj(NTI50524, sizeof(TY50548));
objectInit(Sym_59070, NTI50548);
(*Sym_59070).Kind = ((NU8) 1);
asgnRefNoCycle((void**) &(*Sym_59070).Name, I_59069);
Strtableadd_55061(&Gsymbols_59001, Sym_59070);
LA2: ;
(*Sym_59070).Position = 1;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
N_NIMCALL(void, Initdefines_59049)(void) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Initstrtable_50747(&Gsymbols_59001);
Definesymbol_59053(((NimStringDesc*) &TMP191610));
switch (Targetcpu_46568) {
case ((NU8) 1):
Definesymbol_59053(((NimStringDesc*) &TMP191611));
break;
case ((NU8) 8):
Definesymbol_59053(((NimStringDesc*) &TMP191612));
break;
case ((NU8) 9):
Definesymbol_59053(((NimStringDesc*) &TMP191613));
break;
default:
break;
}
switch (Targetos_46570) {
case ((NU8) 1):
Definesymbol_59053(((NimStringDesc*) &TMP191614));
break;
case ((NU8) 2):
Definesymbol_59053(((NimStringDesc*) &TMP191615));
Definesymbol_59053(((NimStringDesc*) &TMP191616));
break;
case ((NU8) 4):
case ((NU8) 5):
case ((NU8) 6):
case ((NU8) 8):
case ((NU8) 13):
case ((NU8) 14):
case ((NU8) 16):
case ((NU8) 12):
Definesymbol_59053(((NimStringDesc*) &TMP191617));
Definesymbol_59053(((NimStringDesc*) &TMP191618));
break;
case ((NU8) 7):
Definesymbol_59053(((NimStringDesc*) &TMP191619));
Definesymbol_59053(((NimStringDesc*) &TMP191617));
Definesymbol_59053(((NimStringDesc*) &TMP191618));
break;
case ((NU8) 9):
case ((NU8) 10):
case ((NU8) 11):
Definesymbol_59053(((NimStringDesc*) &TMP191617));
Definesymbol_59053(((NimStringDesc*) &TMP191620));
Definesymbol_59053(((NimStringDesc*) &TMP191618));
break;
case ((NU8) 18):
Definesymbol_59053(((NimStringDesc*) &TMP191621));
break;
case ((NU8) 19):
Definesymbol_59053(((NimStringDesc*) &TMP191621));
Definesymbol_59053(((NimStringDesc*) &TMP191617));
Definesymbol_59053(((NimStringDesc*) &TMP191618));
break;
default:
break;
}
LOC1 = 0;
LOC2 = 0;
LOC2 = nimIntToStr(Cpu_46461[(Targetcpu_46568)-1].Bit);
LOC1 = rawNewString(LOC2->Sup.len + 3);
appendString(LOC1, ((NimStringDesc*) &TMP191622));
appendString(LOC1, LOC2);
Definesymbol_59053(LOC1);
LOC3 = 0;
LOC3 = nsuNormalize(Endiantostr_46457[(Cpu_46461[(Targetcpu_46568)-1].Endian)-0]);
Definesymbol_59053(LOC3);
Definesymbol_59053(Cpu_46461[(Targetcpu_46568)-1].Name);
Definesymbol_59053(Os_46053[(Targetos_46570)-1].Name);
}
N_NIMCALL(void, Undefsymbol_59056)(NimStringDesc* Symbol_59058) {
TY50548* Sym_59101;
TY49011* LOC1;
Sym_59101 = 0;
LOC1 = 0;
LOC1 = Getident_49016(Symbol_59058);
Sym_59101 = Strtableget_55066(&Gsymbols_59001, LOC1);
if (!!((Sym_59101 == NIM_NIL))) goto LA3;
(*Sym_59101).Position = 0;
LA3: ;
}
N_NIMCALL(void, Listsymbols_59062)(void) {
TY55071 It_59133;
TY50548* S_59135;
memset((void*)&It_59133, 0, sizeof(It_59133));
S_59135 = 0;
S_59135 = Inittabiter_55073(&It_59133, &Gsymbols_59001);
Messageout_42775(((NimStringDesc*) &TMP191671));
while (1) {
if (!!((S_59135 == NIM_NIL))) goto LA1;
if (!((*S_59135).Position == 1)) goto LA3;
Messageout_42775((*(*S_59135).Name).S);
LA3: ;
S_59135 = Nextiter_55078(&It_59133, &Gsymbols_59001);
} LA1: ;
Messageout_42775(((NimStringDesc*) &TMP191672));
}
N_NIMCALL(NIM_BOOL, Isdefined_59059)(TY49011* Symbol_59061) {
NIM_BOOL Result_59116;
TY50548* Sym_59117;
NIM_BOOL LOC1;
Result_59116 = 0;
Sym_59117 = 0;
Sym_59117 = Strtableget_55066(&Gsymbols_59001, Symbol_59061);
LOC1 = !((Sym_59117 == NIM_NIL));
if (!(LOC1)) goto LA2;
LOC1 = ((*Sym_59117).Position == 1);
LA2: ;
Result_59116 = LOC1;
return Result_59116;
}
N_NIMCALL(NI, Countdefinedsymbols_59064)(void) {
NI Result_59152;
TY55071 It_59153;
TY50548* S_59155;
Result_59152 = 0;
memset((void*)&It_59153, 0, sizeof(It_59153));
S_59155 = 0;
S_59155 = Inittabiter_55073(&It_59153, &Gsymbols_59001);
Result_59152 = 0;
while (1) {
if (!!((S_59155 == NIM_NIL))) goto LA1;
if (!((*S_59155).Position == 1)) goto LA3;
Result_59152 += 1;
LA3: ;
S_59155 = Nextiter_55078(&It_59153, &Gsymbols_59001);
} LA1: ;
return Result_59152;
}
N_NOINLINE(void, condsymsInit)(void) {
Gsymbols_59001.m_type = NTI50530;
}

