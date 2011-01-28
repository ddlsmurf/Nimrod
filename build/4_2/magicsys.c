/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY54547 TY54547;
typedef struct TY54551 TY54551;
typedef struct TY54529 TY54529;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54527 TY54527;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY53011 TY53011;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TY46536 TY46536;
typedef struct TY54525 TY54525;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY54549 TY54549;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY59104 TY59104;
typedef struct TY54519 TY54519;
typedef struct TY42013 TY42013;
typedef struct TY59106 TY59106;
typedef TY54551* TY101027[40];
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
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
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
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
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
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY10788 Stat;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
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
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY59104 {
NI Tos;
TY59106* Stack;
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY59106 {
  TGenericSeq Sup;
  TY54529 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Initstrtable_54746)(TY54529* X_54749);
N_NIMCALL(TY54551*, Systypefromname_101073)(NimStringDesc* Name_101075);
N_NIMCALL(TY54547*, Getsyssym_101024)(NimStringDesc* Name_101026);
N_NIMCALL(TY54547*, Strtableget_59066)(TY54529* T_59068, TY53011* Name_59069);
N_NIMCALL(TY53011*, Getident_53016)(NimStringDesc* Identifier_53018);
N_NIMCALL(void, Rawmessage_46557)(NU8 Msg_46559, NimStringDesc* Arg_46560);
N_NIMCALL(void, Loadstub_92070)(TY54547* S_92072);
N_NIMCALL(TY54551*, Newsystype_101044)(NU8 Kind_101046, NI Size_101047);
N_NIMCALL(TY54551*, Newtype_54706)(NU8 Kind_54708, TY54547* Owner_54709);
N_NIMCALL(void, Internalerror_46575)(NimStringDesc* Errmsg_46577);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19355, TNimType* Typ_19356);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815);
static N_INLINE(void, Incref_12802)(TY10402* C_12804);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218);
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(void, Decref_12601)(TY10402* C_12603);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(void, Strtableadd_59061)(TY54529* T_59064, TY54547* N_59065);
N_NIMCALL(TY53011*, Getident_53019)(NimStringDesc* Identifier_53021, NI H_53022);
N_NIMCALL(NI, Getnormalizedhash_43037)(NimStringDesc* S_43039);
STRING_LITERAL(TMP193976, "int", 3);
STRING_LITERAL(TMP193977, "int8", 4);
STRING_LITERAL(TMP193978, "int16", 5);
STRING_LITERAL(TMP193979, "int32", 5);
STRING_LITERAL(TMP193980, "int64", 5);
STRING_LITERAL(TMP193981, "float", 5);
STRING_LITERAL(TMP193982, "float32", 7);
STRING_LITERAL(TMP193983, "float64", 7);
STRING_LITERAL(TMP193984, "bool", 4);
STRING_LITERAL(TMP193985, "char", 4);
STRING_LITERAL(TMP193986, "string", 6);
STRING_LITERAL(TMP193987, "cstring", 7);
STRING_LITERAL(TMP193988, "pointer", 7);
STRING_LITERAL(TMP193989, "request for typekind: ", 22);
STRING_LITERAL(TMP193990, "wanted: ", 8);
STRING_LITERAL(TMP193991, " got: ", 6);
STRING_LITERAL(TMP193992, "type not found: ", 16);
TY54547* Systemmodule_101004;
TY101027 Gsystypes_101028;
TY54529 Compilerprocs_101029;
extern TNimType* NTI54529; /* TStrTable */
extern NI Ptrsize_50572;
extern TNimType* NTI54162; /* TTypeKind */
extern TY10790 Gch_10808;
extern TY54529 Rodcompilerprocs_92059;
N_NIMCALL(TY54547*, Getsyssym_101024)(NimStringDesc* Name_101026) {
TY54547* Result_101052;
TY53011* LOC1;
Result_101052 = 0;
LOC1 = 0;
LOC1 = Getident_53016(Name_101026);
Result_101052 = Strtableget_59066(&(*Systemmodule_101004).Tab, LOC1);
if (!(Result_101052 == NIM_NIL)) goto LA3;
Rawmessage_46557(((NU8) 61), Name_101026);
LA3: ;
if (!((*Result_101052).Kind == ((NU8) 20))) goto LA6;
Loadstub_92070(Result_101052);
LA6: ;
return Result_101052;
}
N_NIMCALL(TY54551*, Systypefromname_101073)(NimStringDesc* Name_101075) {
TY54551* Result_101076;
TY54547* LOC1;
Result_101076 = 0;
LOC1 = 0;
LOC1 = Getsyssym_101024(Name_101075);
Result_101076 = (*LOC1).Typ;
return Result_101076;
}
N_NIMCALL(TY54551*, Newsystype_101044)(NU8 Kind_101046, NI Size_101047) {
TY54551* Result_101048;
Result_101048 = 0;
Result_101048 = Newtype_54706(Kind_101046, Systemmodule_101004);
(*Result_101048).Size = ((NI64) (Size_101047));
(*Result_101048).Align = Size_101047;
return Result_101048;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI64)((NI64)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7407;
Result_7407 = 0;
(*Memloc_3004) += X_3005;
Result_7407 = (*Memloc_3004);
return Result_7407;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218) {
NIM_BOOL Result_11219;
Result_11219 = 0;
Result_11219 = !((((*(*C_11218).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11219;
}
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854) {
Incl_10674(&Gch_10808.Cycleroots, C_11854);
}
static N_INLINE(void, Incref_12802)(TY10402* C_12804) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_12804).Refcount, 8);
LOC3 = Canbecycleroot_11216(C_12804);
if (!LOC3) goto LA4;
Rtladdcycleroot_11852(C_12804);
LA4: ;
}
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_11214))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
return Result_11215;
}
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010) {
NI Result_7606;
Result_7606 = 0;
(*Memloc_3009) -= X_3010;
Result_7606 = (*Memloc_3009);
return Result_7606;
}
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203) {
Addzct_11201(&Gch_10808.Zct, C_12203);
}
static N_INLINE(void, Decref_12601)(TY10402* C_12603) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_12603).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12201(C_12603);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11216(C_12603);
if (!LOC5) goto LA6;
Rtladdcycleroot_11852(C_12603);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815) {
TY10402* LOC4;
TY10402* LOC8;
if (!!((Src_12815 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11212(Src_12815);
Incref_12802(LOC4);
LA2: ;
if (!!(((*Dest_12814) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11212((*Dest_12814));
Decref_12601(LOC8);
LA6: ;
(*Dest_12814) = Src_12815;
}
N_NIMCALL(TY54551*, Getsystype_101008)(NU8 Kind_101010) {
TY54551* Result_101080;
NimStringDesc* LOC4;
NimStringDesc* LOC8;
NimStringDesc* LOC12;
Result_101080 = 0;
Result_101080 = Gsystypes_101028[(Kind_101010)-0];
if (!(Result_101080 == NIM_NIL)) goto LA2;
switch (Kind_101010) {
case ((NU8) 31):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193976));
break;
case ((NU8) 32):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193977));
break;
case ((NU8) 33):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193978));
break;
case ((NU8) 34):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193979));
break;
case ((NU8) 35):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193980));
break;
case ((NU8) 36):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193981));
break;
case ((NU8) 37):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193982));
break;
case ((NU8) 38):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193983));
break;
case ((NU8) 1):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193984));
break;
case ((NU8) 2):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193985));
break;
case ((NU8) 28):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193986));
break;
case ((NU8) 29):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193987));
break;
case ((NU8) 26):
Result_101080 = Systypefromname_101073(((NimStringDesc*) &TMP193988));
break;
case ((NU8) 5):
Result_101080 = Newsystype_101044(((NU8) 5), Ptrsize_50572);
break;
default:
LOC4 = 0;
LOC4 = rawNewString(reprEnum(Kind_101010, NTI54162)->Sup.len + 22);
appendString(LOC4, ((NimStringDesc*) &TMP193989));
appendString(LOC4, reprEnum(Kind_101010, NTI54162));
Internalerror_46575(LOC4);
break;
}
asgnRef((void**) &Gsystypes_101028[(Kind_101010)-0], Result_101080);
LA2: ;
if (!!(((*Result_101080).Kind == Kind_101010))) goto LA6;
LOC8 = 0;
LOC8 = rawNewString(reprEnum(Kind_101010, NTI54162)->Sup.len + reprEnum((*Result_101080).Kind, NTI54162)->Sup.len + 14);
appendString(LOC8, ((NimStringDesc*) &TMP193990));
appendString(LOC8, reprEnum(Kind_101010, NTI54162));
appendString(LOC8, ((NimStringDesc*) &TMP193991));
appendString(LOC8, reprEnum((*Result_101080).Kind, NTI54162));
Internalerror_46575(LOC8);
LA6: ;
if (!(Result_101080 == NIM_NIL)) goto LA10;
LOC12 = 0;
LOC12 = rawNewString(reprEnum(Kind_101010, NTI54162)->Sup.len + 16);
appendString(LOC12, ((NimStringDesc*) &TMP193992));
appendString(LOC12, reprEnum(Kind_101010, NTI54162));
Internalerror_46575(LOC12);
LA10: ;
return Result_101080;
}
N_NIMCALL(void, Registercompilerproc_101014)(TY54547* S_101016) {
Strtableadd_59061(&Compilerprocs_101029, S_101016);
}
N_NIMCALL(void, Initsystem_101017)(TY59104* Tab_101020) {
}
N_NIMCALL(TY54547*, Getcompilerproc_101011)(NimStringDesc* Name_101013) {
TY54547* Result_101147;
TY53011* Ident_101148;
NI LOC1;
Result_101147 = 0;
Ident_101148 = 0;
LOC1 = Getnormalizedhash_43037(Name_101013);
Ident_101148 = Getident_53019(Name_101013, LOC1);
Result_101147 = Strtableget_59066(&Compilerprocs_101029, Ident_101148);
if (!(Result_101147 == NIM_NIL)) goto LA3;
Result_101147 = Strtableget_59066(&Rodcompilerprocs_92059, Ident_101148);
if (!!((Result_101147 == NIM_NIL))) goto LA6;
Strtableadd_59061(&Compilerprocs_101029, Result_101147);
if (!((*Result_101147).Kind == ((NU8) 20))) goto LA9;
Loadstub_92070(Result_101147);
LA9: ;
LA6: ;
LA3: ;
return Result_101147;
}
N_NOINLINE(void, magicsysInit)(void) {
Compilerprocs_101029.m_type = NTI54529;
Initstrtable_54746(&Compilerprocs_101029);
}

