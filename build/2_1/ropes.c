/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY51008 TY51008;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY51398 TY51398;
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
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
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
typedef TY51008* TY51399[1];
typedef NI TY49040[256];
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY51398 {
  TGenericSeq Sup;
  TY51008* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
N_NIMCALL(void, Newrecropetostr_51380)(NimStringDesc** Result_51383, NI* Resultlen_51385, TY51008* R_51386);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18435, NI Elemsize_18436);
N_NIMCALL(TY51008*, Insertincache_51197)(NimStringDesc* S_51199, TY51008* Tree_51200);
N_NIMCALL(TY51008*, Newrope_51102)(NimStringDesc* Data_51104);
N_NIMCALL(TY51008*, Splay_51136)(NimStringDesc* S_51138, TY51008* Tree_51139, NI* Cmpres_51141);
N_NIMCALL(NI, Cmp_1321)(NimStringDesc* X_1323, NimStringDesc* Y_1324);
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18211, NimStringDesc* B_18212);
N_NIMCALL(TY51008*, Con_51019)(TY51008* A_51021, NimStringDesc* B_51022);
N_NIMCALL(TY51008*, Con_51015)(TY51008* A_51017, TY51008* B_51018);
N_NIMCALL(TY51008*, Torope_51046)(NimStringDesc* S_51048);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
N_NIMCALL(void, App_51036)(TY51008** A_51039, NimStringDesc* B_51040);
N_NIMCALL(void, App_51031)(TY51008** A_51034, TY51008* B_51035);
N_NIMCALL(void, Internalerror_46575)(NimStringDesc* Errmsg_46577);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19003);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19067);
N_NIMCALL(TY51008*, Ropef_51066)(NimStringDesc* Frmt_51068, TY51008** Args_51070, NI Args_51070Len0);
N_NIMCALL(int, Crcfromfile_49029)(NimStringDesc* Filename_49031);
N_NIMCALL(int, Crcfromrope_51973)(TY51008* R_51975);
N_NIMCALL(int, Newcrcfromropeaux_51892)(TY51008* R_51894, int Startval_51895);
static N_INLINE(int, Updatecrc32_49018)(NIM_CHAR Val_49020, int Crc_49021);
static N_INLINE(int, Updatecrc32_49014)(NI8 Val_49016, int Crc_49017);
N_NIMCALL(void, Writerope_51055)(TY51008* Head_51057, NimStringDesc* Filename_51058);
N_NIMCALL(NIM_BOOL, Open_3617)(FILE** F_3620, NimStringDesc* Filename_3621, NU8 Mode_3622, NI Bufsize_3623);
N_NIMCALL(void, Newwriteroperec_51610)(FILE** F_51613, TY51008* C_51614);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
N_NIMCALL(void, Rawmessage_46557)(NU8 Msg_46559, NimStringDesc* Arg_46560);
N_NIMCALL(TY51008*, Pop_51419)(TY51398** S_51424);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18603, NI Elemsize_18604, NI Newlen_18605);
STRING_LITERAL(TMP193889, "", 0);
STRING_LITERAL(TMP194227, "$", 1);
STRING_LITERAL(TMP194228, "ropes: invalid format string $", 30);
extern NIM_CONST TY49040 Crc32table_49039;
TY51008* Cache_51123;
NI Misses_51124;
NI Hits_51125;
TY51008* N_51126;
extern TNimType* NTI51006; /* PRope */
extern TY10790 Gch_10808;
extern TNimType* NTI51008; /* TRope */
extern TNimType* NTI51398; /* seq[PRope] */
extern NimStringDesc* Tnl_50573;
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_11214))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12201(C_12822);
LA10: ;
LA6: ;
(*Dest_12818) = Src_12819;
}
N_NIMCALL(void, Newrecropetostr_51380)(NimStringDesc** Result_51383, NI* Resultlen_51385, TY51008* R_51386) {
TY51398* Stack_51401;
TY51399 LOC1;
TY51008* It_51450;
Stack_51401 = 0;
Stack_51401 = (TY51398*) newSeq(NTI51398, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_51386;
asgnRefNoCycle((void**) &Stack_51401->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_51401->Sup.len)) goto LA2;
It_51450 = 0;
It_51450 = Pop_51419(&Stack_51401);
while (1) {
if (!((*It_51450).Data == NIM_NIL)) goto LA3;
Stack_51401 = (TY51398*) incrSeq(&(Stack_51401)->Sup, sizeof(TY51008*));
asgnRefNoCycle((void**) &Stack_51401->data[Stack_51401->Sup.len-1], (*It_51450).Right);
It_51450 = (*It_51450).Left;
} LA3: ;
memcpy(((void*) (&(*Result_51383)->data[(*Resultlen_51385)])), ((void*) (&(*It_51450).Data->data[0])), (*It_51450).Length);
(*Resultlen_51385) += (*It_51450).Length;
} LA2: ;
}
N_NIMCALL(NimStringDesc*, Ropetostr_51063)(TY51008* P_51065) {
NimStringDesc* Result_51490;
NI Resultlen_51502;
Result_51490 = 0;
if (!(P_51065 == NIM_NIL)) goto LA2;
Result_51490 = copyString(((NimStringDesc*) &TMP193889));
goto LA1;
LA2: ;
Result_51490 = mnewString((*P_51065).Length);
Resultlen_51502 = 0;
Resultlen_51502 = 0;
Newrecropetostr_51380(&Result_51490, &Resultlen_51502, P_51065);
LA1: ;
return Result_51490;
}
N_NIMCALL(TY51008*, Newrope_51102)(NimStringDesc* Data_51104) {
TY51008* Result_51105;
Result_51105 = 0;
Result_51105 = (TY51008*) newObj(NTI51006, sizeof(TY51008));
(*Result_51105).Sup.m_type = NTI51008;
if (!!((Data_51104 == NIM_NIL))) goto LA2;
(*Result_51105).Length = Data_51104->Sup.len;
asgnRefNoCycle((void**) &(*Result_51105).Data, copyString(Data_51104));
LA2: ;
return Result_51105;
}
static N_INLINE(NI, cmpStrings)(NimStringDesc* A_18211, NimStringDesc* B_18212) {
NI Result_18213;
int LOC10;
Result_18213 = 0;
if (!(A_18211 == B_18212)) goto LA2;
Result_18213 = 0;
goto BeforeRet;
LA2: ;
if (!(A_18211 == NIM_NIL)) goto LA5;
Result_18213 = -1;
goto BeforeRet;
LA5: ;
if (!(B_18212 == NIM_NIL)) goto LA8;
Result_18213 = 1;
goto BeforeRet;
LA8: ;
LOC10 = strcmp(((NCSTRING) ((*A_18211).data)), ((NCSTRING) ((*B_18212).data)));
Result_18213 = ((NI) (LOC10));
goto BeforeRet;
BeforeRet: ;
return Result_18213;
}
N_NIMCALL(TY51008*, Splay_51136)(NimStringDesc* S_51138, TY51008* Tree_51139, NI* Cmpres_51141) {
TY51008* Result_51142;
NI C_51143;
TY51008* T_51144;
TY51008* Le_51145;
TY51008* R_51146;
NIM_BOOL LOC6;
TY51008* Y_51160;
NIM_BOOL LOC16;
TY51008* Y_51185;
Result_51142 = 0;
C_51143 = 0;
T_51144 = 0;
T_51144 = Tree_51139;
asgnRefNoCycle((void**) &(*N_51126).Left, NIM_NIL);
asgnRefNoCycle((void**) &(*N_51126).Right, NIM_NIL);
Le_51145 = 0;
Le_51145 = N_51126;
R_51146 = 0;
R_51146 = N_51126;
while (1) {
C_51143 = Cmp_1321(S_51138, (*T_51144).Data);
if (!(C_51143 < 0)) goto LA3;
LOC6 = !(((*T_51144).Left == NIM_NIL));
if (!(LOC6)) goto LA7;
LOC6 = (cmpStrings(S_51138, (*(*T_51144).Left).Data) < 0);
LA7: ;
if (!LOC6) goto LA8;
Y_51160 = 0;
Y_51160 = (*T_51144).Left;
asgnRefNoCycle((void**) &(*T_51144).Left, (*Y_51160).Right);
asgnRefNoCycle((void**) &(*Y_51160).Right, T_51144);
T_51144 = Y_51160;
LA8: ;
if (!((*T_51144).Left == NIM_NIL)) goto LA11;
goto LA1;
LA11: ;
asgnRefNoCycle((void**) &(*R_51146).Left, T_51144);
R_51146 = T_51144;
T_51144 = (*T_51144).Left;
goto LA2;
LA3: ;
if (!(0 < C_51143)) goto LA13;
LOC16 = !(((*T_51144).Right == NIM_NIL));
if (!(LOC16)) goto LA17;
LOC16 = (cmpStrings((*(*T_51144).Right).Data, S_51138) < 0);
LA17: ;
if (!LOC16) goto LA18;
Y_51185 = 0;
Y_51185 = (*T_51144).Right;
asgnRefNoCycle((void**) &(*T_51144).Right, (*Y_51185).Left);
asgnRefNoCycle((void**) &(*Y_51185).Left, T_51144);
T_51144 = Y_51185;
LA18: ;
if (!((*T_51144).Right == NIM_NIL)) goto LA21;
goto LA1;
LA21: ;
asgnRefNoCycle((void**) &(*Le_51145).Right, T_51144);
Le_51145 = T_51144;
T_51144 = (*T_51144).Right;
goto LA2;
LA13: ;
goto LA1;
LA2: ;
} LA1: ;
(*Cmpres_51141) = C_51143;
asgnRefNoCycle((void**) &(*Le_51145).Right, (*T_51144).Left);
asgnRefNoCycle((void**) &(*R_51146).Left, (*T_51144).Right);
asgnRefNoCycle((void**) &(*T_51144).Left, (*N_51126).Right);
asgnRefNoCycle((void**) &(*T_51144).Right, (*N_51126).Left);
Result_51142 = T_51144;
return Result_51142;
}
N_NIMCALL(TY51008*, Insertincache_51197)(NimStringDesc* S_51199, TY51008* Tree_51200) {
TY51008* Result_51201;
TY51008* T_51202;
NI Cmp_51226;
Result_51201 = 0;
T_51202 = 0;
T_51202 = Tree_51200;
if (!(T_51202 == NIM_NIL)) goto LA2;
Result_51201 = Newrope_51102(S_51199);
if (!NIM_FALSE) goto LA5;
Misses_51124 += 1;
LA5: ;
goto BeforeRet;
LA2: ;
Cmp_51226 = 0;
T_51202 = Splay_51136(S_51199, T_51202, &Cmp_51226);
if (!(Cmp_51226 == 0)) goto LA8;
Result_51201 = T_51202;
if (!NIM_FALSE) goto LA11;
Hits_51125 += 1;
LA11: ;
goto LA7;
LA8: ;
if (!NIM_FALSE) goto LA14;
Misses_51124 += 1;
LA14: ;
Result_51201 = Newrope_51102(S_51199);
if (!(Cmp_51226 < 0)) goto LA17;
asgnRefNoCycle((void**) &(*Result_51201).Left, (*T_51202).Left);
asgnRefNoCycle((void**) &(*Result_51201).Right, T_51202);
asgnRefNoCycle((void**) &(*T_51202).Left, NIM_NIL);
goto LA16;
LA17: ;
asgnRefNoCycle((void**) &(*Result_51201).Right, (*T_51202).Right);
asgnRefNoCycle((void**) &(*Result_51201).Left, T_51202);
asgnRefNoCycle((void**) &(*T_51202).Right, NIM_NIL);
LA16: ;
LA7: ;
BeforeRet: ;
return Result_51201;
}
N_NIMCALL(TY51008*, Torope_51046)(NimStringDesc* S_51048) {
TY51008* Result_51274;
Result_51274 = 0;
if (!((S_51048) && (S_51048)->Sup.len == 0)) goto LA2;
Result_51274 = NIM_NIL;
goto LA1;
LA2: ;
if (!NIM_TRUE) goto LA4;
Result_51274 = Insertincache_51197(S_51048, Cache_51123);
asgnRefNoCycle((void**) &Cache_51123, Result_51274);
goto LA1;
LA4: ;
Result_51274 = Newrope_51102(S_51048);
LA1: ;
return Result_51274;
}
N_NIMCALL(TY51008*, Con_51015)(TY51008* A_51017, TY51008* B_51018) {
TY51008* Result_51509;
Result_51509 = 0;
if (!(A_51017 == NIM_NIL)) goto LA2;
Result_51509 = B_51018;
goto LA1;
LA2: ;
if (!(B_51018 == NIM_NIL)) goto LA4;
Result_51509 = A_51017;
goto LA1;
LA4: ;
Result_51509 = Newrope_51102(NIM_NIL);
(*Result_51509).Length = (NI32)((*A_51017).Length + (*B_51018).Length);
asgnRefNoCycle((void**) &(*Result_51509).Left, A_51017);
asgnRefNoCycle((void**) &(*Result_51509).Right, B_51018);
LA1: ;
return Result_51509;
}
N_NIMCALL(TY51008*, Con_51019)(TY51008* A_51021, NimStringDesc* B_51022) {
TY51008* Result_51536;
TY51008* LOC1;
Result_51536 = 0;
LOC1 = 0;
LOC1 = Torope_51046(B_51022);
Result_51536 = Con_51015(A_51021, LOC1);
return Result_51536;
}
N_NIMCALL(void, App_51036)(TY51008** A_51039, NimStringDesc* B_51040) {
unsureAsgnRef((void**) &(*A_51039), Con_51019((*A_51039), B_51040));
}
N_NIMCALL(void, App_51031)(TY51008** A_51034, TY51008* B_51035) {
unsureAsgnRef((void**) &(*A_51034), Con_51015((*A_51034), B_51035));
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI32)((NI32)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410) {
(*Dest_18409).data[((*Dest_18409).Sup.len)-0] = C_18410;
(*Dest_18409).data[((NI32)((*Dest_18409).Sup.len + 1))-0] = 0;
(*Dest_18409).Sup.len += 1;
}
N_NIMCALL(TY51008*, Ropef_51066)(NimStringDesc* Frmt_51068, TY51008** Args_51070, NI Args_51070Len0) {
TY51008* Result_51707;
NI I_51708;
NI Length_51711;
NI Num_51712;
NI J_51767;
NIM_BOOL LOC7;
NimStringDesc* LOC14;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
NI Start_51822;
NimStringDesc* LOC24;
Result_51707 = 0;
I_51708 = 0;
I_51708 = 0;
Length_51711 = 0;
Length_51711 = Frmt_51068->Sup.len;
Result_51707 = NIM_NIL;
Num_51712 = 0;
Num_51712 = 0;
while (1) {
if (!(I_51708 <= (NI32)(Length_51711 - 1))) goto LA1;
if (!((NU8)(Frmt_51068->data[I_51708]) == (NU8)(36))) goto LA3;
I_51708 += 1;
switch (((NU8)(Frmt_51068->data[I_51708]))) {
case 36:
App_51036(&Result_51707, ((NimStringDesc*) &TMP194227));
I_51708 += 1;
break;
case 35:
I_51708 += 1;
App_51031(&Result_51707, Args_51070[Num_51712]);
Num_51712 += 1;
break;
case 48 ... 57:
J_51767 = 0;
J_51767 = 0;
while (1) {
J_51767 = (NI32)((NI32)((NI32)(J_51767 * 10) + ((NU8)(Frmt_51068->data[I_51708]))) - 48);
I_51708 += 1;
LOC7 = ((NI32)((NI32)(Length_51711 + 0) - 1) < I_51708);
if (LOC7) goto LA8;
LOC7 = !((((NU8)(Frmt_51068->data[I_51708])) >= ((NU8)(48)) && ((NU8)(Frmt_51068->data[I_51708])) <= ((NU8)(57))));
LA8: ;
if (!LOC7) goto LA9;
goto LA5;
LA9: ;
} LA5: ;
Num_51712 = J_51767;
if (!((NI32)((Args_51070Len0-1) + 1) < J_51767)) goto LA12;
LOC14 = 0;
LOC15 = 0;
LOC15 = nimIntToStr(J_51767);
LOC14 = rawNewString(LOC15->Sup.len + 30);
appendString(LOC14, ((NimStringDesc*) &TMP194228));
appendString(LOC14, LOC15);
Internalerror_46575(LOC14);
LA12: ;
App_51031(&Result_51707, Args_51070[(NI32)(J_51767 - 1)]);
break;
case 78:
case 110:
App_51036(&Result_51707, Tnl_50573);
I_51708 += 1;
break;
default:
LOC16 = 0;
LOC16 = rawNewString(31);
appendString(LOC16, ((NimStringDesc*) &TMP194228));
appendChar(LOC16, Frmt_51068->data[I_51708]);
Internalerror_46575(LOC16);
break;
}
LA3: ;
Start_51822 = 0;
Start_51822 = I_51708;
while (1) {
if (!(I_51708 <= (NI32)(Length_51711 - 1))) goto LA17;
if (!!(((NU8)(Frmt_51068->data[I_51708]) == (NU8)(36)))) goto LA19;
I_51708 += 1;
goto LA18;
LA19: ;
goto LA17;
LA18: ;
} LA17: ;
if (!(Start_51822 <= (NI32)(I_51708 - 1))) goto LA22;
LOC24 = 0;
LOC24 = copyStrLast(Frmt_51068, Start_51822, (NI32)(I_51708 - 1));
App_51036(&Result_51707, LOC24);
LA22: ;
} LA1: ;
return Result_51707;
}
N_NIMCALL(TY51008*, Torope_51049)(NI64 I_51051) {
TY51008* Result_51576;
NimStringDesc* LOC1;
Result_51576 = 0;
LOC1 = 0;
LOC1 = nimInt64ToStr(I_51051);
Result_51576 = Torope_51046(LOC1);
return Result_51576;
}
N_NIMCALL(void, Appf_51071)(TY51008** C_51074, NimStringDesc* Frmt_51075, TY51008** Args_51077, NI Args_51077Len0) {
TY51008* LOC1;
LOC1 = 0;
LOC1 = Ropef_51066(Frmt_51075, Args_51077, Args_51077Len0);
App_51031(C_51074, LOC1);
}
N_NIMCALL(TY51008*, Con_51023)(NimStringDesc* A_51025, TY51008* B_51026) {
TY51008* Result_51541;
TY51008* LOC1;
Result_51541 = 0;
LOC1 = 0;
LOC1 = Torope_51046(A_51025);
Result_51541 = Con_51015(LOC1, B_51026);
return Result_51541;
}
N_NIMCALL(void, Prepend_51041)(TY51008** A_51044, TY51008* B_51045) {
unsureAsgnRef((void**) &(*A_51044), Con_51015(B_51045, (*A_51044)));
}
static N_INLINE(int, Updatecrc32_49014)(NI8 Val_49016, int Crc_49017) {
int Result_49048;
Result_49048 = 0;
Result_49048 = (NI32)(((int) (Crc32table_49039[((NI32)((NI32)(((NI) (Crc_49017)) ^ (NI32)(((NI) (Val_49016)) & 255)) & 255))-0])) ^ (NI32)((NU32)(Crc_49017) >> (NU32)(((NI32) 8))));
return Result_49048;
}
static N_INLINE(int, Updatecrc32_49018)(NIM_CHAR Val_49020, int Crc_49021) {
int Result_49053;
Result_49053 = 0;
Result_49053 = Updatecrc32_49014(((NI8) (((NU8)(Val_49020)))), Crc_49021);
return Result_49053;
}
N_NIMCALL(int, Newcrcfromropeaux_51892)(TY51008* R_51894, int Startval_51895) {
int Result_51896;
TY51398* Stack_51911;
TY51399 LOC1;
TY51008* It_51936;
NI I_51955;
NI L_51958;
Result_51896 = 0;
Stack_51911 = 0;
Stack_51911 = (TY51398*) newSeq(NTI51398, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = R_51894;
asgnRefNoCycle((void**) &Stack_51911->data[0], LOC1[0]);
Result_51896 = Startval_51895;
while (1) {
if (!(0 < Stack_51911->Sup.len)) goto LA2;
It_51936 = 0;
It_51936 = Pop_51419(&Stack_51911);
while (1) {
if (!((*It_51936).Data == NIM_NIL)) goto LA3;
Stack_51911 = (TY51398*) incrSeq(&(Stack_51911)->Sup, sizeof(TY51008*));
asgnRefNoCycle((void**) &Stack_51911->data[Stack_51911->Sup.len-1], (*It_51936).Right);
It_51936 = (*It_51936).Left;
} LA3: ;
I_51955 = 0;
I_51955 = 0;
L_51958 = 0;
L_51958 = (*It_51936).Data->Sup.len;
while (1) {
if (!(I_51955 < L_51958)) goto LA4;
Result_51896 = Updatecrc32_49018((*It_51936).Data->data[I_51955], Result_51896);
I_51955 += 1;
} LA4: ;
} LA2: ;
return Result_51896;
}
N_NIMCALL(int, Crcfromrope_51973)(TY51008* R_51975) {
int Result_51976;
Result_51976 = 0;
Result_51976 = Newcrcfromropeaux_51892(R_51975, ((NI32) -1));
return Result_51976;
}
N_NIMCALL(void, Newwriteroperec_51610)(FILE** F_51613, TY51008* C_51614) {
TY51398* Stack_51629;
TY51399 LOC1;
TY51008* It_51654;
Stack_51629 = 0;
Stack_51629 = (TY51398*) newSeq(NTI51398, 1);
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = C_51614;
asgnRefNoCycle((void**) &Stack_51629->data[0], LOC1[0]);
while (1) {
if (!(0 < Stack_51629->Sup.len)) goto LA2;
It_51654 = 0;
It_51654 = Pop_51419(&Stack_51629);
while (1) {
if (!((*It_51654).Data == NIM_NIL)) goto LA3;
Stack_51629 = (TY51398*) incrSeq(&(Stack_51629)->Sup, sizeof(TY51008*));
asgnRefNoCycle((void**) &Stack_51629->data[Stack_51629->Sup.len-1], (*It_51654).Right);
It_51654 = (*It_51654).Left;
} LA3: ;
Write_3658((*F_51613), (*It_51654).Data);
} LA2: ;
}
N_NIMCALL(void, Writerope_51055)(TY51008* Head_51057, NimStringDesc* Filename_51058) {
FILE* F_51688;
NIM_BOOL LOC2;
F_51688 = 0;
LOC2 = Open_3617(&F_51688, Filename_51058, ((NU8) 1), -1);
if (!LOC2) goto LA3;
if (!!((Head_51057 == NIM_NIL))) goto LA6;
Newwriteroperec_51610(&F_51688, Head_51057);
LA6: ;
fclose(F_51688);
goto LA1;
LA3: ;
Rawmessage_46557(((NU8) 2), Filename_51058);
LA1: ;
}
N_NIMCALL(NIM_BOOL, Writeropeifnotequal_51059)(TY51008* R_51061, NimStringDesc* Filename_51062) {
NIM_BOOL Result_51981;
int C_51982;
int LOC2;
Result_51981 = 0;
C_51982 = 0;
C_51982 = Crcfromfile_49029(Filename_51062);
LOC2 = Crcfromrope_51973(R_51061);
if (!!((C_51982 == LOC2))) goto LA3;
Writerope_51055(R_51061, Filename_51062);
Result_51981 = NIM_TRUE;
goto LA1;
LA3: ;
Result_51981 = NIM_FALSE;
LA1: ;
return Result_51981;
}
N_NIMCALL(NI, Ropelen_51052)(TY51008* A_51054) {
NI Result_51090;
Result_51090 = 0;
if (!(A_51054 == NIM_NIL)) goto LA2;
Result_51090 = 0;
goto LA1;
LA2: ;
Result_51090 = (*A_51054).Length;
LA1: ;
return Result_51090;
}
N_NIMCALL(TY51008*, Pop_51419)(TY51398** S_51424) {
TY51008* Result_51425;
NI L_51436;
Result_51425 = 0;
L_51436 = 0;
L_51436 = (NI32)((*S_51424)->Sup.len - 1);
Result_51425 = (*S_51424)->data[L_51436];
(*S_51424) = (TY51398*) setLengthSeq(&((*S_51424))->Sup, sizeof(TY51008*), L_51436);
return Result_51425;
}
N_NOINLINE(void, ropesInit)(void) {
asgnRefNoCycle((void**) &N_51126, (TY51008*) newObj(NTI51006, sizeof(TY51008)));
(*N_51126).Sup.m_type = NTI51008;
}

