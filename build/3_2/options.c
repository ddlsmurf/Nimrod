/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY42019 TY42019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY42013 TY42013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10402 TY10402;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY44008 TY44008;
typedef struct TY38221 TY38221;
typedef struct TY37536 TY37536;
typedef struct TY42015 TY42015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY44006 TY44006;
typedef struct TY44004 TY44004;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NimStringDesc* TY45320[1];
struct TY37536 {
NimStringDesc* Head;
NimStringDesc* Tail;
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
typedef NimStringDesc* TY47016[4];
typedef NimStringDesc* TY72026[3];
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TY44004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY44008 {
  TNimObject Sup;
NI Counter;
TY44006* Data;
NU8 Mode;
};
struct TY38221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY44006 {
  TGenericSeq Sup;
  TY44004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14004, NI Len_14005);
N_NIMCALL(TY44008*, Newstringtable_44019)(NimStringDesc** Keyvaluepairs_44022, NI Keyvaluepairs_44022Len0, NU8 Mode_44023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_37535, TY37536* Result);
N_NIMCALL(NimStringDesc*, nosgetApplicationDir)(void);
N_NIMCALL(NimStringDesc*, Rawfindfile_45263)(NimStringDesc* F_45265);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_36003);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_37403, NimStringDesc* Tail_37404);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_23448);
N_NIMCALL(NimStringDesc*, Shortendir_45199)(NimStringDesc* Dir_45201);
N_NIMCALL(NimStringDesc*, Getprefixdir_45108)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_24805, NimStringDesc* Prefix_24806);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_37451, NI Parts_37451Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37820, NimStringDesc* Ext_37821);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_45210)(NimStringDesc* Path_45212);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_4635);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_39403);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_12814, void* Src_12815);
static N_INLINE(void, Incref_12802)(TY10402* C_12804);
static N_INLINE(NIM_BOOL, Canbecycleroot_11216)(TY10402* C_11218);
static N_INLINE(void, Rtladdcycleroot_11852)(TY10402* C_11854);
N_NOINLINE(void, Incl_10674)(TY10414* S_10677, TY10402* Cell_10678);
static N_INLINE(void, Decref_12601)(TY10402* C_12603);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18603, NI Elemsize_18604, NI Newlen_18605);
N_NIMCALL(NimStringDesc*, Get_44029)(TY44008* T_44031, NimStringDesc* Key_44032);
N_NIMCALL(void, Put_44024)(TY44008* T_44026, NimStringDesc* Key_44027, NimStringDesc* Val_44028);
N_NIMCALL(NIM_BOOL, Haskey_44033)(TY44008* T_44035, NimStringDesc* Key_44036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_23582, NimStringDesc* B_23583);
N_NIMCALL(void, Writeln_45258)(FILE* F_45261, NimStringDesc* X_45262);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
NIM_CONST NU32 Checksoptions_45073 = 1022;
STRING_LITERAL(TMP45088, "", 0);
STRING_LITERAL(TMP193640, "nimcache", 8);
STRING_LITERAL(TMP193652, "cannot create directory: ", 25);
STRING_LITERAL(TMP195502, "\012", 1);
NU32 Goptions_45076;
NU32 Gglobaloptions_45078;
NI8 Gexitcode_45079;
TY42019 Searchpaths_45080;
extern TNimType* NTI42019; /* TLinkedList */
NimStringDesc* Outfile_45081;
extern TY10790 Gch_10808;
NimStringDesc* Gindexfile_45082;
NU8 Gcmd_45083;
NI Gverbosity_45084;
NI Gnumberofprocessors_45085;
TY44008* Gconfigvars_45110;
NimStringDesc* Libpath_45111;
NimStringDesc* Projectpath_45112;
NIM_BOOL Gkeepcomments_45113;
TY38221* Gimplicitmods_45130;
extern TNimType* NTI38221; /* seq[string] */
extern NIM_THREADVAR TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern NIM_THREADVAR E_Base* Currexception_4632;
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214) {
TY10402* Result_11215;
Result_11215 = 0;
Result_11215 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_11214))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
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
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12201(C_12822);
LA10: ;
LA6: ;
(*Dest_12818) = Src_12819;
}
N_NIMCALL(NimStringDesc*, Getprefixdir_45108)(void) {
NimStringDesc* Result_45198;
NimStringDesc* LOC1;
TY37536 LOC2;
Result_45198 = 0;
LOC1 = 0;
LOC1 = nosgetApplicationDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_45198 = copyString(LOC2.Head);
return Result_45198;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_45263)(NimStringDesc* F_45265) {
NimStringDesc* Result_45266;
NIM_BOOL LOC2;
TY42015* It_45267;
NIM_BOOL LOC7;
Result_45266 = 0;
LOC2 = nosexistsFile(F_45265);
if (!LOC2) goto LA3;
Result_45266 = copyString(F_45265);
goto LA1;
LA3: ;
It_45267 = 0;
It_45267 = ((TY42015*) (Searchpaths_45080.Head));
while (1) {
if (!!((It_45267 == NIM_NIL))) goto LA5;
Result_45266 = nosJoinPath((*It_45267).Data, F_45265);
LOC7 = nosexistsFile(Result_45266);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_45267 = ((TY42015*) ((*It_45267).Sup.Next));
} LA5: ;
Result_45266 = copyString(((NimStringDesc*) &TMP45088));
LA1: ;
BeforeRet: ;
return Result_45266;
}
N_NIMCALL(NimStringDesc*, Findfile_45089)(NimStringDesc* F_45091) {
NimStringDesc* Result_45282;
NimStringDesc* LOC4;
Result_45282 = 0;
Result_45282 = Rawfindfile_45263(F_45091);
if (!(Result_45282->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_45091);
Result_45282 = Rawfindfile_45263(LOC4);
LA2: ;
return Result_45282;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI64)((NI64)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410) {
(*Dest_18409).data[((*Dest_18409).Sup.len)-0] = C_18410;
(*Dest_18409).data[((NI64)((*Dest_18409).Sup.len + 1))-0] = 0;
(*Dest_18409).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_45199)(NimStringDesc* Dir_45201) {
NimStringDesc* Result_45202;
NimStringDesc* Prefix_45203;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_45202 = 0;
Prefix_45203 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_45108();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
Prefix_45203 = LOC1;
LOC4 = nsuStartsWith(Dir_45201, Prefix_45203);
if (!LOC4) goto LA5;
Result_45202 = copyStr(Dir_45201, Prefix_45203->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 47);
Prefix_45203 = LOC7;
LOC10 = nsuStartsWith(Dir_45201, Prefix_45203);
if (!LOC10) goto LA11;
Result_45202 = copyStr(Dir_45201, Prefix_45203->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_45112->Sup.len + 1);
appendString(LOC13, Projectpath_45112);
appendChar(LOC13, 47);
Prefix_45203 = LOC13;
LOC15 = nsuStartsWith(Dir_45201, Prefix_45203);
if (!LOC15) goto LA16;
Result_45202 = copyStr(Dir_45201, Prefix_45203->Sup.len);
goto BeforeRet;
LA16: ;
Result_45202 = copyString(Dir_45201);
BeforeRet: ;
return Result_45202;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_45104)(NimStringDesc* Path_45106, NimStringDesc* Ext_45107) {
NimStringDesc* Result_45228;
TY37536 LOC1;
NimStringDesc* Head_45229;
NimStringDesc* Tail_45230;
NimStringDesc* LOC5;
TY47016 LOC6;
Result_45228 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_45106, &LOC1);
Head_45229 = 0;
Head_45229 = copyString(LOC1.Head);
Tail_45230 = 0;
Tail_45230 = copyString(LOC1.Tail);
if (!(0 < Head_45229->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_45229->Sup.len + 1);
appendString(LOC5, Head_45229);
appendChar(LOC5, 47);
Head_45229 = Shortendir_45199(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_45112);
LOC6[1] = copyString(((NimStringDesc*) &TMP193640));
LOC6[2] = copyString(Head_45229);
LOC6[3] = nosChangeFileExt(Tail_45230, Ext_45107);
Result_45228 = nosJoinPathOpenArray(LOC6, 4);
return Result_45228;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_45210)(NimStringDesc* Path_45212) {
NimStringDesc* Result_45213;
NIM_BOOL LOC2;
Result_45213 = 0;
LOC2 = (0 < Path_45212->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_45212->data[(NI64)(Path_45212->Sup.len - 1)]) == (NU8)(47));
LA3: ;
if (!LOC2) goto LA4;
Result_45213 = copyStrLast(Path_45212, 0, (NI64)(Path_45212->Sup.len - 2));
goto LA1;
LA4: ;
Result_45213 = copyString(Path_45212);
LA1: ;
return Result_45213;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_4635) {
(*S_4635).prev = excHandler;
excHandler = S_4635;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20004;
Result_20004 = 0;
Result_20004 = Currexception_4632;
return Result_20004;
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
static N_INLINE(void, Decref_12601)(TY10402* C_12603) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3006(&(*C_12603).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
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
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_4632, (*Currexception_4632).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_45100)(NimStringDesc* F_45102, NIM_BOOL Createsubdir_45103) {
NimStringDesc* Result_45243;
TY37536 LOC1;
NimStringDesc* Head_45244;
NimStringDesc* Tail_45245;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_45254;
TY72026 LOC7;
TSafePoint TMP193651;
NimStringDesc* LOC11;
Result_45243 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_45102, &LOC1);
Head_45244 = 0;
Head_45244 = copyString(LOC1.Head);
Tail_45245 = 0;
Tail_45245 = copyString(LOC1.Tail);
if (!(0 < Head_45244->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_45244->Sup.len + 1);
appendString(LOC5, Head_45244);
appendChar(LOC5, 47);
LOC6 = 0;
LOC6 = Shortendir_45199(LOC5);
Head_45244 = Removetrailingdirsep_45210(LOC6);
LA3: ;
Subdir_45254 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_45112);
LOC7[1] = copyString(((NimStringDesc*) &TMP193640));
LOC7[2] = copyString(Head_45244);
Subdir_45254 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_45103) goto LA9;
pushSafePoint(&TMP193651);
TMP193651.status = setjmp(TMP193651.context);
if (TMP193651.status == 0) {
noscreateDir(Subdir_45254);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_45254->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP193652));
appendString(LOC11, Subdir_45254);
Writeln_45258(stdout, LOC11);
exit(1);
TMP193651.status = 0;popCurrentException();}
}
if (TMP193651.status != 0) reraiseException();
LA9: ;
Result_45243 = nosJoinPath(Subdir_45254, Tail_45245);
return Result_45243;
}
N_NIMCALL(void, Addimplicitmod_45141)(NimStringDesc* Filename_45143) {
NI Length_45173;
Length_45173 = 0;
Length_45173 = Gimplicitmods_45130->Sup.len;
Gimplicitmods_45130 = (TY38221*) setLengthSeq(&(Gimplicitmods_45130)->Sup, sizeof(NimStringDesc*), (NI64)(Length_45173 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_45130->data[Length_45173], copyString(Filename_45143));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_45134)(NimStringDesc* Key_45136) {
NimStringDesc* Result_45160;
Result_45160 = 0;
Result_45160 = Get_44029(Gconfigvars_45110, Key_45136);
return Result_45160;
}
N_NIMCALL(void, Setconfigvar_45137)(NimStringDesc* Key_45139, NimStringDesc* Val_45140) {
Put_44024(Gconfigvars_45110, Key_45139, Val_45140);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_45131)(NimStringDesc* Key_45133) {
NIM_BOOL Result_45156;
Result_45156 = 0;
Result_45156 = Haskey_44033(Gconfigvars_45110, Key_45133);
return Result_45156;
}
N_NIMCALL(NimStringDesc*, Getoutfile_45144)(NimStringDesc* Filename_45146, NimStringDesc* Ext_45147) {
NimStringDesc* Result_45169;
Result_45169 = 0;
if (!!(((Outfile_45081) && (Outfile_45081)->Sup.len == 0))) goto LA2;
Result_45169 = copyString(Outfile_45081);
goto LA1;
LA2: ;
Result_45169 = nosChangeFileExt(Filename_45146, Ext_45147);
LA1: ;
return Result_45169;
}
N_NIMCALL(NI, Binarystrsearch_45148)(NimStringDesc** X_45151, NI X_45151Len0, NimStringDesc* Y_45152) {
NI Result_45292;
NI A_45293;
NI B_45304;
NI Mid_45307;
NI C_45308;
Result_45292 = 0;
A_45293 = 0;
A_45293 = 0;
B_45304 = 0;
B_45304 = (NI64)(X_45151Len0 - 1);
while (1) {
if (!(A_45293 <= B_45304)) goto LA1;
Mid_45307 = 0;
Mid_45307 = (NI64)((NI64)(A_45293 + B_45304) / 2);
C_45308 = 0;
C_45308 = nsuCmpIgnoreCase(X_45151[Mid_45307], Y_45152);
if (!(C_45308 < 0)) goto LA3;
A_45293 = (NI64)(Mid_45307 + 1);
goto LA2;
LA3: ;
if (!(0 < C_45308)) goto LA5;
B_45304 = (NI64)(Mid_45307 - 1);
goto LA2;
LA5: ;
Result_45292 = Mid_45307;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_45292 = -1;
BeforeRet: ;
return Result_45292;
}
N_NIMCALL(void, Writeln_45258)(FILE* F_45261, NimStringDesc* X_45262) {
Write_3658(F_45261, X_45262);
Write_3658(F_45261, ((NimStringDesc*) &TMP195502));
}
N_NOINLINE(void, optionsInit)(void) {
TY45320 LOC1;
Goptions_45076 = 105022;
Gglobaloptions_45078 = 8;
Searchpaths_45080.m_type = NTI42019;
asgnRefNoCycle((void**) &Outfile_45081, copyString(((NimStringDesc*) &TMP45088)));
asgnRefNoCycle((void**) &Gindexfile_45082, copyString(((NimStringDesc*) &TMP45088)));
Gcmd_45083 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_45111, copyString(((NimStringDesc*) &TMP45088)));
asgnRefNoCycle((void**) &Projectpath_45112, copyString(((NimStringDesc*) &TMP45088)));
Gkeepcomments_45113 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_45130, (TY38221*) newSeq(NTI38221, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_45110, Newstringtable_44019(LOC1, 0, ((NU8) 2)));
}

