/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY154160 TY154160;
typedef struct TY50527 TY50527;
typedef struct TY50547 TY50547;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10202 TY10202;
typedef struct TY10218 TY10218;
typedef struct TY10590 TY10590;
typedef struct TY10214 TY10214;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
typedef struct TY50551 TY50551;
typedef struct TY49005 TY49005;
typedef struct TNimObject TNimObject;
typedef struct TY49011 TY49011;
typedef struct TY42536 TY42536;
typedef struct TY50529 TY50529;
typedef struct TY50525 TY50525;
typedef struct TY50539 TY50539;
typedef struct TY47008 TY47008;
typedef struct TY50543 TY50543;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY50549 TY50549;
typedef struct TY50519 TY50519;
typedef struct TY50900 TY50900;
typedef struct TY50896 TY50896;
typedef struct TY50898 TY50898;
typedef struct TY38013 TY38013;
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
struct TY10202 {
NI Refcount;
TNimType* Typ;
};
struct TY10218 {
NI Len;
NI Cap;
TY10202** D;
};
struct TY10214 {
NI Counter;
NI Max;
TY10210* Head;
TY10210** Data;
};
struct TY10588 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10590 {
TY10218 Zct;
TY10218 Decstack;
TY10214 Cycleroots;
TY10218 Tempstack;
TY10588 Stat;
};
struct TNimObject {
TNimType* m_type;
};
struct TY49005 {
  TNimObject Sup;
NI Id;
};
struct TY42536 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY50529 {
TNimType* m_type;
NI Counter;
TY50527* Data;
};
struct TY50539 {
NU8 K;
NU8 S;
NU8 Flags;
TY50551* T;
TY47008* R;
NI A;
};
struct TY50547 {
  TY49005 Sup;
NU8 Kind;
NU8 Magic;
TY50551* Typ;
TY49011* Name;
TY42536 Info;
TY50547* Owner;
NU32 Flags;
TY50529 Tab;
TY50525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY50539 Loc;
TY50543* Annex;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY49011 {
  TY49005 Sup;
NimStringDesc* S;
TY49011* Next;
NI H;
};
struct TY50551 {
  TY49005 Sup;
NU8 Kind;
TY50549* Sons;
TY50525* N;
NU8 Flags;
NU8 Callconv;
TY50547* Owner;
TY50547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY50539 Loc;
};
struct TY50525 {
TY50551* Typ;
NimStringDesc* Comment;
TY42536 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY50547* Sym;
} S4;
struct {TY49011* Ident;
} S5;
struct {TY50519* Sons;
} S6;
} KindU;
};
typedef TY50547* TY154281[1];
struct TY50900 {
NI Counter;
NI Max;
TY50896* Head;
TY50898* Data;
};
typedef NI TY8214[16];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
struct TY47008 {
  TNimObject Sup;
TY47008* Left;
TY47008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
struct TY50543 {
  TY38013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY47008* Name;
TY50525* Path;
};
struct TY50896 {
TY50896* Next;
NI Key;
TY8214 Bits;
};
struct TY50527 {
  TGenericSeq Sup;
  TY50547* data[SEQ_DECL_SIZE];
};
struct TY154160 {
  TGenericSeq Sup;
  TY50527* data[SEQ_DECL_SIZE];
};
struct TY50549 {
  TGenericSeq Sup;
  TY50551* data[SEQ_DECL_SIZE];
};
struct TY50519 {
  TGenericSeq Sup;
  TY50525* data[SEQ_DECL_SIZE];
};
struct TY50898 {
  TGenericSeq Sup;
  TY50896* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_13804, NI Len_13805);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12618, void* Src_12619);
