/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY49011 TY49011;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef TY49011* TY49039[8192];
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
struct TNimObject {
TNimType* m_type;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
N_NIMCALL(TY49011*, Getident_49023)(NCSTRING Identifier_49025, NI Length_49026, NI H_49027);
N_NIMCALL(NI, Cmpexact_49164)(NCSTRING A_49166, NCSTRING B_49167, NI Blen_49168);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NI, Cmpignorestyle_49042)(NCSTRING A_49044, NCSTRING B_49045, NI Blen_49046);
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(NI, Getnormalizedhash_39037)(NimStringDesc* S_39039);
N_NIMCALL(TY49011*, Getident_49016)(NimStringDesc* Identifier_49018);
TY49039 Buckets_49041;
NI Wordcounter_49233;
extern TY10996 Gch_11014;
extern TNimType* NTI49009; /* PIdent */
extern TNimType* NTI49011; /* TIdent */
N_NIMCALL(NI, Cmpexact_49164)(NCSTRING A_49166, NCSTRING B_49167, NI Blen_49168) {
NI Result_49169;
NIM_CHAR Aa_49170;
NIM_CHAR Bb_49171;
NI I_49172;
NI J_49173;
NIM_BOOL LOC3;
Result_49169 = 0;
Aa_49170 = 0;
Bb_49171 = 0;
I_49172 = 0;
J_49173 = 0;
I_49172 = 0;
J_49173 = 0;
Result_49169 = 1;
while (1) {
if (!(J_49173 < Blen_49168)) goto LA1;
Aa_49170 = A_49166[I_49172];
Bb_49171 = B_49167[J_49173];
Result_49169 = (NI64)(((NU8)(Aa_49170)) - ((NU8)(Bb_49171)));
LOC3 = !((Result_49169 == 0));
if (LOC3) goto LA4;
LOC3 = ((NU8)(Aa_49170) == (NU8)(0));
LA4: ;
if (!LOC3) goto LA5;
goto LA1;
LA5: ;
I_49172 += 1;
J_49173 += 1;
} LA1: ;
if (!(Result_49169 == 0)) goto LA8;
if (!!(((NU8)(A_49166[I_49172]) == (NU8)(0)))) goto LA11;
Result_49169 = 1;
LA11: ;
LA8: ;
return Result_49169;
}
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
N_NIMCALL(NI, Cmpignorestyle_49042)(NCSTRING A_49044, NCSTRING B_49045, NI Blen_49046) {
NI Result_49047;
NIM_CHAR Aa_49048;
NIM_CHAR Bb_49049;
NI I_49050;
NI J_49051;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Result_49047 = 0;
Aa_49048 = 0;
Bb_49049 = 0;
I_49050 = 0;
J_49051 = 0;
I_49050 = 0;
J_49051 = 0;
Result_49047 = 1;
while (1) {
if (!(J_49051 < Blen_49046)) goto LA1;
while (1) {
if (!((NU8)(A_49044[I_49050]) == (NU8)(95))) goto LA2;
I_49050 += 1;
} LA2: ;
while (1) {
if (!((NU8)(B_49045[J_49051]) == (NU8)(95))) goto LA3;
J_49051 += 1;
} LA3: ;
Aa_49048 = A_49044[I_49050];
Bb_49049 = B_49045[J_49051];
LOC5 = ((NU8)(65) <= (NU8)(Aa_49048));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Aa_49048) <= (NU8)(90));
LA6: ;
if (!LOC5) goto LA7;
Aa_49048 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(Aa_49048)) + 32)))));
LA7: ;
LOC10 = ((NU8)(65) <= (NU8)(Bb_49049));
if (!(LOC10)) goto LA11;
LOC10 = ((NU8)(Bb_49049) <= (NU8)(90));
LA11: ;
if (!LOC10) goto LA12;
Bb_49049 = ((NIM_CHAR) (((NI) ((NI64)(((NU8)(Bb_49049)) + 32)))));
LA12: ;
Result_49047 = (NI64)(((NU8)(Aa_49048)) - ((NU8)(Bb_49049)));
LOC15 = !((Result_49047 == 0));
if (LOC15) goto LA16;
LOC15 = ((NU8)(Aa_49048) == (NU8)(0));
LA16: ;
if (!LOC15) goto LA17;
goto LA1;
LA17: ;
I_49050 += 1;
J_49051 += 1;
} LA1: ;
if (!(Result_49047 == 0)) goto LA20;
if (!!(((NU8)(A_49044[I_49050]) == (NU8)(0)))) goto LA23;
Result_49047 = 1;
LA23: ;
LA20: ;
return Result_49047;
}
N_NIMCALL(TY49011*, Getident_49023)(NCSTRING Identifier_49025, NI Length_49026, NI H_49027) {
TY49011* Result_49239;
NI Idx_49240;
NI Id_49241;
TY49011* Last_49242;
NI LOC3;
NI LOC9;
NI I_49311;
NI HEX3Atmp_49326;
NI Res_49328;
Result_49239 = 0;
Idx_49240 = 0;
Id_49241 = 0;
Last_49242 = 0;
Idx_49240 = (NI64)(H_49027 & 8191);
Result_49239 = Buckets_49041[(Idx_49240)-0];
Last_49242 = NIM_NIL;
Id_49241 = 0;
while (1) {
if (!!((Result_49239 == NIM_NIL))) goto LA1;
LOC3 = Cmpexact_49164((*Result_49239).S->data, Identifier_49025, Length_49026);
if (!(LOC3 == 0)) goto LA4;
if (!!((Last_49242 == NIM_NIL))) goto LA7;
asgnRefNoCycle((void**) &(*Last_49242).Next, (*Result_49239).Next);
asgnRefNoCycle((void**) &(*Result_49239).Next, Buckets_49041[(Idx_49240)-0]);
asgnRefNoCycle((void**) &Buckets_49041[(Idx_49240)-0], Result_49239);
LA7: ;
goto BeforeRet;
goto LA2;
LA4: ;
LOC9 = Cmpignorestyle_49042((*Result_49239).S->data, Identifier_49025, Length_49026);
if (!(LOC9 == 0)) goto LA10;
Id_49241 = (*Result_49239).Sup.Id;
goto LA2;
LA10: ;
LA2: ;
Last_49242 = Result_49239;
Result_49239 = (*Result_49239).Next;
} LA1: ;
Result_49239 = (TY49011*) newObj(NTI49009, sizeof(TY49011));
(*Result_49239).Sup.Sup.m_type = NTI49011;
(*Result_49239).H = H_49027;
asgnRefNoCycle((void**) &(*Result_49239).S, mnewString(Length_49026));
I_49311 = 0;
HEX3Atmp_49326 = 0;
HEX3Atmp_49326 = (NI64)((NI64)(Length_49026 + 0) - 1);
Res_49328 = 0;
Res_49328 = 0;
while (1) {
if (!(Res_49328 <= HEX3Atmp_49326)) goto LA12;
I_49311 = Res_49328;
(*Result_49239).S->data[I_49311] = Identifier_49025[(NI64)(I_49311 - 0)];
Res_49328 += 1;
} LA12: ;
asgnRefNoCycle((void**) &(*Result_49239).Next, Buckets_49041[(Idx_49240)-0]);
asgnRefNoCycle((void**) &Buckets_49041[(Idx_49240)-0], Result_49239);
if (!(Id_49241 == 0)) goto LA14;
Wordcounter_49233 += 1;
(*Result_49239).Sup.Id = ((NI64)-(Wordcounter_49233));
goto LA13;
LA14: ;
(*Result_49239).Sup.Id = Id_49241;
LA13: ;
BeforeRet: ;
return Result_49239;
}
N_NIMCALL(TY49011*, Getident_49019)(NimStringDesc* Identifier_49021, NI H_49022) {
TY49011* Result_49230;
Result_49230 = 0;
Result_49230 = Getident_49023(Identifier_49021->data, Identifier_49021->Sup.len, H_49022);
return Result_49230;
}
N_NIMCALL(TY49011*, Getident_49016)(NimStringDesc* Identifier_49018) {
TY49011* Result_49223;
NI LOC1;
Result_49223 = 0;
LOC1 = Getnormalizedhash_39037(Identifier_49018);
Result_49223 = Getident_49023(Identifier_49018->data, Identifier_49018->Sup.len, LOC1);
return Result_49223;
}
N_NIMCALL(NIM_BOOL, Identeq_49028)(TY49011* Id_49030, NimStringDesc* Name_49031) {
NIM_BOOL Result_49036;
TY49011* LOC1;
Result_49036 = 0;
LOC1 = 0;
LOC1 = Getident_49016(Name_49031);
Result_49036 = ((*Id_49030).Sup.Id == (*LOC1).Sup.Id);
return Result_49036;
}
N_NOINLINE(void, identsInit)(void) {
Wordcounter_49233 = 1;
}

