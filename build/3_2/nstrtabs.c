/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY44008 TY44008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY44006 TY44006;
typedef struct TY44004 TY44004;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY44004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY44008 {
  TNimObject Sup;
NI Counter;
TY44006* Data;
NU8 Mode;
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
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY44006 {
  TGenericSeq Sup;
  TY44004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(void, Put_44024)(TY44008* T_44026, NimStringDesc* Key_44027, NimStringDesc* Val_44028);
N_NIMCALL(NI, Rawget_44141)(TY44008* T_44143, NimStringDesc* Key_44144);
N_NIMCALL(NI, Myhash_44104)(TY44008* T_44106, NimStringDesc* Key_44107);
N_NIMCALL(NI, Gethashstr_43031)(NimStringDesc* S_43033);
N_NIMCALL(NI, Gethashstrci_43034)(NimStringDesc* S_43036);
N_NIMCALL(NI, Getnormalizedhash_43037)(NimStringDesc* S_43039);
N_NIMCALL(NIM_BOOL, Mycmp_44109)(TY44008* T_44111, NimStringDesc* A_44112, NimStringDesc* B_44113);
N_NIMCALL(NI, Cmp_1321)(NimStringDesc* X_1323, NimStringDesc* Y_1324);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_23582, NimStringDesc* B_23583);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23624, NimStringDesc* B_23625);
N_NIMCALL(NI, Nexttry_44136)(NI H_44138, NI Maxhash_44139);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(NIM_BOOL, Mustrehash_44121)(NI Length_44123, NI Counter_44124);
N_NIMCALL(void, Enlarge_44170)(TY44008* T_44172);
N_NIMCALL(void, Rawinsert_44162)(TY44008* T_44164, TY44006** Data_44166, NimStringDesc* Key_44167, NimStringDesc* Val_44168);
STRING_LITERAL(TMP193667, "", 0);
extern TNimType* NTI44010; /* PStringTable */
extern TNimType* NTI44008; /* TStringTable */
extern TNimType* NTI44006; /* TKeyValuePairSeq */
extern TY10790 Gch_10808;
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_11214))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
return Result_11215;
}
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005) {
NI Result_7407;
Result_7407 = 0;
(*Memloc_3004) += X_3005;
Result_7407 = (*Memloc_3004);
return Result_7407;
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
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819) {
TY10402* C_12820;
NI LOC4;
TY10402* C_12822;
NI LOC9;
if (!!((Src_12819 == NIM_NIL))) goto LA2;
C_12820 = 0;
C_12820 = Usrtocell_11212(Src_12819);
LOC4 = Atomicinc_3001(&(*C_12820).Refcount, 8);
LA2: ;
if (!!(((*Dest_12818) == NIM_NIL))) goto LA6;
C_12822 = 0;
C_12822 = Usrtocell_11212((*Dest_12818));
LOC9 = Atomicdec_3006(&(*C_12822).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12201(C_12822);
LA10: ;
LA6: ;
(*Dest_12818) = Src_12819;
}
N_NIMCALL(NI, Myhash_44104)(TY44008* T_44106, NimStringDesc* Key_44107) {
NI Result_44108;
Result_44108 = 0;
switch ((*T_44106).Mode) {
case ((NU8) 0):
Result_44108 = Gethashstr_43031(Key_44107);
break;
case ((NU8) 1):
Result_44108 = Gethashstrci_43034(Key_44107);
break;
case ((NU8) 2):
Result_44108 = Getnormalizedhash_43037(Key_44107);
break;
}
return Result_44108;
}
N_NIMCALL(NIM_BOOL, Mycmp_44109)(TY44008* T_44111, NimStringDesc* A_44112, NimStringDesc* B_44113) {
NIM_BOOL Result_44114;
NI LOC1;
NI LOC2;
NI LOC3;
Result_44114 = 0;
switch ((*T_44111).Mode) {
case ((NU8) 0):
LOC1 = Cmp_1321(A_44112, B_44113);
Result_44114 = (LOC1 == 0);
break;
case ((NU8) 1):
LOC2 = nsuCmpIgnoreCase(A_44112, B_44113);
Result_44114 = (LOC2 == 0);
break;
case ((NU8) 2):
LOC3 = nsuCmpIgnoreStyle(A_44112, B_44113);
Result_44114 = (LOC3 == 0);
break;
}
return Result_44114;
}
N_NIMCALL(NI, Nexttry_44136)(NI H_44138, NI Maxhash_44139) {
NI Result_44140;
Result_44140 = 0;
Result_44140 = (NI64)((NI64)((NI64)(5 * H_44138) + 1) & Maxhash_44139);
return Result_44140;
}
N_NIMCALL(NI, Rawget_44141)(TY44008* T_44143, NimStringDesc* Key_44144) {
NI Result_44145;
NI H_44146;
NI LOC1;
NIM_BOOL LOC4;
Result_44145 = 0;
H_44146 = 0;
LOC1 = Myhash_44104(T_44143, Key_44144);
H_44146 = (NI64)(LOC1 & ((*T_44143).Data->Sup.len-1));
while (1) {
if (!!((*T_44143).Data->data[H_44146].Key == 0)) goto LA2;
LOC4 = Mycmp_44109(T_44143, (*T_44143).Data->data[H_44146].Key, Key_44144);
if (!LOC4) goto LA5;
Result_44145 = H_44146;
goto BeforeRet;
LA5: ;
H_44146 = Nexttry_44136(H_44146, ((*T_44143).Data->Sup.len-1));
} LA2: ;
Result_44145 = -1;
BeforeRet: ;
return Result_44145;
}
N_NIMCALL(NIM_BOOL, Mustrehash_44121)(NI Length_44123, NI Counter_44124) {
NIM_BOOL Result_44125;
NIM_BOOL LOC1;
Result_44125 = 0;
LOC1 = ((NI64)(Length_44123 * 2) < (NI64)(Counter_44124 * 3));
if (LOC1) goto LA2;
LOC1 = ((NI64)(Length_44123 - Counter_44124) < 4);
LA2: ;
Result_44125 = LOC1;
return Result_44125;
}
N_NIMCALL(void, Rawinsert_44162)(TY44008* T_44164, TY44006** Data_44166, NimStringDesc* Key_44167, NimStringDesc* Val_44168) {
NI H_44169;
NI LOC1;
H_44169 = 0;
LOC1 = Myhash_44104(T_44164, Key_44167);
H_44169 = (NI64)(LOC1 & ((*Data_44166)->Sup.len-1));
while (1) {
if (!!((*Data_44166)->data[H_44169].Key == 0)) goto LA2;
H_44169 = Nexttry_44136(H_44169, ((*Data_44166)->Sup.len-1));
} LA2: ;
asgnRefNoCycle((void**) &(*Data_44166)->data[H_44169].Key, copyString(Key_44167));
asgnRefNoCycle((void**) &(*Data_44166)->data[H_44169].Val, copyString(Val_44168));
}
N_NIMCALL(void, Enlarge_44170)(TY44008* T_44172) {
TY44006* N_44173;
NI I_44218;
NI HEX3Atmp_44229;
NI Res_44231;
TY44006* LOC5;
N_44173 = 0;
N_44173 = (TY44006*) newSeq(NTI44006, (NI64)((*T_44172).Data->Sup.len * 2));
I_44218 = 0;
HEX3Atmp_44229 = 0;
HEX3Atmp_44229 = ((*T_44172).Data->Sup.len-1);
Res_44231 = 0;
Res_44231 = 0;
while (1) {
if (!(Res_44231 <= HEX3Atmp_44229)) goto LA1;
I_44218 = Res_44231;
if (!!((*T_44172).Data->data[I_44218].Key == 0)) goto LA3;
Rawinsert_44162(T_44172, &N_44173, (*T_44172).Data->data[I_44218].Key, (*T_44172).Data->data[I_44218].Val);
LA3: ;
Res_44231 += 1;
} LA1: ;
LOC5 = 0;
LOC5 = (*T_44172).Data;
asgnRefNoCycle((void**) &(*T_44172).Data, N_44173);
N_44173 = LOC5;
}
N_NIMCALL(void, Put_44024)(TY44008* T_44026, NimStringDesc* Key_44027, NimStringDesc* Val_44028) {
NI Index_44237;
NIM_BOOL LOC5;
Index_44237 = 0;
Index_44237 = Rawget_44141(T_44026, Key_44027);
if (!(0 <= Index_44237)) goto LA2;
asgnRefNoCycle((void**) &(*T_44026).Data->data[Index_44237].Val, copyString(Val_44028));
goto LA1;
LA2: ;
LOC5 = Mustrehash_44121((*T_44026).Data->Sup.len, (*T_44026).Counter);
if (!LOC5) goto LA6;
Enlarge_44170(T_44026);
LA6: ;
Rawinsert_44162(T_44026, &(*T_44026).Data, Key_44027, Val_44028);
(*T_44026).Counter += 1;
LA1: ;
}
N_NIMCALL(TY44008*, Newstringtable_44019)(NimStringDesc** Keyvaluepairs_44022, NI Keyvaluepairs_44022Len0, NU8 Mode_44023) {
TY44008* Result_44061;
NI I_44089;
Result_44061 = 0;
Result_44061 = (TY44008*) newObj(NTI44010, sizeof(TY44008));
(*Result_44061).Sup.m_type = NTI44008;
(*Result_44061).Mode = Mode_44023;
(*Result_44061).Counter = 0;
asgnRefNoCycle((void**) &(*Result_44061).Data, (TY44006*) newSeq(NTI44006, 64));
I_44089 = 0;
I_44089 = 0;
while (1) {
if (!(I_44089 < (Keyvaluepairs_44022Len0-1))) goto LA1;
Put_44024(Result_44061, Keyvaluepairs_44022[I_44089], Keyvaluepairs_44022[(NI64)(I_44089 + 1)]);
I_44089 += 2;
} LA1: ;
return Result_44061;
}
N_NIMCALL(NimStringDesc*, Get_44029)(TY44008* T_44031, NimStringDesc* Key_44032) {
NimStringDesc* Result_44151;
NI Index_44152;
Result_44151 = 0;
Index_44152 = 0;
Index_44152 = Rawget_44141(T_44031, Key_44032);
if (!(0 <= Index_44152)) goto LA2;
Result_44151 = copyString((*T_44031).Data->data[Index_44152].Val);
goto LA1;
LA2: ;
Result_44151 = copyString(((NimStringDesc*) &TMP193667));
LA1: ;
return Result_44151;
}
N_NIMCALL(NIM_BOOL, Haskey_44033)(TY44008* T_44035, NimStringDesc* Key_44036) {
NIM_BOOL Result_44159;
NI LOC1;
Result_44159 = 0;
LOC1 = Rawget_44141(T_44035, Key_44036);
Result_44159 = (0 <= LOC1);
return Result_44159;
}
N_NOINLINE(void, nstrtabsInit)(void) {
}

