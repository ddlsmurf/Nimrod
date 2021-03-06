/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY103008 TY103008;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
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
struct TY103008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
extern TNimType* NTI103008; /* TBitSet */
N_NIMCALL(void, Bitsetinit_103010)(TY103008** B_103013, NI Length_103014) {
unsureAsgnRef((void**) &(*B_103013), (TY103008*) newSeq(NTI103008, Length_103014));
}
N_NIMCALL(void, Bitsetincl_103035)(TY103008** X_103038, NI64 Elem_103039) {
(*X_103038)->data[(NI64)(Elem_103039 / 8)] = (NI8)((*X_103038)->data[(NI64)(Elem_103039 / 8)] | ((NI8)(NU8)(NU)(((NI) ((NI64)((NU64)(1) << (NU64)((NI64)(Elem_103039 % 8))))))));
}
N_NIMCALL(void, Bitsetunion_103015)(TY103008** X_103018, TY103008* Y_103019) {
NI I_103121;
NI HEX3Atmp_103122;
NI Res_103124;
I_103121 = 0;
HEX3Atmp_103122 = 0;
HEX3Atmp_103122 = ((*X_103018)->Sup.len-1);
Res_103124 = 0;
Res_103124 = 0;
while (1) {
if (!(Res_103124 <= HEX3Atmp_103122)) goto LA1;
I_103121 = Res_103124;
(*X_103018)->data[I_103121] = (NI8)((*X_103018)->data[I_103121] | Y_103019->data[I_103121]);
Res_103124 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetdiff_103020)(TY103008** X_103023, TY103008* Y_103024) {
NI I_103138;
NI HEX3Atmp_103139;
NI Res_103141;
I_103138 = 0;
HEX3Atmp_103139 = 0;
HEX3Atmp_103139 = ((*X_103023)->Sup.len-1);
Res_103141 = 0;
Res_103141 = 0;
while (1) {
if (!(Res_103141 <= HEX3Atmp_103139)) goto LA1;
I_103138 = Res_103141;
(*X_103023)->data[I_103138] = (NI8)((*X_103023)->data[I_103138] & (NI8)((NU8) ~(Y_103024->data[I_103138])));
Res_103141 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetsymdiff_103025)(TY103008** X_103028, TY103008* Y_103029) {
NI I_103155;
NI HEX3Atmp_103156;
NI Res_103158;
I_103155 = 0;
HEX3Atmp_103156 = 0;
HEX3Atmp_103156 = ((*X_103028)->Sup.len-1);
Res_103158 = 0;
Res_103158 = 0;
while (1) {
if (!(Res_103158 <= HEX3Atmp_103156)) goto LA1;
I_103155 = Res_103158;
(*X_103028)->data[I_103155] = (NI8)((*X_103028)->data[I_103155] ^ Y_103029->data[I_103155]);
Res_103158 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetintersect_103030)(TY103008** X_103033, TY103008* Y_103034) {
NI I_103172;
NI HEX3Atmp_103173;
NI Res_103175;
I_103172 = 0;
HEX3Atmp_103173 = 0;
HEX3Atmp_103173 = ((*X_103033)->Sup.len-1);
Res_103175 = 0;
Res_103175 = 0;
while (1) {
if (!(Res_103175 <= HEX3Atmp_103173)) goto LA1;
I_103172 = Res_103175;
(*X_103033)->data[I_103172] = (NI8)((*X_103033)->data[I_103172] & Y_103034->data[I_103172]);
Res_103175 += 1;
} LA1: ;
}
N_NIMCALL(NIM_BOOL, Bitsetin_103045)(TY103008* X_103047, NI64 E_103048) {
NIM_BOOL Result_103061;
Result_103061 = 0;
Result_103061 = !(((NI8)(X_103047->data[(NI64)(E_103048 / 8)] & ((NI8)(NU8)(NU)(((NI) ((NI64)((NU64)(1) << (NU64)((NI64)(E_103048 % 8)))))))) == ((NI8) 0)));
return Result_103061;
}
N_NIMCALL(NIM_BOOL, Bitsetcontains_103053)(TY103008* X_103055, TY103008* Y_103056) {
NIM_BOOL Result_103199;
NI I_103208;
NI HEX3Atmp_103211;
NI Res_103213;
Result_103199 = 0;
I_103208 = 0;
HEX3Atmp_103211 = 0;
HEX3Atmp_103211 = (X_103055->Sup.len-1);
Res_103213 = 0;
Res_103213 = 0;
while (1) {
if (!(Res_103213 <= HEX3Atmp_103211)) goto LA1;
I_103208 = Res_103213;
if (!!(((NI8)(X_103055->data[I_103208] & (NI8)((NU8) ~(Y_103056->data[I_103208]))) == ((NI8) 0)))) goto LA3;
Result_103199 = NIM_FALSE;
goto BeforeRet;
LA3: ;
Res_103213 += 1;
} LA1: ;
Result_103199 = NIM_TRUE;
BeforeRet: ;
return Result_103199;
}
N_NIMCALL(NIM_BOOL, Bitsetequals_103049)(TY103008* X_103051, TY103008* Y_103052) {
NIM_BOOL Result_103180;
NI I_103189;
NI HEX3Atmp_103192;
NI Res_103194;
Result_103180 = 0;
I_103189 = 0;
HEX3Atmp_103192 = 0;
HEX3Atmp_103192 = (X_103051->Sup.len-1);
Res_103194 = 0;
Res_103194 = 0;
while (1) {
if (!(Res_103194 <= HEX3Atmp_103192)) goto LA1;
I_103189 = Res_103194;
if (!!((X_103051->data[I_103189] == Y_103052->data[I_103189]))) goto LA3;
Result_103180 = NIM_FALSE;
goto BeforeRet;
LA3: ;
Res_103194 += 1;
} LA1: ;
Result_103180 = NIM_TRUE;
BeforeRet: ;
return Result_103180;
}
N_NOINLINE(void, bitsetsInit)(void) {
}

