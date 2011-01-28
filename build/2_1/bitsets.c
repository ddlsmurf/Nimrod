/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY102008 TY102008;
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
struct TY102008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
extern TNimType* NTI102008; /* TBitSet */
N_NIMCALL(void, Bitsetinit_102010)(TY102008** B_102013, NI Length_102014) {
unsureAsgnRef((void**) &(*B_102013), (TY102008*) newSeq(NTI102008, Length_102014));
}
N_NIMCALL(void, Bitsetincl_102035)(TY102008** X_102038, NI64 Elem_102039) {
(*X_102038)->data[(NI64)(Elem_102039 / 8)] = (NI8)((*X_102038)->data[(NI64)(Elem_102039 / 8)] | ((NI8)(NU8)(NU)(((NI) ((NI64)((NU64)(1) << (NU64)((NI64)(Elem_102039 % 8))))))));
}
N_NIMCALL(void, Bitsetunion_102015)(TY102008** X_102018, TY102008* Y_102019) {
NI I_102120;
NI HEX3Atmp_102121;
NI Res_102123;
I_102120 = 0;
HEX3Atmp_102121 = 0;
HEX3Atmp_102121 = ((*X_102018)->Sup.len-1);
Res_102123 = 0;
Res_102123 = 0;
while (1) {
if (!(Res_102123 <= HEX3Atmp_102121)) goto LA1;
I_102120 = Res_102123;
(*X_102018)->data[I_102120] = (NI8)((*X_102018)->data[I_102120] | Y_102019->data[I_102120]);
Res_102123 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetdiff_102020)(TY102008** X_102023, TY102008* Y_102024) {
NI I_102136;
NI HEX3Atmp_102137;
NI Res_102139;
I_102136 = 0;
HEX3Atmp_102137 = 0;
HEX3Atmp_102137 = ((*X_102023)->Sup.len-1);
Res_102139 = 0;
Res_102139 = 0;
while (1) {
if (!(Res_102139 <= HEX3Atmp_102137)) goto LA1;
I_102136 = Res_102139;
(*X_102023)->data[I_102136] = (NI8)((*X_102023)->data[I_102136] & (NI8)((NU8) ~(Y_102024->data[I_102136])));
Res_102139 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetsymdiff_102025)(TY102008** X_102028, TY102008* Y_102029) {
NI I_102152;
NI HEX3Atmp_102153;
NI Res_102155;
I_102152 = 0;
HEX3Atmp_102153 = 0;
HEX3Atmp_102153 = ((*X_102028)->Sup.len-1);
Res_102155 = 0;
Res_102155 = 0;
while (1) {
if (!(Res_102155 <= HEX3Atmp_102153)) goto LA1;
I_102152 = Res_102155;
(*X_102028)->data[I_102152] = (NI8)((*X_102028)->data[I_102152] ^ Y_102029->data[I_102152]);
Res_102155 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetintersect_102030)(TY102008** X_102033, TY102008* Y_102034) {
NI I_102168;
NI HEX3Atmp_102169;
NI Res_102171;
I_102168 = 0;
HEX3Atmp_102169 = 0;
HEX3Atmp_102169 = ((*X_102033)->Sup.len-1);
Res_102171 = 0;
Res_102171 = 0;
while (1) {
if (!(Res_102171 <= HEX3Atmp_102169)) goto LA1;
I_102168 = Res_102171;
(*X_102033)->data[I_102168] = (NI8)((*X_102033)->data[I_102168] & Y_102034->data[I_102168]);
Res_102171 += 1;
} LA1: ;
}
N_NIMCALL(NIM_BOOL, Bitsetin_102045)(TY102008* X_102047, NI64 E_102048) {
NIM_BOOL Result_102061;
Result_102061 = 0;
Result_102061 = !(((NI8)(X_102047->data[(NI64)(E_102048 / 8)] & ((NI8)(NU8)(NU)(((NI) ((NI64)((NU64)(1) << (NU64)((NI64)(E_102048 % 8)))))))) == ((NI8) 0)));
return Result_102061;
}
N_NIMCALL(NIM_BOOL, Bitsetcontains_102053)(TY102008* X_102055, TY102008* Y_102056) {
NIM_BOOL Result_102194;
NI I_102202;
NI HEX3Atmp_102205;
NI Res_102207;
Result_102194 = 0;
I_102202 = 0;
HEX3Atmp_102205 = 0;
HEX3Atmp_102205 = (X_102055->Sup.len-1);
Res_102207 = 0;
Res_102207 = 0;
while (1) {
if (!(Res_102207 <= HEX3Atmp_102205)) goto LA1;
I_102202 = Res_102207;
if (!!(((NI8)(X_102055->data[I_102202] & (NI8)((NU8) ~(Y_102056->data[I_102202]))) == ((NI8) 0)))) goto LA3;
Result_102194 = NIM_FALSE;
goto BeforeRet;
LA3: ;
Res_102207 += 1;
} LA1: ;
Result_102194 = NIM_TRUE;
BeforeRet: ;
return Result_102194;
}
N_NIMCALL(NIM_BOOL, Bitsetequals_102049)(TY102008* X_102051, TY102008* Y_102052) {
NIM_BOOL Result_102176;
NI I_102184;
NI HEX3Atmp_102187;
NI Res_102189;
Result_102176 = 0;
I_102184 = 0;
HEX3Atmp_102187 = 0;
HEX3Atmp_102187 = (X_102051->Sup.len-1);
Res_102189 = 0;
Res_102189 = 0;
while (1) {
if (!(Res_102189 <= HEX3Atmp_102187)) goto LA1;
I_102184 = Res_102189;
if (!!((X_102051->data[I_102184] == Y_102052->data[I_102184]))) goto LA3;
Result_102176 = NIM_FALSE;
goto BeforeRet;
LA3: ;
Res_102189 += 1;
} LA1: ;
Result_102176 = NIM_TRUE;
BeforeRet: ;
return Result_102176;
}
N_NOINLINE(void, bitsetsInit)(void) {
}

