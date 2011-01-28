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
typedef struct TY54527 TY54527;
typedef struct TY54547 TY54547;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY106012 TY106012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY104002 TY104002;
typedef struct TY106006 TY106006;
typedef struct TY54525 TY54525;
typedef struct TY59104 TY59104;
typedef struct TY59106 TY59106;
typedef struct TY54529 TY54529;
typedef struct TY54900 TY54900;
typedef struct TY54896 TY54896;
typedef struct TY54898 TY54898;
typedef struct TY42019 TY42019;
typedef struct TY42013 TY42013;
typedef struct TY106002 TY106002;
typedef struct TY54543 TY54543;
typedef struct TY54551 TY54551;
typedef struct TY46536 TY46536;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY51008 TY51008;
typedef struct TY54539 TY54539;
typedef struct TY54549 TY54549;
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
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY104002 {
  TNimObject Sup;
};
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TY59104 {
NI Tos;
TY59106* Stack;
};
struct TY54900 {
NI Counter;
NI Max;
TY54896* Head;
TY54898* Data;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY54525*, TY106032) (TY106012* C_106033, TY54525* N_106034);
typedef N_NIMCALL_PTR(TY54525*, TY106037) (TY106012* C_106038, TY54525* N_106039);
struct TY106012 {
  TY104002 Sup;
TY54547* Module;
TY106006* P;
NI Instcounter;
TY54525* Generics;
NI Lastgenericidx;
TY59104 Tab;
TY54900 Ambiguoussymbols;
TY54527* Converters;
TY42019 Optionstack;
TY42019 Libs;
NIM_BOOL Fromcache;
TY106032 Semconstexpr;
TY106037 Semexpr;
TY54900 Includedfiles;
NimStringDesc* Filename;
TY54529 Userpragmas;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY106002 {
  TY42013 Sup;
NU32 Options;
NU8 Defaultcc;
TY54543* Dynlib;
NU32 Notes;
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
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
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
struct TY106006 {
TY54547* Owner;
TY54547* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
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
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY54896 {
TY54896* Next;
NI Key;
TY8414 Bits;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY54561 {
  TGenericSeq Sup;
  TY54559 data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY59106 {
  TGenericSeq Sup;
  TY54529 data[SEQ_DECL_SIZE];
};
struct TY54898 {
  TGenericSeq Sup;
  TY54896* data[SEQ_DECL_SIZE];
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
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
N_NIMCALL(void, Initidtable_54754)(TY54563* X_54757);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
N_NIMCALL(void, objectInit)(void* Dest_19262, TNimType* Typ_19263);
N_NIMCALL(void, Initsymtab_59108)(TY59104* Tab_59111);
N_NIMCALL(void, Intsetinit_54924)(TY54900* S_54927);
N_NIMCALL(void, Initlinkedlist_42031)(TY42019* List_42034);
N_NIMCALL(void, Append_42035)(TY42019* List_42038, TY42013* Entry_42039);
N_NIMCALL(TY106002*, Newoptionentry_106056)(void);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
N_NIMCALL(TY54525*, Newnode_54710)(NU8 Kind_54712);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(void, Initstrtable_54746)(TY54529* X_54749);
N_NIMCALL(TY54551*, Newtype_54706)(NU8 Kind_54708, TY54547* Owner_54709);
N_NIMCALL(TY54547*, Getcurrowner_106107)(void);
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805);
N_NIMCALL(void, Illformedast_106092)(TY54525* N_106094);
N_NIMCALL(void, Limessage_46566)(TY46536 Info_46568, NU8 Msg_46569, NimStringDesc* Arg_46570);
N_NIMCALL(NimStringDesc*, Rendertree_84042)(TY54525* N_84044, NU8 Renderflags_84047);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18435, NI Elemsize_18436);
N_NIMCALL(void, Internalerror_46575)(NimStringDesc* Errmsg_46577);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18603, NI Elemsize_18604, NI Newlen_18605);
N_NIMCALL(TY54525*, Newnodei_54737)(NU8 Kind_54739, TY46536 Info_54740);
N_NIMCALL(void, Addson_54823)(TY54525* Father_54825, TY54525* Son_54826);
N_NIMCALL(TY54525*, Newintnode_54713)(NU8 Kind_54715, NI64 Intval_54716);
N_NIMCALL(TY54551*, Newtypes_106077)(NU8 Kind_106079, TY106012* C_106080);
N_NIMCALL(void, Addson_54827)(TY54551* Father_54829, TY54551* Son_54830);
N_NIMCALL(TY54551*, Getsystype_101008)(NU8 Kind_101010);
STRING_LITERAL(TMP194098, "", 0);
STRING_LITERAL(TMP194116, "owner is nil", 12);
STRING_LITERAL(TMP194118, "popOwner", 8);
STRING_LITERAL(TMP194126, "makeVarType", 11);
STRING_LITERAL(TMP194205, "makePtrType", 11);
TY54563 Ginsttypes_106045;
TY54527* Gowners_106131;
extern TNimType* NTI54527; /* TSymSeq */
extern TY10790 Gch_10808;
extern TNimType* NTI106010; /* PContext */
extern TNimType* NTI106012; /* TContext */
extern TNimType* NTI106004; /* POptionEntry */
extern TNimType* NTI106002; /* TOptionEntry */
extern NU32 Goptions_45076;
extern NU32 Gnotes_46543;
extern TNimType* NTI54545; /* PLib */
extern TNimType* NTI54543; /* TLib */
extern TNimType* NTI106008; /* PProcCon */
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
Result_11215 = ((TY10402*) ((NI32)((NU32)(((NI) (Usr_11214))) - (NU32)(((NI) (((NI)sizeof(TY10402))))))));
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
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
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
N_NIMCALL(TY106002*, Newoptionentry_106056)(void) {
TY106002* Result_106219;
Result_106219 = 0;
Result_106219 = (TY106002*) newObj(NTI106004, sizeof(TY106002));
(*Result_106219).Sup.Sup.m_type = NTI106002;
(*Result_106219).Options = Goptions_45076;
(*Result_106219).Defaultcc = ((NU8) 0);
asgnRefNoCycle((void**) &(*Result_106219).Dynlib, NIM_NIL);
(*Result_106219).Notes = Gnotes_46543;
return Result_106219;
}
N_NIMCALL(TY106012*, Newcontext_106046)(TY54547* Module_106048, NimStringDesc* Nimfile_106049) {
TY106012* Result_106239;
TY106002* LOC1;
Result_106239 = 0;
Result_106239 = (TY106012*) newObj(NTI106010, sizeof(TY106012));
objectInit(Result_106239, NTI106012);
Initsymtab_59108(&(*Result_106239).Tab);
Intsetinit_54924(&(*Result_106239).Ambiguoussymbols);
Initlinkedlist_42031(&(*Result_106239).Optionstack);
Initlinkedlist_42031(&(*Result_106239).Libs);
LOC1 = 0;
LOC1 = Newoptionentry_106056();
Append_42035(&(*Result_106239).Optionstack, &LOC1->Sup);
asgnRef((void**) &(*Result_106239).Module, Module_106048);
asgnRefNoCycle((void**) &(*Result_106239).Generics, Newnode_54710(((NU8) 101)));
asgnRef((void**) &(*Result_106239).Converters, (TY54527*) newSeq(NTI54527, 0));
asgnRefNoCycle((void**) &(*Result_106239).Filename, copyString(Nimfile_106049));
Intsetinit_54924(&(*Result_106239).Includedfiles);
Initstrtable_54746(&(*Result_106239).Userpragmas);
return Result_106239;
}
N_NIMCALL(TY54547*, Getcurrowner_106107)(void) {
TY54547* Result_106134;
Result_106134 = 0;
Result_106134 = Gowners_106131->data[(Gowners_106131->Sup.len-1)];
return Result_106134;
}
N_NIMCALL(TY54551*, Newtypes_106077)(NU8 Kind_106079, TY106012* C_106080) {
TY54551* Result_106403;
TY54547* LOC1;
Result_106403 = 0;
LOC1 = 0;
LOC1 = Getcurrowner_106107();
Result_106403 = Newtype_54706(Kind_106079, LOC1);
return Result_106403;
}
static N_INLINE(NI, Sonslen_54803)(TY54525* N_54805) {
NI Result_55880;
Result_55880 = 0;
if (!(*N_54805).KindU.S6.Sons == 0) goto LA2;
Result_55880 = 0;
goto LA1;
LA2: ;
Result_55880 = (*N_54805).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_55880;
}
N_NIMCALL(void, Illformedast_106092)(TY54525* N_106094) {
NimStringDesc* LOC1;
LOC1 = 0;
LOC1 = Rendertree_84042(N_106094, 4);
Limessage_46566((*N_106094).Info, ((NU8) 1), LOC1);
}
N_NIMCALL(void, Checksonslen_106099)(TY54525* N_106101, NI Length_106102) {
NIM_BOOL LOC2;
NI LOC4;
LOC2 = (N_106101 == NIM_NIL);
if (LOC2) goto LA3;
LOC4 = Sonslen_54803(N_106101);
LOC2 = !((LOC4 == Length_106102));
LA3: ;
if (!LOC2) goto LA5;
Illformedast_106092(N_106101);
LA5: ;
}
N_NIMCALL(void, Checkminsonslen_106103)(TY54525* N_106105, NI Length_106106) {
NIM_BOOL LOC2;
NI LOC4;
LOC2 = (N_106105 == NIM_NIL);
if (LOC2) goto LA3;
LOC4 = Sonslen_54803(N_106105);
LOC2 = (LOC4 < Length_106106);
LA3: ;
if (!LOC2) goto LA5;
Illformedast_106092(N_106105);
LA5: ;
}
N_NIMCALL(void, Pushowner_106109)(TY54547* Owner_106111) {
Gowners_106131 = (TY54527*) incrSeq(&(Gowners_106131)->Sup, sizeof(TY54547*));
asgnRef((void**) &Gowners_106131->data[Gowners_106131->Sup.len-1], Owner_106111);
}
N_NIMCALL(TY106002*, Lastoptionentry_106053)(TY106012* C_106055) {
TY106002* Result_106186;
Result_106186 = 0;
Result_106186 = ((TY106002*) ((*C_106055).Optionstack.Tail));
return Result_106186;
}
N_NIMCALL(TY54543*, Newlib_106062)(NU8 Kind_106064) {
TY54543* Result_106336;
Result_106336 = 0;
Result_106336 = (TY54543*) newObj(NTI54545, sizeof(TY54543));
(*Result_106336).Sup.Sup.m_type = NTI54543;
(*Result_106336).Kind = Kind_106064;
return Result_106336;
}
N_NIMCALL(void, Addtolib_106065)(TY54543* Lib_106067, TY54547* Sym_106068) {
if (!!(((*Sym_106068).Annex == NIM_NIL))) goto LA2;
Limessage_46566((*Sym_106068).Info, ((NU8) 26), ((NimStringDesc*) &TMP194098));
LA2: ;
asgnRefNoCycle((void**) &(*Sym_106068).Annex, Lib_106067);
}
N_NIMCALL(TY106006*, Newproccon_106050)(TY54547* Owner_106052) {
TY106006* Result_106190;
Result_106190 = 0;
if (!(Owner_106052 == NIM_NIL)) goto LA2;
Internalerror_46575(((NimStringDesc*) &TMP194116));
LA2: ;
Result_106190 = (TY106006*) newObj(NTI106008, sizeof(TY106006));
asgnRef((void**) &(*Result_106190).Owner, Owner_106052);
return Result_106190;
}
N_NIMCALL(void, Popowner_106112)(void) {
NI Length_106168;
Length_106168 = 0;
Length_106168 = Gowners_106131->Sup.len;
if (!(Length_106168 <= 0)) goto LA2;
Internalerror_46575(((NimStringDesc*) &TMP194118));
LA2: ;
Gowners_106131 = (TY54527*) setLengthSeq(&(Gowners_106131)->Sup, sizeof(TY54547*), (NI32)(Length_106168 - 1));
}
N_NIMCALL(TY54551*, Makerangetype_106086)(TY106012* C_106088, NI64 First_106089, NI64 Last_106090, TY46536 Info_106091) {
TY54551* Result_106415;
TY54525* N_106416;
TY54525* LOC1;
TY54525* LOC2;
TY54551* LOC3;
Result_106415 = 0;
N_106416 = 0;
N_106416 = Newnodei_54737(((NU8) 35), Info_106091);
LOC1 = 0;
LOC1 = Newintnode_54713(((NU8) 6), First_106089);
Addson_54823(N_106416, LOC1);
LOC2 = 0;
LOC2 = Newintnode_54713(((NU8) 6), Last_106090);
Addson_54823(N_106416, LOC2);
Result_106415 = Newtypes_106077(((NU8) 20), C_106088);
asgnRefNoCycle((void**) &(*Result_106415).N, N_106416);
LOC3 = 0;
LOC3 = Getsystype_101008(((NU8) 31));
Addson_54827(Result_106415, LOC3);
return Result_106415;
}
N_NIMCALL(TY54551*, Makevartype_106073)(TY106012* C_106075, TY54551* Basetype_106076) {
TY54551* Result_106387;
Result_106387 = 0;
if (!(Basetype_106076 == NIM_NIL)) goto LA2;
Internalerror_46575(((NimStringDesc*) &TMP194126));
LA2: ;
Result_106387 = Newtypes_106077(((NU8) 23), C_106075);
Addson_54827(Result_106387, Basetype_106076);
return Result_106387;
}
N_NIMCALL(void, Addconverter_106058)(TY106012* C_106060, TY54547* Conv_106061) {
NI L_106292;
NI I_106315;
NI HEX3Atmp_106330;
NI Res_106332;
L_106292 = 0;
L_106292 = (*C_106060).Converters->Sup.len;
I_106315 = 0;
HEX3Atmp_106330 = 0;
HEX3Atmp_106330 = (NI32)(L_106292 - 1);
Res_106332 = 0;
Res_106332 = 0;
while (1) {
if (!(Res_106332 <= HEX3Atmp_106330)) goto LA1;
I_106315 = Res_106332;
if (!((*(*C_106060).Converters->data[I_106315]).Sup.Id == (*Conv_106061).Sup.Id)) goto LA3;
goto BeforeRet;
LA3: ;
Res_106332 += 1;
} LA1: ;
(*C_106060).Converters = (TY54527*) setLengthSeq(&((*C_106060).Converters)->Sup, sizeof(TY54547*), (NI32)(L_106292 + 1));
asgnRef((void**) &(*C_106060).Converters->data[L_106292], Conv_106061);
BeforeRet: ;
}
N_NIMCALL(TY54551*, Makeptrtype_106069)(TY106012* C_106071, TY54551* Basetype_106072) {
TY54551* Result_106371;
Result_106371 = 0;
if (!(Basetype_106072 == NIM_NIL)) goto LA2;
Internalerror_46575(((NimStringDesc*) &TMP194205));
LA2: ;
Result_106371 = Newtypes_106077(((NU8) 21), C_106071);
Addson_54827(Result_106371, Basetype_106072);
return Result_106371;
}
N_NOINLINE(void, semdataInit)(void) {
asgnRef((void**) &Gowners_106131, (TY54527*) newSeq(NTI54527, 0));
Initidtable_54754(&Ginsttypes_106045);
}

