/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
N_NIMCALL(NI, Gethashstr_39031)(NimStringDesc* S_39033) {
NI Result_39130;
NI H_39131;
NI I_39157;
NI HEX3Atmp_39163;
NI Res_39165;
Result_39130 = 0;
H_39131 = 0;
H_39131 = 0;
I_39157 = 0;
HEX3Atmp_39163 = 0;
HEX3Atmp_39163 = S_39033->Sup.len;
Res_39165 = 0;
Res_39165 = 1;
while (1) {
if (!(Res_39165 <= HEX3Atmp_39163)) goto LA1;
I_39157 = Res_39165;
H_39131 = (NI64)((NU64)(H_39131) + (NU64)(((NU8)(S_39033->data[I_39157]))));
H_39131 = (NI64)((NU64)(H_39131) + (NU64)((NI64)((NU64)(H_39131) << (NU64)(10))));
H_39131 = (NI64)(H_39131 ^ (NI64)((NU64)(H_39131) >> (NU64)(6)));
Res_39165 += 1;
} LA1: ;
H_39131 = (NI64)((NU64)(H_39131) + (NU64)((NI64)((NU64)(H_39131) << (NU64)(3))));
H_39131 = (NI64)(H_39131 ^ (NI64)((NU64)(H_39131) >> (NU64)(11)));
H_39131 = (NI64)((NU64)(H_39131) + (NU64)((NI64)((NU64)(H_39131) << (NU64)(15))));
Result_39130 = ((NI) (H_39131));
return Result_39130;
}
N_NIMCALL(NI, Gethashstrci_39034)(NimStringDesc* S_39036) {
NI Result_39224;
NI H_39225;
NIM_CHAR C_39226;
NI I_39237;
NI HEX3Atmp_39270;
NI Res_39272;
Result_39224 = 0;
H_39225 = 0;
C_39226 = 0;
H_39225 = 0;
I_39237 = 0;
HEX3Atmp_39270 = 0;
HEX3Atmp_39270 = (NI64)((NI64)(S_39036->Sup.len + 0) - 1);
Res_39272 = 0;
Res_39272 = 0;
while (1) {
if (!(Res_39272 <= HEX3Atmp_39270)) goto LA1;
I_39237 = Res_39272;
C_39226 = S_39036->data[I_39237];
if (!(((NU8)(C_39226)) >= ((NU8)(65)) && ((NU8)(C_39226)) <= ((NU8)(90)))) goto LA3;
C_39226 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(C_39226)) + 32)))));
LA3: ;
H_39225 = (NI64)((NU64)(H_39225) + (NU64)(((NU8)(C_39226))));
H_39225 = (NI64)((NU64)(H_39225) + (NU64)((NI64)((NU64)(H_39225) << (NU64)(10))));
H_39225 = (NI64)(H_39225 ^ (NI64)((NU64)(H_39225) >> (NU64)(6)));
Res_39272 += 1;
} LA1: ;
H_39225 = (NI64)((NU64)(H_39225) + (NU64)((NI64)((NU64)(H_39225) << (NU64)(3))));
H_39225 = (NI64)(H_39225 ^ (NI64)((NU64)(H_39225) >> (NU64)(11)));
H_39225 = (NI64)((NU64)(H_39225) + (NU64)((NI64)((NU64)(H_39225) << (NU64)(15))));
Result_39224 = ((NI) (H_39225));
return Result_39224;
}
N_NIMCALL(NI, Getnormalizedhash_39037)(NimStringDesc* S_39039) {
NI Result_39169;
NI H_39170;
NIM_CHAR C_39171;
NI I_39182;
NI HEX3Atmp_39218;
NI Res_39220;
Result_39169 = 0;
H_39170 = 0;
C_39171 = 0;
H_39170 = 0;
I_39182 = 0;
HEX3Atmp_39218 = 0;
HEX3Atmp_39218 = (NI64)((NI64)(S_39039->Sup.len + 0) - 1);
Res_39220 = 0;
Res_39220 = 0;
while (1) {
if (!(Res_39220 <= HEX3Atmp_39218)) goto LA1;
I_39182 = Res_39220;
C_39171 = S_39039->data[I_39182];
if (!((NU8)(C_39171) == (NU8)(95))) goto LA4;
goto LA2;
LA4: ;
if (!(((NU8)(C_39171)) >= ((NU8)(65)) && ((NU8)(C_39171)) <= ((NU8)(90)))) goto LA7;
C_39171 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(C_39171)) + 32)))));
LA7: ;
H_39170 = (NI64)((NU64)(H_39170) + (NU64)(((NU8)(C_39171))));
H_39170 = (NI64)((NU64)(H_39170) + (NU64)((NI64)((NU64)(H_39170) << (NU64)(10))));
H_39170 = (NI64)(H_39170 ^ (NI64)((NU64)(H_39170) >> (NU64)(6)));
LA2: ;
Res_39220 += 1;
} LA1: ;
H_39170 = (NI64)((NU64)(H_39170) + (NU64)((NI64)((NU64)(H_39170) << (NU64)(3))));
H_39170 = (NI64)(H_39170 ^ (NI64)((NU64)(H_39170) >> (NU64)(11)));
H_39170 = (NI64)((NU64)(H_39170) + (NU64)((NI64)((NU64)(H_39170) << (NU64)(15))));
Result_39169 = ((NI) (H_39170));
return Result_39169;
}
N_NIMCALL(NI, Conchash_39040)(NI H_39042, NI Val_39043) {
NI Result_39051;
Result_39051 = 0;
Result_39051 = (NI64)((NU64)(H_39042) + (NU64)(Val_39043));
Result_39051 = (NI64)((NU64)(Result_39051) + (NU64)((NI64)((NU64)(Result_39051) << (NU64)(10))));
Result_39051 = (NI64)(Result_39051 ^ (NI64)((NU64)(Result_39051) >> (NU64)(6)));
return Result_39051;
}
N_NOINLINE(void, nhashesInit)(void) {
}

