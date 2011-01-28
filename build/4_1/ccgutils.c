/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY54563 TY54563;
typedef struct TY54561 TY54561;
typedef struct TY54559 TY54559;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY54551 TY54551;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54549 TY54549;
typedef struct TY54525 TY54525;
typedef struct TY54547 TY54547;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY46536 TY46536;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54543 TY54543;
typedef struct TY42013 TY42013;
struct TY54559 {
TY53005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY54563 {
NI Counter;
TY54561* Data;
};
typedef TY54563 TY157023[40];
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
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
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
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
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
struct TY54561 {
  TGenericSeq Sup;
  TY54559 data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Inittypetables_157025)(void);
N_NIMCALL(void, Initidtable_54754)(TY54563* X_54757);
N_NIMCALL(TNimObject*, Idtableget_59163)(TY54563 T_59165, TY53005* Key_59166);
N_NIMCALL(void, Idtableput_59171)(TY54563* T_59174, TY53005* Key_59175, TNimObject* Val_59176);
N_NIMCALL(TY54551*, Getuniquetype_157020)(TY54551* Key_157022);
static N_INLINE(TY54551*, Lastson_54812)(TY54551* N_54814);
static N_INLINE(NI, Sonslen_54806)(TY54551* N_54808);
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_59177)(TY54563 T_59179, TY53005* Key_59180);
N_NIMCALL(NIM_BOOL, Sametype_96048)(TY54551* X_96050, TY54551* Y_96051);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(void, App_51031)(TY51008** A_51034, TY51008* B_51035);
N_NIMCALL(TY51008*, Torope_51046)(NimStringDesc* S_51048);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18425, NI Newlen_18426);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_24385, NI Len_24386);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18382, NI Addlen_18383);
N_NIMCALL(NimStringDesc*, Tocchar_157007)(NIM_CHAR C_157009);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410);
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_24019);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR X_19128);
STRING_LITERAL(TMP194294, "c\"", 2);
STRING_LITERAL(TMP194295, "\\00\"", 4);
STRING_LITERAL(TMP194297, "\"", 1);
STRING_LITERAL(TMP194298, "\012", 1);
TY157023 Gtypetable_157024;
N_NIMCALL(void, Inittypetables_157025)(void) {
NU8 I_157056;
NU8 Res_157059;
I_157056 = 0;
Res_157059 = 0;
Res_157059 = ((NU8) 0);
while (1) {
if (!(Res_157059 <= ((NU8) 39))) goto LA1;
I_157056 = Res_157059;
Initidtable_54754(&Gtypetable_157024[(I_157056)-0]);
Res_157059 += 1;
} LA1: ;
}
static N_INLINE(NI, Sonslen_54806)(TY54551* N_54808) {
NI Result_55744;
Result_55744 = 0;
if (!(*N_54808).Sons == 0) goto LA2;
Result_55744 = 0;
goto LA1;
LA2: ;
Result_55744 = (*N_54808).Sons->Sup.len;
LA1: ;
return Result_55744;
}
static N_INLINE(TY54551*, Lastson_54812)(TY54551* N_54814) {
TY54551* Result_56833;
NI LOC1;
Result_56833 = 0;
LOC1 = Sonslen_54806(N_54814);
Result_56833 = (*N_54814).Sons->data[(NI32)(LOC1 - 1)];
return Result_56833;
}
N_NIMCALL(TY54551*, Getuniquetype_157020)(TY54551* Key_157022) {
TY54551* Result_157063;
TY54551* T_157064;
NU8 K_157065;
TNimObject* LOC4;
TY54551* LOC8;
NIM_BOOL LOC10;
NI H_157111;
NI HEX3Atmp_157124;
NI Res_157126;
NIM_BOOL LOC15;
Result_157063 = 0;
T_157064 = 0;
K_157065 = 0;
Result_157063 = Key_157022;
if (!(Key_157022 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
K_157065 = (*Key_157022).Kind;
switch (K_157065) {
case ((NU8) 17):
case ((NU8) 14):
LOC4 = 0;
LOC4 = Idtableget_59163(Gtypetable_157024[(K_157065)-0], &Key_157022->Sup);
Result_157063 = ((TY54551*) (LOC4));
if (!(Result_157063 == NIM_NIL)) goto LA6;
Idtableput_59171(&Gtypetable_157024[(K_157065)-0], &Key_157022->Sup, &Key_157022->Sup.Sup);
Result_157063 = Key_157022;
LA6: ;
break;
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 15):
LOC8 = 0;
LOC8 = Lastson_54812(Key_157022);
Result_157063 = Getuniquetype_157020(LOC8);
break;
case ((NU8) 25):
break;
default:
LOC10 = Idtablehasobjectaskey_59177(Gtypetable_157024[(K_157065)-0], &Key_157022->Sup);
if (!LOC10) goto LA11;
goto BeforeRet;
LA11: ;
H_157111 = 0;
HEX3Atmp_157124 = 0;
HEX3Atmp_157124 = (Gtypetable_157024[(K_157065)-0].Data->Sup.len-1);
Res_157126 = 0;
Res_157126 = 0;
while (1) {
if (!(Res_157126 <= HEX3Atmp_157124)) goto LA13;
H_157111 = Res_157126;
T_157064 = ((TY54551*) (Gtypetable_157024[(K_157065)-0].Data->data[H_157111].Key));
LOC15 = !((T_157064 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = Sametype_96048(T_157064, Key_157022);
LA16: ;
if (!LOC15) goto LA17;
Result_157063 = T_157064;
goto BeforeRet;
LA17: ;
Res_157126 += 1;
} LA13: ;
Idtableput_59171(&Gtypetable_157024[(K_157065)-0], &Key_157022->Sup, &Key_157022->Sup.Sup);
break;
}
BeforeRet: ;
return Result_157063;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI32)((NI32)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
N_NIMCALL(TY51008*, Makellvmstring_157013)(NimStringDesc* S_157015) {
TY51008* Result_157200;
NimStringDesc* Res_157202;
NI I_157212;
NI HEX3Atmp_157222;
NI Res_157224;
TY51008* LOC5;
NimStringDesc* LOC6;
TY51008* LOC7;
Result_157200 = 0;
Res_157202 = 0;
Result_157200 = NIM_NIL;
Res_157202 = copyString(((NimStringDesc*) &TMP194294));
I_157212 = 0;
HEX3Atmp_157222 = 0;
HEX3Atmp_157222 = (NI32)((NI32)(S_157015->Sup.len + 0) - 1);
Res_157224 = 0;
Res_157224 = 0;
while (1) {
if (!(Res_157224 <= HEX3Atmp_157222)) goto LA1;
I_157212 = Res_157224;
if (!((NI32)((NI32)((NI32)(I_157212 - 0) + 1) % 64) == 0)) goto LA3;
LOC5 = 0;
LOC5 = Torope_51046(Res_157202);
App_51031(&Result_157200, LOC5);
Res_157202 = setLengthStr(Res_157202, 0);
LA3: ;
switch (((NU8)(S_157015->data[I_157212]))) {
case 0 ... 31:
case 128 ... 255:
case 34:
case 92:
Res_157202 = addChar(Res_157202, 92);
LOC6 = 0;
LOC6 = nsuToHex(((NI64) (((NU8)(S_157015->data[I_157212])))), 2);
Res_157202 = resizeString(Res_157202, LOC6->Sup.len + 0);
appendString(Res_157202, LOC6);
break;
default:
Res_157202 = addChar(Res_157202, S_157015->data[I_157212]);
break;
}
Res_157224 += 1;
} LA1: ;
Res_157202 = resizeString(Res_157202, 4);
appendString(Res_157202, ((NimStringDesc*) &TMP194295));
LOC7 = 0;
LOC7 = Torope_51046(Res_157202);
App_51031(&Result_157200, LOC7);
return Result_157200;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410) {
(*Dest_18409).data[((*Dest_18409).Sup.len)-0] = C_18410;
(*Dest_18409).data[((NI32)((*Dest_18409).Sup.len + 1))-0] = 0;
(*Dest_18409).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Tocchar_157007)(NIM_CHAR C_157009) {
NimStringDesc* Result_157171;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Result_157171 = 0;
switch (((NU8)(C_157009))) {
case 0 ... 31:
case 128 ... 255:
LOC1 = 0;
LOC2 = 0;
LOC2 = nsuToOctal(C_157009);
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendChar(LOC1, 92);
appendString(LOC1, LOC2);
Result_157171 = LOC1;
break;
case 39:
case 34:
case 92:
LOC3 = 0;
LOC3 = rawNewString(2);
appendChar(LOC3, 92);
appendChar(LOC3, C_157009);
Result_157171 = LOC3;
break;
default:
Result_157171 = nimCharToStr(C_157009);
break;
}
return Result_157171;
}
N_NIMCALL(TY51008*, Makecstring_157010)(NimStringDesc* S_157012) {
TY51008* Result_157177;
NimStringDesc* Res_157179;
NI I_157189;
NI HEX3Atmp_157194;
NI Res_157196;
TY51008* LOC5;
NimStringDesc* LOC6;
TY51008* LOC7;
Result_157177 = 0;
Res_157179 = 0;
Result_157177 = NIM_NIL;
Res_157179 = copyString(((NimStringDesc*) &TMP194297));
I_157189 = 0;
HEX3Atmp_157194 = 0;
HEX3Atmp_157194 = (NI32)((NI32)(S_157012->Sup.len + 0) - 1);
Res_157196 = 0;
Res_157196 = 0;
while (1) {
if (!(Res_157196 <= HEX3Atmp_157194)) goto LA1;
I_157189 = Res_157196;
if (!((NI32)((NI32)((NI32)(I_157189 - 0) + 1) % 64) == 0)) goto LA3;
Res_157179 = addChar(Res_157179, 34);
Res_157179 = resizeString(Res_157179, 1);
appendString(Res_157179, ((NimStringDesc*) &TMP194298));
LOC5 = 0;
LOC5 = Torope_51046(Res_157179);
App_51031(&Result_157177, LOC5);
Res_157179 = setLengthStr(Res_157179, 1);
Res_157179->data[0] = 34;
LA3: ;
LOC6 = 0;
LOC6 = Tocchar_157007(S_157012->data[I_157189]);
Res_157179 = resizeString(Res_157179, LOC6->Sup.len + 0);
appendString(Res_157179, LOC6);
Res_157196 += 1;
} LA1: ;
Res_157179 = addChar(Res_157179, 34);
LOC7 = 0;
LOC7 = Torope_51046(Res_157179);
App_51031(&Result_157177, LOC7);
return Result_157177;
}
N_NOINLINE(void, ccgutilsInit)(void) {
Inittypetables_157025();
}