static N_INLINE(TY10202*, Usrtocell_11012)(void* Usr_11014);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12001)(TY10202* C_12003);
N_NOINLINE(void, Addzct_11001)(TY10218* S_11004, TY10202* C_11005);
N_NIMCALL(NIM_BOOL, Samemethodbucket_154162)(TY50547* A_154164, TY50547* B_154165);
static N_INLINE(NI, Sonslen_50806)(TY50551* N_50808);
N_NIMCALL(NIM_BOOL, Sametypeornil_92052)(TY50551* A_92054, TY50551* B_92055);
N_NIMCALL(TY50551*, Skiptypes_92087)(TY50551* T_92089, NU64 Kinds_92090);
N_NIMCALL(NIM_BOOL, Sametype_92048)(TY50551* X_92050, TY50551* Y_92051);
N_NIMCALL(NI, Inheritancediff_92121)(TY50551* A_92123, TY50551* B_92124);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18235, NI Elemsize_18236);
static N_INLINE(void, asgnRef)(void** Dest_12614, void* Src_12615);
static N_INLINE(void, Incref_12602)(TY10202* C_12604);
static N_INLINE(NIM_BOOL, Canbecycleroot_11016)(TY10202* C_11018);
static N_INLINE(void, Rtladdcycleroot_11652)(TY10202* C_11654);
N_NOINLINE(void, Incl_10474)(TY10214* S_10477, TY10202* Cell_10478);
static N_INLINE(void, Decref_12401)(TY10202* C_12403);
N_NIMCALL(void, Addson_50823)(TY50525* Father_50825, TY50525* Son_50826);
static N_INLINE(TY50525*, Lastson_50809)(TY50525* N_50811);
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805);
N_NIMCALL(void, genericSeqAssign)(void* Dest_19039, void* Src_19040, TNimType* Mt_19041);
N_NIMCALL(TY50547*, Copysym_50775)(TY50547* S_50777, NIM_BOOL Keepid_50778);
N_NIMCALL(TY50551*, Copytype_50770)(TY50551* T_50772, TY50547* Owner_50773, NIM_BOOL Keepid_50774);
N_NIMCALL(TY50525*, Copytree_50858)(TY50525* Src_50860);
N_NIMCALL(TY50525*, Newsymnode_50734)(TY50547* Sym_50736);
N_NIMCALL(TY50525*, Genconv_154012)(TY50525* N_154014, TY50551* D_154015, NIM_BOOL Downcast_154016);
N_NIMCALL(void, Internalerror_42571)(TY42536 Info_42573, NimStringDesc* Errmsg_42574);
N_NIMCALL(TY50525*, Newnodeit_50741)(NU8 Kind_50743, TY42536 Info_50744, TY50551* Typ_50745);
N_NIMCALL(TY50525*, Newnode_50710)(NU8 Kind_50712);
N_NIMCALL(void, Intsetinit_50924)(TY50900* S_50927);
N_NIMCALL(NIM_BOOL, Relevantcol_154384)(TY50527* Methods_154386, NI Col_154387);
N_NIMCALL(void, Intsetincl_50914)(TY50900* S_50917, NI Key_50918);
N_NIMCALL(void, Sortbucket_154432)(TY50527** A_154435, TY50900 Relevantcols_154436);
N_NIMCALL(NI, Cmpsignatures_154410)(TY50547* A_154412, TY50547* B_154413, TY50900 Relevantcols_154414);
N_NIMCALL(NIM_BOOL, Intsetcontains_50910)(TY50900 S_50912, NI Key_50913);
N_NIMCALL(TY50547*, Gendispatcher_154470)(TY50527* Methods_154472, TY50900 Relevantcols_154473);
N_NIMCALL(TY50525*, Newnodei_50737)(NU8 Kind_50739, TY42536 Info_50740);
N_NIMCALL(TY50547*, Getsyssym_97024)(NimStringDesc* Name_97026);
N_NIMCALL(TY50551*, Getsystype_97008)(NU8 Kind_97010);
STRING_LITERAL(TMP190227, "cgmeth.genConv", 14);
STRING_LITERAL(TMP190228, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP190229, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP190763, "and", 3);
STRING_LITERAL(TMP190764, "is", 2);
TY154160* Gmethods_154161;
extern TNimType* NTI154160; /* seq[TSymSeq] */
extern TY10590 Gch_10608;
extern TNimType* NTI50527; /* TSymSeq */
static N_INLINE(TY10202*, Usrtocell_11012)(void* Usr_11014) {
TY10202* Result_11015;
Result_11015 = 0;
Result_11015 = ((TY10202*) ((NI32)((NU32)(((NI) (Usr_11014))) - (NU32)(((NI) (((NI)sizeof(TY10202))))))));
return Result_11015;
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
static N_INLINE(void, Rtladdzct_12001)(TY10202* C_12003) {
Addzct_11001(&Gch_10608.Zct, C_12003);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12618, void* Src_12619) {
TY10202* C_12620;
NI LOC4;
TY10202* C_12622;
NI LOC9;
if (!!((Src_12619 == NIM_NIL))) goto LA2;
C_12620 = 0;
C_12620 = Usrtocell_11012(Src_12619);
LOC4 = Atomicinc_3001(&(*C_12620).Refcount, 8);
LA2: ;
if (!!(((*Dest_12618) == NIM_NIL))) goto LA6;
C_12622 = 0;
C_12622 = Usrtocell_11012((*Dest_12618));
LOC9 = Atomicdec_3006(&(*C_12622).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12001(C_12622);
LA10: ;
LA6: ;
(*Dest_12618) = Src_12619;
}
static N_INLINE(NI, Sonslen_50806)(TY50551* N_50808) {
NI Result_51744;
Result_51744 = 0;
if (!(*N_50808).Sons == 0) goto LA2;
Result_51744 = 0;
goto LA1;
LA2: ;
Result_51744 = (*N_50808).Sons->Sup.len;
LA1: ;
return Result_51744;
}
N_NIMCALL(NIM_BOOL, Samemethodbucket_154162)(TY50547* A_154164, TY50547* B_154165) {
NIM_BOOL Result_154166;
TY50551* Aa_154167;
TY50551* Bb_154168;
NI LOC5;
NI LOC6;
NIM_BOOL LOC10;
NI I_154180;
NI HEX3Atmp_154224;
NI LOC13;
NI Res_154226;
NIM_BOOL LOC17;
NIM_BOOL LOC22;
NIM_BOOL LOC24;
NIM_BOOL LOC25;
NI LOC28;
Result_154166 = 0;
Aa_154167 = 0;
Bb_154168 = 0;
Result_154166 = NIM_FALSE;
if (!!(((*(*A_154164).Name).Sup.Id == (*(*B_154165).Name).Sup.Id))) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = Sonslen_50806((*A_154164).Typ);
LOC6 = Sonslen_50806((*B_154165).Typ);
if (!!((LOC5 == LOC6))) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sametypeornil_92052((*(*A_154164).Typ).Sons->data[0], (*(*B_154165).Typ).Sons->data[0]);
if (!!(LOC10)) goto LA11;
goto BeforeRet;
LA11: ;
I_154180 = 0;
HEX3Atmp_154224 = 0;
LOC13 = Sonslen_50806((*A_154164).Typ);
HEX3Atmp_154224 = (NI32)(LOC13 - 1);
Res_154226 = 0;
Res_154226 = 1;
while (1) {
if (!(Res_154226 <= HEX3Atmp_154224)) goto LA14;
I_154180 = Res_154226;
Aa_154167 = (*(*A_154164).Typ).Sons->data[I_154180];
Bb_154168 = (*(*B_154165).Typ).Sons->data[I_154180];
while (1) {
Aa_154167 = Skiptypes_92087(Aa_154167, IL64(2251799813685248));
Bb_154168 = Skiptypes_92087(Bb_154168, IL64(2251799813685248));
LOC17 = ((*Aa_154167).Kind == (*Bb_154168).Kind);
if (!(LOC17)) goto LA18;
LOC17 = ((*Aa_154167).Kind == ((NU8) 23) || (*Aa_154167).Kind == ((NU8) 21) || (*Aa_154167).Kind == ((NU8) 22));
LA18: ;
if (!LOC17) goto LA19;
Aa_154167 = (*Aa_154167).Sons->data[0];
Bb_154168 = (*Bb_154168).Sons->data[0];
goto LA16;
LA19: ;
goto LA15;
LA16: ;
} LA15: ;
LOC22 = Sametype_92048(Aa_154167, Bb_154168);
if (LOC22) goto LA23;
LOC25 = ((*Aa_154167).Kind == ((NU8) 17));
if (!(LOC25)) goto LA26;
LOC25 = ((*Bb_154168).Kind == ((NU8) 17));
LA26: ;
LOC24 = LOC25;
if (!(LOC24)) goto LA27;
LOC28 = Inheritancediff_92121(Bb_154168, Aa_154167);
LOC24 = (LOC28 < 0);
LA27: ;
LOC22 = LOC24;
LA23: ;
if (!LOC22) goto LA29;
goto LA21;
LA29: ;
goto BeforeRet;
LA21: ;
Res_154226 += 1;
} LA14: ;
Result_154166 = NIM_TRUE;
BeforeRet: ;
return Result_154166;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11016)(TY10202* C_11018) {
NIM_BOOL Result_11019;
Result_11019 = 0;
Result_11019 = !((((*(*C_11018).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11019;
}
static N_INLINE(void, Rtladdcycleroot_11652)(TY10202* C_11654) {
Incl_10474(&Gch_10608.Cycleroots, C_11654);
}
static N_INLINE(void, Incref_12602)(TY10202* C_12604) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3001(&(*C_12604).Refcount, 8);
LOC3 = Canbecycleroot_11016(C_12604);
if (!LOC3) goto LA4;
Rtladdcycleroot_11652(C_12604);
LA4: ;
}
static N_INLINE(void, Decref_12401)(TY10202* C_12403) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_12403).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12001(C_12403);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11016(C_12403);
if (!LOC5) goto LA6;
Rtladdcycleroot_11652(C_12403);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_12614, void* Src_12615) {
TY10202* LOC4;
TY10202* LOC8;
if (!!((Src_12615 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11012(Src_12615);
Incref_12602(LOC4);
LA2: ;
if (!!(((*Dest_12614) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11012((*Dest_12614));
Decref_12401(LOC8);
LA6: ;
(*Dest_12614) = Src_12615;
}
static N_INLINE(NI, Sonslen_50803)(TY50525* N_50805) {
NI Result_51880;
Result_51880 = 0;
if (!(*N_50805).KindU.S6.Sons == 0) goto LA2;
Result_51880 = 0;
goto LA1;
LA2: ;
Result_51880 = (*N_50805).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_51880;
}
static N_INLINE(TY50525*, Lastson_50809)(TY50525* N_50811) {
TY50525* Result_52817;
NI LOC1;
Result_52817 = 0;
LOC1 = Sonslen_50803(N_50811);
Result_52817 = (*N_50811).KindU.S6.Sons->data[(NI32)(LOC1 - 1)];
return Result_52817;
}
N_NIMCALL(void, Methoddef_154004)(TY50547* S_154006) {
NI L_154230;
NI Q_154231;
TY50547* Disp_154232;
NI I_154250;
NI HEX3Atmp_154381;
NI Res_154383;
NIM_BOOL LOC3;
TY50525* LOC6;
TY50527* LOC7;
TY154281 LOC8;
TY50525* LOC15;
L_154230 = 0;
Q_154231 = 0;
Disp_154232 = 0;
L_154230 = Gmethods_154161->Sup.len;
I_154250 = 0;
HEX3Atmp_154381 = 0;
HEX3Atmp_154381 = (NI32)(L_154230 - 1);
Res_154383 = 0;
Res_154383 = 0;
while (1) {
if (!(Res_154383 <= HEX3Atmp_154381)) goto LA1;
I_154250 = Res_154383;
LOC3 = Samemethodbucket_154162(Gmethods_154161->data[I_154250]->data[0], S_154006);
if (!LOC3) goto LA4;
Gmethods_154161->data[I_154250] = (TY50527*) incrSeq(&(Gmethods_154161->data[I_154250])->Sup, sizeof(TY50547*));
asgnRef((void**) &Gmethods_154161->data[I_154250]->data[Gmethods_154161->data[I_154250]->Sup.len-1], S_154006);
LOC6 = 0;
LOC6 = Lastson_50809((*Gmethods_154161->data[I_154250]->data[0]).Ast);
Addson_50823((*S_154006).Ast, LOC6);
goto BeforeRet;
LA4: ;
Res_154383 += 1;
} LA1: ;
LOC7 = 0;
LOC7 = (TY50527*) newSeq(NTI50527, 1);
memset((void*)&LOC8, 0, sizeof(LOC8));
LOC8[0] = S_154006;
asgnRef((void**) &LOC7->data[0], LOC8[0]);
Gmethods_154161 = (TY154160*) incrSeq(&(Gmethods_154161)->Sup, sizeof(TY50527*));
genericSeqAssign(&Gmethods_154161->data[Gmethods_154161->Sup.len-1], LOC7, NTI50527);
Disp_154232 = Copysym_50775(S_154006, NIM_FALSE);
asgnRef((void**) &(*Disp_154232).Typ, Copytype_50770((*Disp_154232).Typ, (*(*Disp_154232).Typ).Owner, NIM_FALSE));
if (!((*(*Disp_154232).Typ).Callconv == ((NU8) 5))) goto LA10;
(*(*Disp_154232).Typ).Callconv = ((NU8) 0);
LA10: ;
asgnRefNoCycle((void**) &(*Disp_154232).Ast, Copytree_50858((*S_154006).Ast));
asgnRefNoCycle((void**) &(*(*Disp_154232).Ast).KindU.S6.Sons->data[4], NIM_NIL);
if (!!(((*(*S_154006).Typ).Sons->data[0] == NIM_NIL))) goto LA13;
asgnRef((void**) &(*(*(*Disp_154232).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym, Copysym_50775((*(*(*S_154006).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym, NIM_FALSE));
LA13: ;
LOC15 = 0;
LOC15 = Newsymnode_50734(Disp_154232);
Addson_50823((*S_154006).Ast, LOC15);
BeforeRet: ;
}
N_NIMCALL(TY50525*, Genconv_154012)(TY50525* N_154014, TY50551* D_154015, NIM_BOOL Downcast_154016) {
TY50525* Result_154017;
TY50551* Dest_154018;
TY50551* Source_154019;
NI Diff_154020;
NIM_BOOL LOC2;
Result_154017 = 0;
Dest_154018 = 0;
Source_154019 = 0;
Diff_154020 = 0;
Dest_154018 = Skiptypes_92087(D_154015, IL64(47534086692012032));
Source_154019 = Skiptypes_92087((*N_154014).Typ, IL64(47534086692012032));
LOC2 = ((*Source_154019).Kind == ((NU8) 17));
if (!(LOC2)) goto LA3;
LOC2 = ((*Dest_154018).Kind == ((NU8) 17));
LA3: ;
if (!LOC2) goto LA4;
Diff_154020 = Inheritancediff_92121(Dest_154018, Source_154019);
if (!(Diff_154020 == 2147483647)) goto LA7;
Internalerror_42571((*N_154014).Info, ((NimStringDesc*) &TMP190227));
LA7: ;
if (!(Diff_154020 < 0)) goto LA10;
Result_154017 = Newnodeit_50741(((NU8) 56), (*N_154014).Info, D_154015);
Addson_50823(Result_154017, N_154014);
if (!Downcast_154016) goto LA13;
Internalerror_42571((*N_154014).Info, ((NimStringDesc*) &TMP190228));
LA13: ;
goto LA9;
LA10: ;
if (!(0 < Diff_154020)) goto LA15;
Result_154017 = Newnodeit_50741(((NU8) 55), (*N_154014).Info, D_154015);
Addson_50823(Result_154017, N_154014);
if (!!(Downcast_154016)) goto LA18;
Internalerror_42571((*N_154014).Info, ((NimStringDesc*) &TMP190229));
LA18: ;
goto LA9;
LA15: ;
Result_154017 = N_154014;
LA9: ;
goto LA1;
LA4: ;
Result_154017 = N_154014;
LA1: ;
return Result_154017;
}
N_NIMCALL(TY50525*, Methodcall_154007)(TY50525* N_154009) {
TY50525* Result_154048;
TY50547* Disp_154049;
TY50525* LOC1;
NI I_154132;
NI HEX3Atmp_154157;
NI LOC2;
NI Res_154159;
Result_154048 = 0;
Disp_154049 = 0;
Result_154048 = N_154009;
LOC1 = 0;
LOC1 = Lastson_50809((*(*(*Result_154048).KindU.S6.Sons->data[0]).KindU.S4.Sym).Ast);
Disp_154049 = (*LOC1).KindU.S4.Sym;
asgnRef((void**) &(*(*Result_154048).KindU.S6.Sons->data[0]).KindU.S4.Sym, Disp_154049);
I_154132 = 0;
HEX3Atmp_154157 = 0;
LOC2 = Sonslen_50803(Result_154048);
HEX3Atmp_154157 = (NI32)(LOC2 - 1);
Res_154159 = 0;
Res_154159 = 1;
while (1) {
if (!(Res_154159 <= HEX3Atmp_154157)) goto LA3;
I_154132 = Res_154159;
asgnRefNoCycle((void**) &(*Result_154048).KindU.S6.Sons->data[I_154132], Genconv_154012((*Result_154048).KindU.S6.Sons->data[I_154132], (*(*Disp_154049).Typ).Sons->data[I_154132], NIM_TRUE));
Res_154159 += 1;
} LA3: ;
return Result_154048;
}
N_NIMCALL(NIM_BOOL, Relevantcol_154384)(TY50527* Methods_154386, NI Col_154387) {
NIM_BOOL Result_154388;
TY50551* T_154389;
TY50551* LOC2;
NI I_154406;
NI HEX3Atmp_154407;
NI Res_154409;
NIM_BOOL LOC7;
Result_154388 = 0;
T_154389 = 0;
T_154389 = (*(*Methods_154386->data[0]).Typ).Sons->data[Col_154387];
Result_154388 = NIM_FALSE;
LOC2 = 0;
LOC2 = Skiptypes_92087(T_154389, IL64(2498090418307072));
if (!((*LOC2).Kind == ((NU8) 17))) goto LA3;
I_154406 = 0;
HEX3Atmp_154407 = 0;
HEX3Atmp_154407 = (Methods_154386->Sup.len-1);
Res_154409 = 0;
Res_154409 = 1;
while (1) {
if (!(Res_154409 <= HEX3Atmp_154407)) goto LA5;
I_154406 = Res_154409;
LOC7 = Sametype_92048((*(*Methods_154386->data[I_154406]).Typ).Sons->data[Col_154387], T_154389);
if (!!(LOC7)) goto LA8;
Result_154388 = NIM_TRUE;
goto BeforeRet;
LA8: ;
Res_154409 += 1;
} LA5: ;
LA3: ;
BeforeRet: ;
return Result_154388;
}
N_NIMCALL(NI, Cmpsignatures_154410)(TY50547* A_154412, TY50547* B_154413, TY50900 Relevantcols_154414) {
NI Result_154415;
NI D_154416;
TY50551* Aa_154417;
TY50551* Bb_154418;
NI Col_154426;
NI HEX3Atmp_154429;
NI LOC1;
NI Res_154431;
NIM_BOOL LOC4;
Result_154415 = 0;
D_154416 = 0;
Aa_154417 = 0;
Bb_154418 = 0;
Result_154415 = 0;
Col_154426 = 0;
HEX3Atmp_154429 = 0;
LOC1 = Sonslen_50806((*A_154412).Typ);
HEX3Atmp_154429 = (NI32)(LOC1 - 1);
Res_154431 = 0;
Res_154431 = 1;
while (1) {
if (!(Res_154431 <= HEX3Atmp_154429)) goto LA2;
Col_154426 = Res_154431;
LOC4 = Intsetcontains_50910(Relevantcols_154414, Col_154426);
if (!LOC4) goto LA5;
Aa_154417 = Skiptypes_92087((*(*A_154412).Typ).Sons->data[Col_154426], IL64(2498090418307072));
Bb_154418 = Skiptypes_92087((*(*B_154413).Typ).Sons->data[Col_154426], IL64(2498090418307072));
D_154416 = Inheritancediff_92121(Aa_154417, Bb_154418);
if (!!((D_154416 == 2147483647))) goto LA8;
Result_154415 = D_154416;
goto BeforeRet;
LA8: ;
LA5: ;
Res_154431 += 1;
} LA2: ;
BeforeRet: ;
return Result_154415;
}
N_NIMCALL(void, Sortbucket_154432)(TY50527** A_154435, TY50900 Relevantcols_154436) {
NI N_154437;
NI J_154438;
NI H_154439;
TY50547* V_154440;
NI I_154460;
NI HEX3Atmp_154467;
NI Res_154469;
NI LOC8;
N_154437 = 0;
J_154438 = 0;
H_154439 = 0;
V_154440 = 0;
N_154437 = (*A_154435)->Sup.len;
H_154439 = 1;
while (1) {
H_154439 = (NI32)((NI32)(3 * H_154439) + 1);
if (!(N_154437 < H_154439)) goto LA3;
goto LA1;
LA3: ;
} LA1: ;
while (1) {
H_154439 = (NI32)(H_154439 / 3);
I_154460 = 0;
HEX3Atmp_154467 = 0;
HEX3Atmp_154467 = (NI32)(N_154437 - 1);
Res_154469 = 0;
Res_154469 = H_154439;
while (1) {
if (!(Res_154469 <= HEX3Atmp_154467)) goto LA6;
I_154460 = Res_154469;
V_154440 = (*A_154435)->data[I_154460];
J_154438 = I_154460;
while (1) {
LOC8 = Cmpsignatures_154410((*A_154435)->data[(NI32)(J_154438 - H_154439)], V_154440, Relevantcols_154436);
if (!(0 <= LOC8)) goto LA7;
asgnRef((void**) &(*A_154435)->data[J_154438], (*A_154435)->data[(NI32)(J_154438 - H_154439)]);
J_154438 = (NI32)(J_154438 - H_154439);
if (!(J_154438 < H_154439)) goto LA10;
goto LA7;
LA10: ;
} LA7: ;
asgnRef((void**) &(*A_154435)->data[J_154438], V_154440);
Res_154469 += 1;
} LA6: ;
if (!(H_154439 == 1)) goto LA13;
goto LA5;
LA13: ;
} LA5: ;
}
N_NIMCALL(TY50547*, Gendispatcher_154470)(TY50527* Methods_154472, TY50900 Relevantcols_154473) {
TY50547* Result_154474;
TY50525* Disp_154475;
TY50525* Cond_154476;
TY50525* Call_154477;
TY50525* Ret_154478;
TY50525* A_154479;
TY50525* Isn_154480;
TY50547* Base_154481;
TY50547* Curr_154482;
TY50547* Ands_154483;
TY50547* Iss_154484;
NI Paramlen_154485;
TY50525* LOC1;
NI Meth_154505;
NI HEX3Atmp_154634;
NI Res_154636;
NI Col_154513;
NI HEX3Atmp_154628;
NI Res_154630;
NIM_BOOL LOC5;
TY50551* LOC8;
TY50525* LOC9;
TY50525* LOC10;
TY50525* LOC11;
TY50551* LOC15;
TY50525* LOC16;
TY50525* LOC17;
NI Col_154556;
NI HEX3Atmp_154631;
NI Res_154633;
TY50525* LOC19;
TY50525* LOC20;
TY50525* LOC24;
Result_154474 = 0;
Disp_154475 = 0;
Cond_154476 = 0;
Call_154477 = 0;
Ret_154478 = 0;
A_154479 = 0;
Isn_154480 = 0;
Base_154481 = 0;
Curr_154482 = 0;
Ands_154483 = 0;
Iss_154484 = 0;
Paramlen_154485 = 0;
LOC1 = 0;
LOC1 = Lastson_50809((*Methods_154472->data[0]).Ast);
Base_154481 = (*LOC1).KindU.S4.Sym;
Result_154474 = Base_154481;
Paramlen_154485 = Sonslen_50806((*Base_154481).Typ);
Disp_154475 = Newnodei_50737(((NU8) 82), (*Base_154481).Info);
Ands_154483 = Getsyssym_97024(((NimStringDesc*) &TMP190763));
Iss_154484 = Getsyssym_97024(((NimStringDesc*) &TMP190764));
Meth_154505 = 0;
HEX3Atmp_154634 = 0;
HEX3Atmp_154634 = (Methods_154472->Sup.len-1);
Res_154636 = 0;
Res_154636 = 0;
while (1) {
if (!(Res_154636 <= HEX3Atmp_154634)) goto LA2;
Meth_154505 = Res_154636;
Curr_154482 = Methods_154472->data[Meth_154505];
Cond_154476 = NIM_NIL;
Col_154513 = 0;
HEX3Atmp_154628 = 0;
HEX3Atmp_154628 = (NI32)(Paramlen_154485 - 1);
Res_154630 = 0;
Res_154630 = 1;
while (1) {
if (!(Res_154630 <= HEX3Atmp_154628)) goto LA3;
Col_154513 = Res_154630;
LOC5 = Intsetcontains_50910(Relevantcols_154473, Col_154513);
if (!LOC5) goto LA6;
LOC8 = 0;
LOC8 = Getsystype_97008(((NU8) 1));
Isn_154480 = Newnodeit_50741(((NU8) 21), (*Base_154481).Info, LOC8);
LOC9 = 0;
LOC9 = Newsymnode_50734(Iss_154484);
Addson_50823(Isn_154480, LOC9);
LOC10 = 0;
LOC10 = Newsymnode_50734((*(*(*(*Base_154481).Typ).N).KindU.S6.Sons->data[Col_154513]).KindU.S4.Sym);
Addson_50823(Isn_154480, LOC10);
LOC11 = 0;
LOC11 = Newnodeit_50741(((NU8) 4), (*Base_154481).Info, (*(*Curr_154482).Typ).Sons->data[Col_154513]);
Addson_50823(Isn_154480, LOC11);
if (!!((Cond_154476 == NIM_NIL))) goto LA13;
LOC15 = 0;
LOC15 = Getsystype_97008(((NU8) 1));
A_154479 = Newnodeit_50741(((NU8) 21), (*Base_154481).Info, LOC15);
LOC16 = 0;
LOC16 = Newsymnode_50734(Ands_154483);
Addson_50823(A_154479, LOC16);
Addson_50823(A_154479, Cond_154476);
Addson_50823(A_154479, Isn_154480);
Cond_154476 = A_154479;
goto LA12;
LA13: ;
Cond_154476 = Isn_154480;
LA12: ;
LA6: ;
Res_154630 += 1;
} LA3: ;
Call_154477 = Newnodei_50737(((NU8) 21), (*Base_154481).Info);
LOC17 = 0;
LOC17 = Newsymnode_50734(Curr_154482);
Addson_50823(Call_154477, LOC17);
Col_154556 = 0;
HEX3Atmp_154631 = 0;
HEX3Atmp_154631 = (NI32)(Paramlen_154485 - 1);
Res_154633 = 0;
Res_154633 = 1;
while (1) {
if (!(Res_154633 <= HEX3Atmp_154631)) goto LA18;
Col_154556 = Res_154633;
LOC19 = 0;
LOC19 = Newsymnode_50734((*(*(*(*Base_154481).Typ).N).KindU.S6.Sons->data[Col_154556]).KindU.S4.Sym);
LOC20 = 0;
LOC20 = Genconv_154012(LOC19, (*(*Curr_154482).Typ).Sons->data[Col_154556], NIM_FALSE);
Addson_50823(Call_154477, LOC20);
Res_154633 += 1;
} LA18: ;
if (!!(((*(*Base_154481).Typ).Sons->data[0] == NIM_NIL))) goto LA22;
A_154479 = Newnodei_50737(((NU8) 63), (*Base_154481).Info);
LOC24 = 0;
LOC24 = Newsymnode_50734((*(*(*Base_154481).Ast).KindU.S6.Sons->data[5]).KindU.S4.Sym);
Addson_50823(A_154479, LOC24);
Addson_50823(A_154479, Call_154477);
Ret_154478 = Newnodei_50737(((NU8) 96), (*Base_154481).Info);
Addson_50823(Ret_154478, A_154479);
goto LA21;
LA22: ;
Ret_154478 = Call_154477;
LA21: ;
A_154479 = Newnodei_50737(((NU8) 76), (*Base_154481).Info);
Addson_50823(A_154479, Cond_154476);
Addson_50823(A_154479, Ret_154478);
Addson_50823(Disp_154475, A_154479);
Res_154636 += 1;
} LA2: ;
asgnRefNoCycle((void**) &(*(*Result_154474).Ast).KindU.S6.Sons->data[4], Disp_154475);
return Result_154474;
}
N_NIMCALL(TY50525*, Generatemethoddispatchers_154010)(void) {
TY50525* Result_154639;
TY50900 Relevantcols_154640;
NI Bucket_154658;
NI HEX3Atmp_154673;
NI Res_154675;
NI Col_154667;
NI HEX3Atmp_154670;
NI LOC2;
NI Res_154672;
NIM_BOOL LOC5;
TY50547* LOC8;
TY50525* LOC9;
Result_154639 = 0;
memset((void*)&Relevantcols_154640, 0, sizeof(Relevantcols_154640));
Result_154639 = Newnode_50710(((NU8) 101));
Bucket_154658 = 0;
HEX3Atmp_154673 = 0;
HEX3Atmp_154673 = (NI32)(Gmethods_154161->Sup.len - 1);
Res_154675 = 0;
Res_154675 = 0;
while (1) {
if (!(Res_154675 <= HEX3Atmp_154673)) goto LA1;
Bucket_154658 = Res_154675;
Intsetinit_50924(&Relevantcols_154640);
Col_154667 = 0;
HEX3Atmp_154670 = 0;
LOC2 = Sonslen_50806((*Gmethods_154161->data[Bucket_154658]->data[0]).Typ);
HEX3Atmp_154670 = (NI32)(LOC2 - 1);
Res_154672 = 0;
Res_154672 = 1;
while (1) {
if (!(Res_154672 <= HEX3Atmp_154670)) goto LA3;
Col_154667 = Res_154672;
LOC5 = Relevantcol_154384(Gmethods_154161->data[Bucket_154658], Col_154667);
if (!LOC5) goto LA6;
Intsetincl_50914(&Relevantcols_154640, Col_154667);
LA6: ;
Res_154672 += 1;
} LA3: ;
Sortbucket_154432(&Gmethods_154161->data[Bucket_154658], Relevantcols_154640);
LOC8 = 0;
LOC8 = Gendispatcher_154470(Gmethods_154161->data[Bucket_154658], Relevantcols_154640);
LOC9 = 0;
LOC9 = Newsymnode_50734(LOC8);
Addson_50823(Result_154639, LOC9);
Res_154675 += 1;
} LA1: ;
return Result_154639;
}
N_NOINLINE(void, cgmethInit)(void) {
asgnRefNoCycle((void**) &Gmethods_154161, (TY154160*) newSeq(NTI154160, 0));
}

