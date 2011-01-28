/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY42019 TY42019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY42013 TY42013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY42015 TY42015;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY10414 TY10414;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY42019 {
TNimType* m_type;
TY42013* Head;
TY42013* Tail;
NI Counter;
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
struct TNimObject {
TNimType* m_type;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY42015 {
  TY42013 Sup;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18247, NimStringDesc* B_18248);
N_NIMCALL(void, Prepend_42040)(TY42019* List_42043, TY42013* Entry_42044);
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
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
N_NIMCALL(TY42015*, Newstrentry_42130)(NimStringDesc* Data_42132);
N_NIMCALL(void*, newObj)(TNimType* Typ_13507, NI Size_13508);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(void, Append_42035)(TY42019* List_42038, TY42013* Entry_42039);
N_NIMCALL(NIM_BOOL, Contains_42159)(TY42019* List_42161, NimStringDesc* Data_42162);
N_NIMCALL(void, Appendstr_42061)(TY42019* List_42064, NimStringDesc* Data_42065);
extern TY10790 Gch_10808;
extern TNimType* NTI42017; /* PStrEntry */
extern TNimType* NTI42015; /* TStrEntry */
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18247, NimStringDesc* B_18248) {
NIM_BOOL Result_18249;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
Result_18249 = 0;
if (!(A_18247 == B_18248)) goto LA2;
Result_18249 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18247 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18248 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18249 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18247).Sup.len == (*B_18248).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18247).data)), ((NCSTRING) ((*B_18248).data)), ((int) ((NI32)((*A_18247).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18249 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18249;
}
N_NIMCALL(NIM_BOOL, Contains_42159)(TY42019* List_42161, NimStringDesc* Data_42162) {
NIM_BOOL Result_42163;
TY42013* It_42164;
Result_42163 = 0;
It_42164 = 0;
It_42164 = (*List_42161).Head;
while (1) {
if (!!((It_42164 == NIM_NIL))) goto LA1;
if (!eqStrings((*((TY42015*) (It_42164))).Data, Data_42162)) goto LA3;
Result_42163 = NIM_TRUE;
goto BeforeRet;
LA3: ;
It_42164 = (*It_42164).Next;
} LA1: ;
BeforeRet: ;
return Result_42163;
}
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
N_NIMCALL(void, Prepend_42040)(TY42019* List_42043, TY42013* Entry_42044) {
(*List_42043).Counter += 1;
asgnRef((void**) &(*Entry_42044).Prev, NIM_NIL);
asgnRef((void**) &(*Entry_42044).Next, (*List_42043).Head);
if (!!(((*List_42043).Head == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_42043).Head).Prev, Entry_42044);
LA2: ;
unsureAsgnRef((void**) &(*List_42043).Head, Entry_42044);
if (!((*List_42043).Tail == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_42043).Tail, Entry_42044);
LA5: ;
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
N_NIMCALL(TY42015*, Newstrentry_42130)(NimStringDesc* Data_42132) {
TY42015* Result_42133;
Result_42133 = 0;
Result_42133 = (TY42015*) newObj(NTI42017, sizeof(TY42015));
(*Result_42133).Sup.Sup.m_type = NTI42015;
asgnRefNoCycle((void**) &(*Result_42133).Data, copyString(Data_42132));
return Result_42133;
}
N_NIMCALL(void, Prependstr_42071)(TY42019* List_42074, NimStringDesc* Data_42075) {
TY42015* LOC1;
LOC1 = 0;
LOC1 = Newstrentry_42130(Data_42075);
Prepend_42040(List_42074, &LOC1->Sup);
}
N_NIMCALL(void, Append_42035)(TY42019* List_42038, TY42013* Entry_42039) {
(*List_42038).Counter += 1;
asgnRef((void**) &(*Entry_42039).Next, NIM_NIL);
asgnRef((void**) &(*Entry_42039).Prev, (*List_42038).Tail);
if (!!(((*List_42038).Tail == NIM_NIL))) goto LA2;
asgnRef((void**) &(*(*List_42038).Tail).Next, Entry_42039);
LA2: ;
unsureAsgnRef((void**) &(*List_42038).Tail, Entry_42039);
if (!((*List_42038).Head == NIM_NIL)) goto LA5;
unsureAsgnRef((void**) &(*List_42038).Head, Entry_42039);
LA5: ;
}
N_NIMCALL(void, Appendstr_42061)(TY42019* List_42064, NimStringDesc* Data_42065) {
TY42015* LOC1;
LOC1 = 0;
LOC1 = Newstrentry_42130(Data_42065);
Append_42035(List_42064, &LOC1->Sup);
}
N_NIMCALL(void, Initlinkedlist_42031)(TY42019* List_42034) {
(*List_42034).Counter = 0;
unsureAsgnRef((void**) &(*List_42034).Head, NIM_NIL);
unsureAsgnRef((void**) &(*List_42034).Tail, NIM_NIL);
}
N_NIMCALL(void, Remove_42045)(TY42019* List_42048, TY42013* Entry_42049) {
(*List_42048).Counter -= 1;
if (!(Entry_42049 == (*List_42048).Tail)) goto LA2;
unsureAsgnRef((void**) &(*List_42048).Tail, (*Entry_42049).Prev);
LA2: ;
if (!(Entry_42049 == (*List_42048).Head)) goto LA5;
unsureAsgnRef((void**) &(*List_42048).Head, (*Entry_42049).Next);
LA5: ;
if (!!(((*Entry_42049).Next == NIM_NIL))) goto LA8;
asgnRef((void**) &(*(*Entry_42049).Next).Prev, (*Entry_42049).Prev);
LA8: ;
if (!!(((*Entry_42049).Prev == NIM_NIL))) goto LA11;
asgnRef((void**) &(*(*Entry_42049).Prev).Next, (*Entry_42049).Next);
LA11: ;
}
N_NIMCALL(NIM_BOOL, Includestr_42066)(TY42019* List_42069, NimStringDesc* Data_42070) {
NIM_BOOL Result_42181;
NIM_BOOL LOC2;
Result_42181 = 0;
LOC2 = Contains_42159(&(*List_42069), Data_42070);
if (!LOC2) goto LA3;
Result_42181 = NIM_TRUE;
goto BeforeRet;
LA3: ;
Appendstr_42061(List_42069, Data_42070);
BeforeRet: ;
return Result_42181;
}
N_NOINLINE(void, listsInit)(void) {
}

