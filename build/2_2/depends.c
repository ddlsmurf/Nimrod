/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY52008 TY52008;
typedef struct TY105006 TY105006;
typedef struct TY105002 TY105002;
typedef struct TY55548 TY55548;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY93031 TY93031;
typedef struct TY55526 TY55526;
typedef struct TY187010 TY187010;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY10802 TY10802;
typedef struct TY10814 TY10814;
typedef struct TY11196 TY11196;
typedef struct TY10818 TY10818;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY55552 TY55552;
typedef struct TY47538 TY47538;
typedef struct TY54011 TY54011;
typedef struct TY55520 TY55520;
typedef struct TY38661 TY38661;
typedef struct TY54005 TY54005;
typedef struct TY55530 TY55530;
typedef struct TY55528 TY55528;
typedef struct TY55540 TY55540;
typedef struct TY55544 TY55544;
typedef struct TY39221 TY39221;
typedef struct TY93029 TY93029;
typedef struct TY60215 TY60215;
typedef struct TY60213 TY60213;
typedef struct TY60211 TY60211;
typedef struct TY55564 TY55564;
typedef struct TY55562 TY55562;
typedef struct TY55560 TY55560;
typedef struct TY55550 TY55550;
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
typedef N_NIMCALL_PTR(TY105002*, TY105007) (TY55548* Module_105008, NimStringDesc* Filename_105009);
typedef N_NIMCALL_PTR(TY105002*, TY105012) (TY55548* Module_105013, NimStringDesc* Filename_105014, TY93031* Rd_105015);
typedef N_NIMCALL_PTR(TY55526*, TY105018) (TY105002* P_105019, TY55526* N_105020);
typedef N_NIMCALL_PTR(TY55526*, TY105023) (TY105002* P_105024, TY55526* Toplevelstmt_105025);
struct TY105006 {
TY105007 Open;
TY105012 Opencached;
TY105018 Close;
TY105023 Process;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY105002 {
  TNimObject Sup;
};
struct TY187010 {
  TY105002 Sup;
TY55548* Module;
NimStringDesc* Filename;
};
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11194 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11196 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
TY11194 Stat;
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
struct TY38661 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef TY52008* TY176845[2];
struct TY54005 {
  TNimObject Sup;
NI Id;
};
struct TY55530 {
TNimType* m_type;
NI Counter;
TY55528* Data;
};
struct TY55540 {
NU8 K;
NU8 S;
NU8 Flags;
TY55552* T;
TY52008* R;
NI A;
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
struct TY54011 {
  TY54005 Sup;
NimStringDesc* S;
TY54011* Next;
NI H;
};
struct TY52008 {
  TNimObject Sup;
TY52008* Left;
TY52008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY60211 {
NI Key;
NI Val;
};
struct TY60215 {
NI Counter;
TY60213* Data;
};
struct TY93029 {
NI Lastidxkey;
NI Lastidxval;
TY60215 Tab;
TY52008* R;
NI Offset;
};
struct TY55560 {
TY54005* Key;
TNimObject* Val;
};
struct TY55564 {
NI Counter;
TY55562* Data;
};
struct TY93031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY39221* Moddeps;
TY39221* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY93029 Index;
TY93029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY55564 Syms;
};
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
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
struct TY55528 {
  TGenericSeq Sup;
  TY55548* data[SEQ_DECL_SIZE];
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY60213 {
  TGenericSeq Sup;
  TY60211 data[SEQ_DECL_SIZE];
};
struct TY55562 {
  TGenericSeq Sup;
  TY55560 data[SEQ_DECL_SIZE];
};
struct TY55550 {
  TGenericSeq Sup;
  TY55552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initpass_105031)(TY105006* P_105034);
N_NIMCALL(TY105002*, Myopen_187115)(TY55548* Module_187117, NimStringDesc* Filename_187118);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(TY55526*, Adddotdependency_187025)(TY105002* C_187027, TY55526* N_187028);
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38660, TY38661* Result);
N_NIMCALL(NimStringDesc*, Getmodulefile_110013)(TY55526* N_110015);
N_NIMCALL(void, Adddependencyaux_187016)(NimStringDesc* Importing_187018, NimStringDesc* Imported_187019);
N_NIMCALL(void, Appf_52071)(TY52008** C_52074, NimStringDesc* Frmt_52075, TY52008** Args_52077, NI Args_52077Len0);
N_NIMCALL(TY52008*, Torope_52046)(NimStringDesc* S_52048);
N_NIMCALL(void, Writerope_52055)(TY52008* Head_52057, NimStringDesc* Filename_52058);
N_NIMCALL(TY52008*, Ropef_52066)(NimStringDesc* Frmt_52068, TY52008** Args_52070, NI Args_52070Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38820, NimStringDesc* Ext_38821);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_38730);
STRING_LITERAL(TMP197490, "$1 -> $2;$n", 11);
STRING_LITERAL(TMP197491, "digraph $1 {$n$2}$n", 19);
STRING_LITERAL(TMP197492, "", 0);
STRING_LITERAL(TMP197493, "dot", 3);
TY52008* Gdotgraph_187015;
extern TNimType* NTI187012; /* PGen */
extern TNimType* NTI187010; /* TGen */
extern TY11196 Gch_11214;
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11080(&Gch_11214.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
}
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230) {
NI Result_8006;
Result_8006 = 0;
(*Memloc_3229) -= X_3230;
Result_8006 = (*Memloc_3229);
return Result_8006;
}
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11214.Zct, C_12603);
}
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_13003).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3221(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3226(&(*C_13222).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(TY105002*, Myopen_187115)(TY55548* Module_187117, NimStringDesc* Filename_187118) {
TY105002* Result_187119;
TY187010* G_187120;
Result_187119 = 0;
G_187120 = 0;
G_187120 = (TY187010*) newObj(NTI187012, sizeof(TY187010));
(*G_187120).Sup.Sup.m_type = NTI187010;
asgnRef((void**) &(*G_187120).Module, Module_187117);
asgnRefNoCycle((void**) &(*G_187120).Filename, copyString(Filename_187118));
Result_187119 = &G_187120->Sup;
return Result_187119;
}
static N_INLINE(NI, Sonslen_55804)(TY55526* N_55806) {
NI Result_56880;
Result_56880 = 0;
if (!(*N_55806).KindU.S6.Sons == 0) goto LA2;
Result_56880 = 0;
goto LA1;
LA2: ;
Result_56880 = (*N_55806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_56880;
}
N_NIMCALL(void, Adddependencyaux_187016)(NimStringDesc* Importing_187018, NimStringDesc* Imported_187019) {
TY176845 LOC1;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = Torope_52046(Importing_187018);
LOC1[1] = Torope_52046(Imported_187019);
Appf_52071(&Gdotgraph_187015, ((NimStringDesc*) &TMP197490), LOC1, 2);
}
N_NIMCALL(TY55526*, Adddotdependency_187025)(TY105002* C_187027, TY55526* N_187028) {
TY55526* Result_187029;
TY187010* G_187030;
NI I_187054;
NI HEX3Atmp_187102;
NI LOC1;
NI Res_187104;
NimStringDesc* Imported_187067;
NimStringDesc* LOC3;
TY38661 LOC4;
NimStringDesc* Imported_187080;
NimStringDesc* LOC5;
TY38661 LOC6;
NI I_187089;
NI HEX3Atmp_187105;
NI LOC7;
NI Res_187107;
TY55526* LOC9;
Result_187029 = 0;
Result_187029 = N_187028;
G_187030 = 0;
G_187030 = ((TY187010*) (C_187027));
switch ((*N_187028).Kind) {
case ((NU8) 102):
I_187054 = 0;
HEX3Atmp_187102 = 0;
LOC1 = Sonslen_55804(N_187028);
HEX3Atmp_187102 = (NI64)(LOC1 - 1);
Res_187104 = 0;
Res_187104 = 0;
while (1) {
if (!(Res_187104 <= HEX3Atmp_187102)) goto LA2;
I_187054 = Res_187104;
Imported_187067 = 0;
LOC3 = 0;
LOC3 = Getmodulefile_110013((*N_187028).KindU.S6.Sons->data[I_187054]);
memset((void*)&LOC4, 0, sizeof(LOC4));
nossplitFile(LOC3, &LOC4);
Imported_187067 = copyString(LOC4.Name);
Adddependencyaux_187016((*(*(*G_187030).Module).Name).S, Imported_187067);
Res_187104 += 1;
} LA2: ;
break;
case ((NU8) 103):
Imported_187080 = 0;
LOC5 = 0;
LOC5 = Getmodulefile_110013((*N_187028).KindU.S6.Sons->data[0]);
memset((void*)&LOC6, 0, sizeof(LOC6));
nossplitFile(LOC5, &LOC6);
Imported_187080 = copyString(LOC6.Name);
Adddependencyaux_187016((*(*(*G_187030).Module).Name).S, Imported_187080);
break;
case ((NU8) 101):
case ((NU8) 99):
case ((NU8) 106):
case ((NU8) 107):
I_187089 = 0;
HEX3Atmp_187105 = 0;
LOC7 = Sonslen_55804(N_187028);
HEX3Atmp_187105 = (NI64)(LOC7 - 1);
Res_187107 = 0;
Res_187107 = 0;
while (1) {
if (!(Res_187107 <= HEX3Atmp_187105)) goto LA8;
I_187089 = Res_187107;
LOC9 = 0;
LOC9 = Adddotdependency_187025(C_187027, (*N_187028).KindU.S6.Sons->data[I_187089]);
Res_187107 += 1;
} LA8: ;
break;
default:
break;
}
return Result_187029;
}
N_NIMCALL(TY105006, Gendependpass_187004)(void) {
TY105006 Result_187138;
memset((void*)&Result_187138, 0, sizeof(Result_187138));
Initpass_105031(&Result_187138);
Result_187138.Open = Myopen_187115;
Result_187138.Process = Adddotdependency_187025;
return Result_187138;
}
N_NIMCALL(void, Generatedot_187006)(NimStringDesc* Project_187008) {
TY176845 LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
TY52008* LOC4;
NimStringDesc* LOC5;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC2 = 0;
LOC2 = nosextractFilename(Project_187008);
LOC3 = 0;
LOC3 = nosChangeFileExt(LOC2, ((NimStringDesc*) &TMP197492));
LOC1[0] = Torope_52046(LOC3);
LOC1[1] = Gdotgraph_187015;
LOC4 = 0;
LOC4 = Ropef_52066(((NimStringDesc*) &TMP197491), LOC1, 2);
LOC5 = 0;
LOC5 = nosChangeFileExt(Project_187008, ((NimStringDesc*) &TMP197493));
Writerope_52055(LOC4, LOC5);
}
N_NOINLINE(void, dependsInit)(void) {
}

