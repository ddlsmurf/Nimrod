/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY47008 TY47008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY47406 TY47406;
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
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
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
typedef TY47008* TY47407[1];
typedef NI TY45040[256];
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY47406 {
  TGenericSeq Sup;
  TY47008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(void, Newrecropetostr_47388)(NimStringDesc** Result_47391, NI* Resultlen_47393, TY47008* R_47394);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18642, NI Elemsize_18643);
N_NIMCALL(TY47008*, Insertincache_47201)(NimStringDesc* S_47203, TY47008* Tree_47204);
N_NIMCALL(TY47008*, Newrope_47102)(NimStringDesc* Data_47104);
N_NIMCALL(TY47008*, Splay_47136)(NimStringDesc* S_47138, TY47008* Tree_47139, NI* Cmpres_47141);
N_NIMCALL(NI, Cmp_1327)(NimStringDesc* X_1329, NimStringDesc* Y_1330);
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18413, NimStringDesc* B_18414);
N_NIMCALL(void, App_47036)(TY47008** A_47039, NimStringDesc* B_47040);
N_NIMCALL(TY47008*, Con_47019)(TY47008* A_47021, NimStringDesc* B_47022);
N_NIMCALL(TY47008*, Con_47015)(TY47008* A_47017, TY47008* B_47018);
N_NIMCALL(TY47008*, Torope_47046)(NimStringDesc* S_47048);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
N_NIMCALL(void, App_47031)(TY47008** A_47034, TY47008* B_47035);
N_NIMCALL(void, Internalerror_43163)(NimStringDesc* Errmsg_43165);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19270);
N_NIMCALL(TY47008*, Ropef_47066)(NimStringDesc* Frmt_47068, TY47008** Args_47070, NI Args_47070Len0);
N_NIMCALL(NI32, Crcfromfile_45029)(NimStringDesc* Filename_45031);
N_NIMCALL(NI32, Crcfromrope_47997)(TY47008* R_47999);
N_NIMCALL(NI32, Newcrcfromropeaux_47912)(TY47008* R_47914, NI32 Startval_47915);
static N_INLINE(NI32, Updatecrc32_45018)(NIM_CHAR Val_45020, NI32 Crc_45021);
static N_INLINE(NI32, Updatecrc32_45014)(NI8 Val_45016, NI32 Crc_45017);
N_NIMCALL(void, Writerope_47055)(TY47008* Head_47057, NimStringDesc* Filename_47058);
N_NIMCALL(NIM_BOOL, Open_3817)(FILE** F_3820, NimStringDesc* Filename_3821, NU8 Mode_3822, NI Bufsize_3823);
N_NIMCALL(void, Newwriteroperec_47621)(FILE** F_47624, TY47008* C_47625);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
N_NIMCALL(void, Rawmessage_43045)(NU8 Msg_43047, NimStringDesc* Arg_43048);
static N_INLINE(TY47008*, Pop_47429)(TY47406** S_47434);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18803, NI Elemsize_18804, NI Newlen_18805);
STRING_LITERAL(TMP191901, "", 0);
STRING_LITERAL(TMP192237, "$", 1);
STRING_LITERAL(TMP192238, "ropes: invalid format string $", 30);
extern NIM_CONST TY45040 Crc32table_45039;
TY47008* Cache_47123;
NI Misses_47124;
NI Hits_47125;
TY47008* N_47126;
extern TNimType* NTI47006; /* PRope */
extern TY10996 Gch_11014;
extern TNimType* NTI47008; /* TRope */
extern TNimType* NTI47406; /* seq[PRope] */
extern NimStringDesc* Tnl_46581;
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
N_NIMCALL(void, Newrecropetostr_47388)(NimStringDesc** Result_47391, NI* Resultlen_47393, TY47008* R_47394) {
TY47406* Stack_47409;
TY47407 LOC1;
TY47008* It_47460;
Stack_47409 = 0;
Stack_47409 = (TY47406*) newSeq(NTI47406, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_47394;
asgnRefNoCycle((void**) &Stack_47409->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_47409->Sup.len)) goto LA2;
It_47460 = 0;
It_47460 = Pop_47429(&Stack_47409);
while (1) {
if (!((*It_47460).Data == NIM_NIL)) goto LA3;
Stack_47409 = (TY47406*) incrSeq(&(Stack_47409)->Sup, sizeof(TY47008*));
asgnRefNoCycle((void**) &Stack_47409->data[Stack_47409->Sup.len-1], (*It_47460).Right);
It_47460 = (*It_47460).Left;
} LA3: ;
memcpy(((void*) (&(*Result_47391)->data[(*Resultlen_47393)])), ((void*) (&(*It_47460).Data->data[0])), (*It_47460).Length);
(*Resultlen_47393) += (*It_47460).Length;
} LA2: ;
}
N_NIMCALL(NimStringDesc*, Ropetostr_47063)(TY47008* P_47065) {
NimStringDesc* Result_47500;
NI Resultlen_47512;
Result_47500 = 0;
if (!(P_47065 == NIM_NIL)) goto LA2;
Result_47500 = copyString(((NimStringDesc*) &TMP191901));
goto LA1;
LA2: ;
Result_47500 = mnewString((*P_47065).Length);
Resultlen_47512 = 0;
Resultlen_47512 = 0;
Newrecropetostr_47388(&Result_47500, &Resultlen_47512, P_47065);
LA1: ;
return Result_47500;
}
N_NIMCALL(TY47008*, Newrope_47102)(NimStringDesc* Data_47104) {
TY47008* Result_47105;
Result_47105 = 0;
Result_47105 = (TY47008*) newObj(NTI47006, sizeof(TY47008));
(*Result_47105).Sup.m_type = NTI47008;
if (!!((Data_47104 == NIM_NIL))) goto LA2;
(*Result_47105).Length = Data_47104->Sup.len;
asgnRefNoCycle((void**) &(*Result_47105).Data, copyString(Data_47104));
LA2: ;
return Result_47105;
}
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18413, NimStringDesc* B_18414) {
NI Result_18415;
NI32 LOC10;
Result_18415 = 0;
if (!(A_18413 == B_18414)) goto LA2;
Result_18415 = 0;
goto BeforeRet;
LA2: ;
if (!(A_18413 == NIM_NIL)) goto LA5;
Result_18415 = -1;
goto BeforeRet;
LA5: ;
if (!(B_18414 == NIM_NIL)) goto LA8;
Result_18415 = 1;
goto BeforeRet;
LA8: ;
LOC10 = strcmp(((NCSTRING) ((*A_18413).data)), ((NCSTRING) ((*B_18414).data)));
Result_18415 = ((NI) (LOC10));
goto BeforeRet;
BeforeRet: ;
return Result_18415;
}
N_NIMCALL(TY47008*, Splay_47136)(NimStringDesc* S_47138, TY47008* Tree_47139, NI* Cmpres_47141) {
TY47008* Result_47142;
NI C_47143;
TY47008* T_47144;
TY47008* Le_47145;
TY47008* R_47146;
NIM_BOOL LOC6;
TY47008* Y_47162;
NIM_BOOL LOC16;
TY47008* Y_47189;
Result_47142 = 0;
C_47143 = 0;
T_47144 = 0;
T_47144 = Tree_47139;
asgnRefNoCycle((void**) &(*N_47126).Left, NIM_NIL);
asgnRefNoCycle((void**) &(*N_47126).Right, NIM_NIL);
Le_47145 = 0;
Le_47145 = N_47126;
R_47146 = 0;
R_47146 = N_47126;
while (1) {
C_47143 = Cmp_1327(S_47138, (*T_47144).Data);
if (!(C_47143 < 0)) goto LA3;
LOC6 = !(((*T_47144).Left == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = (cmpStrings(S_47138, (*(*T_47144).Left).Data) < 0);
LA7: ;
if (!LOC6) goto LA8;
Y_47162 = 0;
Y_47162 = (*T_47144).Left;
asgnRefNoCycle((void**) &(*T_47144).Left, (*Y_47162).Right);
asgnRefNoCycle((void**) &(*Y_47162).Right, T_47144);
T_47144 = Y_47162;
LA8: ;
if (!((*T_47144).Left == NIM_NIL)) goto LA11;
goto LA1;
LA11: ;
asgnRefNoCycle((void**) &(*R_47146).Left, T_47144);
R_47146 = T_47144;
T_47144 = (*T_47144).Left;
goto LA2;
LA3: ;
if (!(0 < C_47143)) goto LA13;
LOC16 = !(((*T_47144).Right == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = (cmpStrings((*(*T_47144).Right).Data, S_47138) < 0);
LA17: ;
if (!LOC16) goto LA18;
Y_47189 = 0;
Y_47189 = (*T_47144).Right;
asgnRefNoCycle((void**) &(*T_47144).Right, (*Y_47189).Left);
asgnRefNoCycle((void**) &(*Y_47189).Left, T_47144);
T_47144 = Y_47189;
LA18: ;
if (!((*T_47144).Right == NIM_NIL)) goto LA21;
goto LA1;
LA21: ;
asgnRefNoCycle((void**) &(*Le_47145).Right, T_47144);
Le_47145 = T_47144;
T_47144 = (*T_47144).Right;
goto LA2;
LA13: ;
goto LA1;
LA2: ;
} LA1: ;
(*Cmpres_47141) = C_47143;
asgnRefNoCycle((void**) &(*Le_47145).Right, (*T_47144).Left);
asgnRefNoCycle((void**) &(*R_47146).Left, (*T_47144).Right);
asgnRefNoCycle((void**) &(*T_47144).Left, (*N_47126).Right);
asgnRefNoCycle((void**) &(*T_47144).Right, (*N_47126).Left);
Result_47142 = T_47144;
return Result_47142;
}
N_NIMCALL(TY47008*, Insertincache_47201)(NimStringDesc* S_47203, TY47008* Tree_47204) {
TY47008* Result_47205;
TY47008* T_47206;
NI Cmp_47230;
Result_47205 = 0;
T_47206 = 0;
T_47206 = Tree_47204;
if (!(T_47206 == NIM_NIL)) goto LA2;
Result_47205 = Newrope_47102(S_47203);
if (!NIM_FALSE) goto LA5;
Misses_47124 += 1;
LA5: ;
goto BeforeRet;
LA2: ;
Cmp_47230 = 0;
T_47206 = Splay_47136(S_47203, T_47206, &Cmp_47230);
if (!(Cmp_47230 == 0)) goto LA8;
Result_47205 = T_47206;
if (!NIM_FALSE) goto LA11;
Hits_47125 += 1;
LA11: ;
goto LA7;
LA8: ;
if (!NIM_FALSE) goto LA14;
Misses_47124 += 1;
LA14: ;
Result_47205 = Newrope_47102(S_47203);
if (!(Cmp_47230 < 0)) goto LA17;
asgnRefNoCycle((void**) &(*Result_47205).Left, (*T_47206).Left);
asgnRefNoCycle((void**) &(*Result_47205).Right, T_47206);
asgnRefNoCycle((void**) &(*T_47206).Left, NIM_NIL);
goto LA16;
LA17: ;
asgnRefNoCycle((void**) &(*Result_47205).Right, (*T_47206).Right);
asgnRefNoCycle((void**) &(*Result_47205).Left, T_47206);
asgnRefNoCycle((void**) &(*T_47206).Right, NIM_NIL);
LA16: ;
LA7: ;
BeforeRet: ;
return Result_47205;
}
N_NIMCALL(TY47008*, Torope_47046)(NimStringDesc* S_47048) {
TY47008* Result_47280;
Result_47280 = 0;
if (!((S_47048) && (S_47048)->Sup.len == 0)) goto LA2;
Result_47280 = NIM_NIL;
goto LA1;
LA2: ;
if (!NIM_TRUE) goto LA4;
Result_47280 = Insertincache_47201(S_47048, Cache_47123);
asgnRefNoCycle((void**) &Cache_47123, Result_47280);
goto LA1;
LA4: ;
Result_47280 = Newrope_47102(S_47048);
LA1: ;
return Result_47280;
}
N_NIMCALL(TY47008*, Con_47015)(TY47008* A_47017, TY47008* B_47018) {
TY47008* Result_47519;
Result_47519 = 0;
if (!(A_47017 == NIM_NIL)) goto LA2;
Result_47519 = B_47018;
goto LA1;
LA2: ;
if (!(B_47018 == NIM_NIL)) goto LA4;
Result_47519 = A_47017;
goto LA1;
LA4: ;
Result_47519 = Newrope_47102(NIM_NIL);
(*Result_47519).Length = (NI64)((*A_47017).Length + (*B_47018).Length);
asgnRefNoCycle((void**) &(*Result_47519).Left, A_47017);
asgnRefNoCycle((void**) &(*Result_47519).Right, B_47018);
LA1: ;
return Result_47519;
}
N_NIMCALL(TY47008*, Con_47019)(TY47008* A_47021, NimStringDesc* B_47022) {
TY47008* Result_47546;
TY47008* LOC1;
Result_47546 = 0;
LOC1 = 0;
LOC1 = Torope_47046(B_47022);
Result_47546 = Con_47015(A_47021, LOC1);
return Result_47546;
}
N_NIMCALL(void, App_47036)(TY47008** A_47039, NimStringDesc* B_47040) {
unsureAsgnRef((void**) &(*A_47039), Con_47019((*A_47039), B_47040));
}
N_NIMCALL(void, App_47031)(TY47008** A_47034, TY47008* B_47035) {
unsureAsgnRef((void**) &(*A_47034), Con_47015((*A_47034), B_47035));
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI64)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(TY47008*, Ropef_47066)(NimStringDesc* Frmt_47068, TY47008** Args_47070, NI Args_47070Len0) {
TY47008* Result_47720;
NI I_47721;
NI Length_47724;
NI Num_47725;
NI J_47780;
NIM_BOOL LOC7;
NimStringDesc* LOC14;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NI Start_47839;
NimStringDesc* LOC24;
Result_47720 = 0;
I_47721 = 0;
I_47721 = 0;
Length_47724 = 0;
Length_47724 = Frmt_47068->Sup.len;
Result_47720 = NIM_NIL;
Num_47725 = 0;
Num_47725 = 0;
while (1) {
if (!(I_47721 <= (NI64)(Length_47724 - 1))) goto LA1;
if (!((NU8)(Frmt_47068->data[I_47721]) == (NU8)(36))) goto LA3;
I_47721 += 1;
switch (((NU8)(Frmt_47068->data[I_47721]))) {
case 36:
App_47036(&Result_47720, ((NimStringDesc*) &TMP192237));
I_47721 += 1;
break;
case 35:
I_47721 += 1;
App_47031(&Result_47720, Args_47070[Num_47725]);
Num_47725 += 1;
break;
case 48 ... 57:
J_47780 = 0;
J_47780 = 0;
while (1) {
J_47780 = (NI64)((NI64)((NI64)(J_47780 * 10) + ((NU8)(Frmt_47068->data[I_47721]))) - 48);
I_47721 += 1;
LOC7 = ((NI64)((NI64)(Length_47724 + 0) - 1) < I_47721);
if (LOC7) goto LA8;
LOC7 = !((((NU8)(Frmt_47068->data[I_47721])) >= ((NU8)(48)) && ((NU8)(Frmt_47068->data[I_47721])) <= ((NU8)(57))));
LA8: ;
if (!LOC7) goto LA9;
goto LA5;
LA9: ;
} LA5: ;
Num_47725 = J_47780;
if (!((NI64)((Args_47070Len0-1) + 1) < J_47780)) goto LA12;
LOC14 = 0;
LOC15 = 0;
LOC15 = nimIntToStr(J_47780);
LOC14 = rawNewString(LOC15->Sup.len + 30);
appendString(LOC14, ((NimStringDesc*) &TMP192238));
appendString(LOC14, LOC15);
Internalerror_43163(LOC14);
LA12: ;
App_47031(&Result_47720, Args_47070[(NI64)(J_47780 - 1)]);
break;
case 78:
case 110:
App_47036(&Result_47720, Tnl_46581);
I_47721 += 1;
break;
default:
LOC16 = 0;
LOC16 = rawNewString(31);
appendString(LOC16, ((NimStringDesc*) &TMP192238));
appendChar(LOC16, Frmt_47068->data[I_47721]);
Internalerror_43163(LOC16);
break;
}
LA3: ;
Start_47839 = 0;
Start_47839 = I_47721;
while (1) {
if (!(I_47721 <= (NI64)(Length_47724 - 1))) goto LA17;
if (!!(((NU8)(Frmt_47068->data[I_47721]) == (NU8)(36)))) goto LA19;
I_47721 += 1;
goto LA18;
LA19: ;
goto LA17;
LA18: ;
} LA17: ;
if (!(Start_47839 <= (NI64)(I_47721 - 1))) goto LA22;
LOC24 = 0;
LOC24 = copyStrLast(Frmt_47068, Start_47839, (NI64)(I_47721 - 1));
App_47036(&Result_47720, LOC24);
LA22: ;
} LA1: ;
return Result_47720;
}
N_NIMCALL(TY47008*, Torope_47049)(NI64 I_47051) {
TY47008* Result_47587;
NimStringDesc* LOC1;
Result_47587 = 0;
LOC1 = 0;
LOC1 = nimInt64ToStr(I_47051);
Result_47587 = Torope_47046(LOC1);
return Result_47587;
}
N_NIMCALL(void, Appf_47071)(TY47008** C_47074, NimStringDesc* Frmt_47075, TY47008** Args_47077, NI Args_47077Len0) {
TY47008* LOC1;
LOC1 = 0;
LOC1 = Ropef_47066(Frmt_47075, Args_47077, Args_47077Len0);
App_47031(C_47074, LOC1);
}
N_NIMCALL(TY47008*, Con_47023)(NimStringDesc* A_47025, TY47008* B_47026) {
TY47008* Result_47551;
TY47008* LOC1;
Result_47551 = 0;
LOC1 = 0;
LOC1 = Torope_47046(A_47025);
Result_47551 = Con_47015(LOC1, B_47026);
return Result_47551;
}
N_NIMCALL(void, Prepend_47041)(TY47008** A_47044, TY47008* B_47045) {
unsureAsgnRef((void**) &(*A_47044), Con_47015(B_47045, (*A_47044)));
}
static N_INLINE(NI32, Updatecrc32_45014)(NI8 Val_45016, NI32 Crc_45017) {
NI32 Result_45048;
Result_45048 = 0;
Result_45048 = (NI32)(((NI32) (Crc32table_45039[((NI64)((NI64)(((NI) (Crc_45017)) ^ (NI64)(((NI) (Val_45016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_45017) >> (NU32)(((NI32) 8))));
return Result_45048;
}
static N_INLINE(NI32, Updatecrc32_45018)(NIM_CHAR Val_45020, NI32 Crc_45021) {
NI32 Result_45053;
Result_45053 = 0;
Result_45053 = Updatecrc32_45014(((NI8) (((NU8)(Val_45020)))), Crc_45021);
return Result_45053;
}
N_NIMCALL(NI32, Newcrcfromropeaux_47912)(TY47008* R_47914, NI32 Startval_47915) {
NI32 Result_47916;
TY47406* Stack_47931;
TY47407 LOC1;
TY47008* It_47958;
NI I_47977;
NI L_47980;
Result_47916 = 0;
Stack_47931 = 0;
Stack_47931 = (TY47406*) newSeq(NTI47406, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_47914;
asgnRefNoCycle((void**) &Stack_47931->data[0], LOC1[0]);
Result_47916 = Startval_47915;
while (1) {
if (!(0 < Stack_47931->Sup.len)) goto LA2;
It_47958 = 0;
It_47958 = Pop_47429(&Stack_47931);
while (1) {
if (!((*It_47958).Data == NIM_NIL)) goto LA3;
Stack_47931 = (TY47406*) incrSeq(&(Stack_47931)->Sup, sizeof(TY47008*));
asgnRefNoCycle((void**) &Stack_47931->data[Stack_47931->Sup.len-1], (*It_47958).Right);
It_47958 = (*It_47958).Left;
} LA3: ;
I_47977 = 0;
I_47977 = 0;
L_47980 = 0;
L_47980 = (*It_47958).Data->Sup.len;
while (1) {
if (!(I_47977 < L_47980)) goto LA4;
Result_47916 = Updatecrc32_45018((*It_47958).Data->data[I_47977], Result_47916);
I_47977 += 1;
} LA4: ;
} LA2: ;
return Result_47916;
}
N_NIMCALL(NI32, Crcfromrope_47997)(TY47008* R_47999) {
NI32 Result_48000;
Result_48000 = 0;
Result_48000 = Newcrcfromropeaux_47912(R_47999, ((NI32) -1));
return Result_48000;
}
N_NIMCALL(void, Newwriteroperec_47621)(FILE** F_47624, TY47008* C_47625) {
TY47406* Stack_47640;
TY47407 LOC1;
TY47008* It_47667;
Stack_47640 = 0;
Stack_47640 = (TY47406*) newSeq(NTI47406, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = C_47625;
asgnRefNoCycle((void**) &Stack_47640->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_47640->Sup.len)) goto LA2;
It_47667 = 0;
It_47667 = Pop_47429(&Stack_47640);
while (1) {
if (!((*It_47667).Data == NIM_NIL)) goto LA3;
Stack_47640 = (TY47406*) incrSeq(&(Stack_47640)->Sup, sizeof(TY47008*));
asgnRefNoCycle((void**) &Stack_47640->data[Stack_47640->Sup.len-1], (*It_47667).Right);
It_47667 = (*It_47667).Left;
} LA3: ;
Write_3866((*F_47624), (*It_47667).Data);
} LA2: ;
}
N_NIMCALL(void, Writerope_47055)(TY47008* Head_47057, NimStringDesc* Filename_47058) {
FILE* F_47701;
NIM_BOOL LOC2;
F_47701 = 0;
LOC2 = Open_3817(&F_47701, Filename_47058, ((NU8) 1), -1);
if (!LOC2) goto LA3;
if (!!((Head_47057 == NIM_NIL))) goto LA6;
Newwriteroperec_47621(&F_47701, Head_47057);
LA6: ;
fclose(F_47701);
goto LA1;
LA3: ;
Rawmessage_43045(((NU8) 2), Filename_47058);
LA1: ;
}
N_NIMCALL(NIM_BOOL, Writeropeifnotequal_47059)(TY47008* R_47061, NimStringDesc* Filename_47062) {
NIM_BOOL Result_48005;
NI32 C_48006;
NI32 LOC2;
Result_48005 = 0;
C_48006 = 0;
C_48006 = Crcfromfile_45029(Filename_47062);
LOC2 = Crcfromrope_47997(R_47061);
if (!!((C_48006 == LOC2))) goto LA3;
Writerope_47055(R_47061, Filename_47062);
Result_48005 = NIM_TRUE;
goto LA1;
LA3: ;
Result_48005 = NIM_FALSE;
LA1: ;
return Result_48005;
}
N_NIMCALL(NI, Ropelen_47052)(TY47008* A_47054) {
NI Result_47090;
Result_47090 = 0;
if (!(A_47054 == NIM_NIL)) goto LA2;
Result_47090 = 0;
goto LA1;
LA2: ;
Result_47090 = (*A_47054).Length;
LA1: ;
return Result_47090;
}
static N_INLINE(TY47008*, Pop_47429)(TY47406** S_47434) {
TY47008* Result_47435;
NI L_47446;
Result_47435 = 0;
L_47446 = 0;
L_47446 = (NI64)((*S_47434)->Sup.len - 1);
Result_47435 = (*S_47434)->data[L_47446];
(*S_47434) = (TY47406*) setLengthSeq(&((*S_47434))->Sup, sizeof(TY47008*), L_47446);
return Result_47435;
}
N_NOINLINE(void, ropesInit)(void) {
asgnRefNoCycle((void**) &N_47126, (TY47008*) newObj(NTI47006, sizeof(TY47008)));
(*N_47126).Sup.m_type = NTI47008;
}

