/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <errno.h>
#include <sys/param.h>
#include <mach-o/dyld.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
typedef struct TY39221 TY39221;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY444 TY444;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY38537 TY38537;
typedef struct TY38661 TY38661;
typedef struct TY422 TY422;
typedef struct TY418 TY418;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11194 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11196 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
TY11194 Stat;
};
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TY416 {
  E_Base Sup;
};
struct TY444 {
  TY416 Sup;
};
struct TY38537 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TY38661 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
struct TY418 {
  TY416 Sup;
};
struct TY422 {
  TY418 Sup;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18708);
N_NIMCALL(void*, newObj)(TNimType* Typ_13910, NI Size_13911);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void, raiseException)(E_Base* E_5604, NCSTRING Ename_5605);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13226, void* Src_13227);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38660, TY38661* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1355);
N_NIMCALL(NimStringDesc*, Getenv_39418)(NimStringDesc* Key_39420);
N_NIMCALL(NI, Findenvvar_39401)(NimStringDesc* Key_39403);
N_NIMCALL(void, Getenvvarsc_39241)(void);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18842, NI Elemsize_18843);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25848, NimStringDesc* Prefix_25849);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_26216, NIM_CHAR Sub_26217, NI Start_26218);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404);
N_NIMCALL(NI, Searchextpos_38627)(NimStringDesc* S_38629);
N_NIMCALL(NimStringDesc*, Normext_38621)(NimStringDesc* Ext_38623);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18832, NI Newlen_18833);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_36604);
N_NIMCALL(void, Rawcreatedir_40216)(NimStringDesc* Dir_40218);
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_38845, NimStringDesc* Pathb_38846);
N_NIMCALL(NI, Cmp_1327)(NimStringDesc* X_1329, NimStringDesc* Y_1330);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38536, TY38537* Result);
N_NIMCALL(NI64, ntDiffTime)(NI A_28635, NI B_28636);
N_NIMCALL(NI, nosgetLastModificationTime)(NimStringDesc* File_37403);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
STRING_LITERAL(TMP195632, "invalid index", 13);
STRING_LITERAL(TMP195636, "", 0);
STRING_LITERAL(TMP195639, "HOME", 4);
STRING_LITERAL(TMP195640, "/", 1);
STRING_LITERAL(TMP195644, "unknown OS error", 16);
STRING_LITERAL(TMP195720, "/.config/", 9);
NIM_BOOL Envcomputed_39220;
TY39221* Environment_39238;
extern TNimType* NTI39221; /* seq[string] */
extern TY11196 Gch_11214;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType* NTI41413; /* ref EInvalidIndex */
extern TNimType* NTI444; /* EInvalidIndex */
extern TNimType* NTI36803; /* ref EOS */
extern TNimType* NTI422; /* EOS */
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11214.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3221(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3226(&(*C_13222).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(NI, Paramcount_41430)(void) {
NI Result_41432;
Result_41432 = 0;
Result_41432 = (NI32)(((NI) (cmdCount)) - 1);
goto BeforeRet;
BeforeRet: ;
return Result_41432;
}
N_NIMCALL(NimStringDesc*, Paramstr_41403)(NI I_41405) {
NimStringDesc* Result_41406;
NIM_BOOL LOC2;
TY444* E_41414;
Result_41406 = 0;
LOC2 = (I_41405 < ((NI) (cmdCount)));
if (!(LOC2)) goto LA3;
LOC2 = (0 <= I_41405);
LA3: ;
if (!LOC2) goto LA4;
Result_41406 = cstrToNimstr(cmdLine[(I_41405)-0]);
goto BeforeRet;
LA4: ;
E_41414 = 0;
E_41414 = (TY444*) newObj(NTI41413, sizeof(TY444));
(*E_41414).Sup.Sup.Sup.m_type = NTI444;
asgnRefNoCycle((void**) &(*E_41414).Sup.Sup.message, copyString(((NimStringDesc*) &TMP195632)));
raiseException((E_Base*)E_41414, "EInvalidIndex");
BeforeRet: ;
return Result_41406;
}
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_36856) {
NimStringDesc* Result_36857;
Result_36857 = 0;
Result_36857 = copyString(Path_36856);
return Result_36857;
}
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38536, TY38537* Result) {
NI Seppos_38541;
NI I_38551;
NI HEX3Atmp_38566;
NI Res_38568;
memset((void*)Result, 0, sizeof((*Result)));
Seppos_38541 = 0;
Seppos_38541 = -1;
I_38551 = 0;
HEX3Atmp_38566 = 0;
HEX3Atmp_38566 = (NI32)(Path_38536->Sup.len - 1);
Res_38568 = 0;
Res_38568 = HEX3Atmp_38566;
while (1) {
if (!(0 <= Res_38568)) goto LA1;
I_38551 = Res_38568;
if (!(((NU8)(Path_38536->data[I_38551])) == ((NU8)(47)) || ((NU8)(Path_38536->data[I_38551])) == ((NU8)(47)))) goto LA3;
Seppos_38541 = I_38551;
goto LA1;
LA3: ;
Res_38568 -= 1;
} LA1: ;
if (!(0 <= Seppos_38541)) goto LA6;
unsureAsgnRef((void**) &(*Result).Head, copyStrLast(Path_38536, 0, (NI32)(Seppos_38541 - 1)));
unsureAsgnRef((void**) &(*Result).Tail, copyStr(Path_38536, (NI32)(Seppos_38541 + 1)));
goto LA5;
LA6: ;
unsureAsgnRef((void**) &(*Result).Head, copyString(((NimStringDesc*) &TMP195636)));
unsureAsgnRef((void**) &(*Result).Tail, copyString(Path_38536));
LA5: ;
}
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_38660, TY38661* Result) {
NIM_BOOL LOC2;
NI Seppos_38685;
NI Dotpos_38688;
NI I_38698;
NI HEX3Atmp_38721;
NI Res_38723;
NIM_BOOL LOC11;
memset((void*)Result, 0, sizeof((*Result)));
LOC2 = (Path_38660->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_38660->data[(NI32)(Path_38660->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Path_38660->data[(NI32)(Path_38660->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
unsureAsgnRef((void**) &(*Result).Dir, copyString(Path_38660));
unsureAsgnRef((void**) &(*Result).Name, copyString(((NimStringDesc*) &TMP195636)));
unsureAsgnRef((void**) &(*Result).Ext, copyString(((NimStringDesc*) &TMP195636)));
goto LA1;
LA4: ;
Seppos_38685 = 0;
Seppos_38685 = -1;
Dotpos_38688 = 0;
Dotpos_38688 = Path_38660->Sup.len;
I_38698 = 0;
HEX3Atmp_38721 = 0;
HEX3Atmp_38721 = (NI32)(Path_38660->Sup.len - 1);
Res_38723 = 0;
Res_38723 = HEX3Atmp_38721;
while (1) {
if (!(0 <= Res_38723)) goto LA6;
I_38698 = Res_38723;
if (!((NU8)(Path_38660->data[I_38698]) == (NU8)(46))) goto LA8;
LOC11 = (Dotpos_38688 == Path_38660->Sup.len);
if (!(LOC11)) goto LA12;
LOC11 = (0 < I_38698);
LA12: ;
if (!LOC11) goto LA13;
Dotpos_38688 = I_38698;
LA13: ;
goto LA7;
LA8: ;
if (!(((NU8)(Path_38660->data[I_38698])) == ((NU8)(47)) || ((NU8)(Path_38660->data[I_38698])) == ((NU8)(47)))) goto LA15;
Seppos_38685 = I_38698;
goto LA6;
goto LA7;
LA15: ;
LA7: ;
Res_38723 -= 1;
} LA6: ;
unsureAsgnRef((void**) &(*Result).Dir, copyStrLast(Path_38660, 0, (NI32)(Seppos_38685 - 1)));
unsureAsgnRef((void**) &(*Result).Name, copyStrLast(Path_38660, (NI32)(Seppos_38685 + 1), (NI32)(Dotpos_38688 - 1)));
unsureAsgnRef((void**) &(*Result).Ext, copyStr(Path_38660, Dotpos_38688));
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
NimStringDesc* Result_42003;
int Size_42004;
NIM_BOOL LOC2;
Result_42003 = 0;
Size_42004 = 0;
_NSGetExecutablePath(NIM_NIL, &Size_42004);
Result_42003 = mnewString(((NI) (Size_42004)));
LOC2 = _NSGetExecutablePath(Result_42003->data, &Size_42004);
if (!LOC2) goto LA3;
Result_42003 = copyString(((NimStringDesc*) &TMP195636));
LA3: ;
return Result_42003;
}
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
NimStringDesc* Result_42209;
NimStringDesc* LOC1;
TY38661 LOC2;
Result_42209 = 0;
LOC1 = 0;
LOC1 = nosgetAppFilename();
memset((void*)&LOC2, 0, sizeof(LOC2));
nossplitFile(LOC1, &LOC2);
Result_42209 = copyString(LOC2.Dir);
return Result_42209;
}
N_NIMCALL(void, Getenvvarsc_39241)(void) {
NI I_39243;
NimStringDesc* LOC8;
if (!!(Envcomputed_39220)) goto LA2;
I_39243 = 0;
I_39243 = 0;
while (1) {
if (!(environ[(I_39243)-0] == NIM_NIL)) goto LA6;
goto LA4;
LA6: ;
LOC8 = 0;
LOC8 = cstrToNimstr(environ[(I_39243)-0]);
Environment_39238 = (TY39221*) incrSeq(&(Environment_39238)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_39238->data[Environment_39238->Sup.len-1], copyString(LOC8));
I_39243 += 1;
} LA4: ;
Envcomputed_39220 = NIM_TRUE;
LA2: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI32)((NI32)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI32)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NI, Findenvvar_39401)(NimStringDesc* Key_39403) {
NI Result_39404;
NimStringDesc* Temp_39405;
NimStringDesc* LOC1;
NI I_39414;
NI HEX3Atmp_39415;
NI Res_39417;
NIM_BOOL LOC4;
Result_39404 = 0;
Getenvvarsc_39241();
Temp_39405 = 0;
LOC1 = 0;
LOC1 = rawNewString(Key_39403->Sup.len + 1);
appendString(LOC1, Key_39403);
appendChar(LOC1, 61);
Temp_39405 = LOC1;
I_39414 = 0;
HEX3Atmp_39415 = 0;
HEX3Atmp_39415 = (Environment_39238->Sup.len-1);
Res_39417 = 0;
Res_39417 = 0;
while (1) {
if (!(Res_39417 <= HEX3Atmp_39415)) goto LA2;
I_39414 = Res_39417;
LOC4 = nsuStartsWith(Environment_39238->data[I_39414], Temp_39405);
if (!LOC4) goto LA5;
Result_39404 = I_39414;
goto BeforeRet;
LA5: ;
Res_39417 += 1;
} LA2: ;
Result_39404 = -1;
goto BeforeRet;
BeforeRet: ;
return Result_39404;
}
N_NIMCALL(NimStringDesc*, Getenv_39418)(NimStringDesc* Key_39420) {
NimStringDesc* Result_39421;
NI I_39422;
NI LOC4;
NCSTRING Env_39425;
Result_39421 = 0;
I_39422 = 0;
I_39422 = Findenvvar_39401(Key_39420);
if (!(0 <= I_39422)) goto LA2;
LOC4 = nsuFindChar(Environment_39238->data[I_39422], 61, 0);
Result_39421 = copyStr(Environment_39238->data[I_39422], (NI32)(LOC4 + 1));
goto BeforeRet;
goto LA1;
LA2: ;
Env_39425 = 0;
Env_39425 = getenv(Key_39420->data);
if (!(Env_39425 == NIM_NIL)) goto LA6;
Result_39421 = copyString(((NimStringDesc*) &TMP195636));
goto BeforeRet;
LA6: ;
Result_39421 = cstrToNimstr(Env_39425);
LA1: ;
BeforeRet: ;
return Result_39421;
}
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
NimStringDesc* Result_41033;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_41033 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_39418(((NimStringDesc*) &TMP195639));
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP195640));
Result_41033 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_41033;
}
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404) {
NimStringDesc* Result_38405;
NimStringDesc* LOC9;
NimStringDesc* LOC10;
NimStringDesc* LOC11;
NimStringDesc* LOC15;
NimStringDesc* LOC16;
Result_38405 = 0;
if (!(Head_38403->Sup.len == 0)) goto LA2;
Result_38405 = copyString(Tail_38404);
goto LA1;
LA2: ;
if (!(((NU8)(Head_38403->data[(NI32)(Head_38403->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Head_38403->data[(NI32)(Head_38403->Sup.len - 1)])) == ((NU8)(47)))) goto LA4;
if (!(((NU8)(Tail_38404->data[0])) == ((NU8)(47)) || ((NU8)(Tail_38404->data[0])) == ((NU8)(47)))) goto LA7;
LOC9 = 0;
LOC10 = 0;
LOC10 = copyStr(Tail_38404, 1);
LOC9 = rawNewString(Head_38403->Sup.len + LOC10->Sup.len + 0);
appendString(LOC9, Head_38403);
appendString(LOC9, LOC10);
Result_38405 = LOC9;
goto LA6;
LA7: ;
LOC11 = 0;
LOC11 = rawNewString(Head_38403->Sup.len + Tail_38404->Sup.len + 0);
appendString(LOC11, Head_38403);
appendString(LOC11, Tail_38404);
Result_38405 = LOC11;
LA6: ;
goto LA1;
LA4: ;
if (!(((NU8)(Tail_38404->data[0])) == ((NU8)(47)) || ((NU8)(Tail_38404->data[0])) == ((NU8)(47)))) goto LA13;
LOC15 = 0;
LOC15 = rawNewString(Head_38403->Sup.len + Tail_38404->Sup.len + 0);
appendString(LOC15, Head_38403);
appendString(LOC15, Tail_38404);
Result_38405 = LOC15;
goto LA12;
LA13: ;
LOC16 = 0;
LOC16 = rawNewString(Head_38403->Sup.len + Tail_38404->Sup.len + 1);
appendString(LOC16, Head_38403);
appendChar(LOC16, 47);
appendString(LOC16, Tail_38404);
Result_38405 = LOC16;
LA12: ;
LA1: ;
return Result_38405;
}
N_NIMCALL(NimStringDesc*, HEX2F_38480)(NimStringDesc* Head_38482, NimStringDesc* Tail_38483) {
NimStringDesc* Result_38484;
Result_38484 = 0;
Result_38484 = nosJoinPath(Head_38482, Tail_38483);
goto BeforeRet;
BeforeRet: ;
return Result_38484;
}
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_37003) {
NIM_BOOL Result_37004;
struct stat Res_37005;
NIM_BOOL LOC1;
int LOC2;
Result_37004 = 0;
memset((void*)&Res_37005, 0, sizeof(Res_37005));
LOC2 = stat(Filename_37003->data, &Res_37005);
LOC1 = (((NI32) 0) <= LOC2);
if (!(LOC1)) goto LA3;
LOC1 = S_ISREG(Res_37005.st_mode);
LA3: ;
Result_37004 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_37004;
}
N_NIMCALL(NI, Searchextpos_38627)(NimStringDesc* S_38629) {
NI Result_38630;
NI I_38640;
NI HEX3Atmp_38655;
NI Res_38657;
Result_38630 = 0;
Result_38630 = -1;
I_38640 = 0;
HEX3Atmp_38655 = 0;
HEX3Atmp_38655 = (NI32)(S_38629->Sup.len - 1);
Res_38657 = 0;
Res_38657 = HEX3Atmp_38655;
while (1) {
if (!(1 <= Res_38657)) goto LA1;
I_38640 = Res_38657;
if (!((NU8)(S_38629->data[I_38640]) == (NU8)(46))) goto LA3;
Result_38630 = I_38640;
goto LA1;
goto LA2;
LA3: ;
if (!(((NU8)(S_38629->data[I_38640])) == ((NU8)(47)) || ((NU8)(S_38629->data[I_38640])) == ((NU8)(47)))) goto LA5;
goto LA1;
goto LA2;
LA5: ;
LA2: ;
Res_38657 -= 1;
} LA1: ;
return Result_38630;
}
N_NIMCALL(NimStringDesc*, Normext_38621)(NimStringDesc* Ext_38623) {
NimStringDesc* Result_38624;
NIM_BOOL LOC2;
NimStringDesc* LOC6;
Result_38624 = 0;
LOC2 = ((Ext_38623) && (Ext_38623)->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = ((NU8)(Ext_38623->data[0]) == (NU8)(46));
LA3: ;
if (!LOC2) goto LA4;
Result_38624 = copyString(Ext_38623);
goto LA1;
LA4: ;
LOC6 = 0;
LOC6 = rawNewString(Ext_38623->Sup.len + 1);
appendChar(LOC6, 46);
appendString(LOC6, Ext_38623);
Result_38624 = LOC6;
LA1: ;
return Result_38624;
}
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38820, NimStringDesc* Ext_38821) {
NimStringDesc* Result_38822;
NI Extpos_38823;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
Result_38822 = 0;
Extpos_38823 = 0;
Extpos_38823 = Searchextpos_38627(Filename_38820);
if (!(Extpos_38823 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_38621(Ext_38821);
LOC4 = rawNewString(Filename_38820->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_38820);
appendString(LOC4, LOC5);
Result_38822 = LOC4;
goto LA1;
LA2: ;
LOC6 = 0;
LOC7 = 0;
LOC7 = copyStrLast(Filename_38820, 0, (NI32)(Extpos_38823 - 1));
LOC8 = 0;
LOC8 = Normext_38621(Ext_38821);
LOC6 = rawNewString(LOC7->Sup.len + LOC8->Sup.len + 0);
appendString(LOC6, LOC7);
appendString(LOC6, LOC8);
Result_38822 = LOC6;
LA1: ;
return Result_38822;
}
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_36604) {
TY422* E_36804;
NCSTRING LOC8;
TY422* E_36821;
TY422* E_36838;
if (!(Msg_36604->Sup.len == 0)) goto LA2;
if (!!((errno == ((NI32) 0)))) goto LA5;
E_36804 = 0;
E_36804 = (TY422*) newObj(NTI36803, sizeof(TY422));
(*E_36804).Sup.Sup.Sup.Sup.m_type = NTI422;
LOC8 = strerror(errno);
asgnRefNoCycle((void**) &(*E_36804).Sup.Sup.Sup.message, cstrToNimstr(LOC8));
raiseException((E_Base*)E_36804, "EOS");
goto LA4;
LA5: ;
E_36821 = 0;
E_36821 = (TY422*) newObj(NTI36803, sizeof(TY422));
(*E_36821).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_36821).Sup.Sup.Sup.message, copyString(((NimStringDesc*) &TMP195644)));
raiseException((E_Base*)E_36821, "EOS");
LA4: ;
goto LA1;
LA2: ;
E_36838 = 0;
E_36838 = (TY422*) newObj(NTI36803, sizeof(TY422));
(*E_36838).Sup.Sup.Sup.Sup.m_type = NTI422;
asgnRefNoCycle((void**) &(*E_36838).Sup.Sup.Sup.message, copyString(Msg_36604));
raiseException((E_Base*)E_36838, "EOS");
LA1: ;
}
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
NimStringDesc* Result_38012;
NCSTRING LOC2;
NI LOC5;
Result_38012 = 0;
Result_38012 = mnewString(512);
LOC2 = getcwd(Result_38012->data, 512);
if (!!((LOC2 == NIM_NIL))) goto LA3;
LOC5 = strlen(Result_38012->data);
Result_38012 = setLengthStr(Result_38012, LOC5);
goto LA1;
LA3: ;
nosOSError(((NimStringDesc*) &TMP195636));
LA1: ;
return Result_38012;
}
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_38451, NI Parts_38451Len0) {
NimStringDesc* Result_38452;
NI I_38476;
NI HEX3Atmp_38477;
NI Res_38479;
Result_38452 = 0;
Result_38452 = copyString(Parts_38451[0]);
I_38476 = 0;
HEX3Atmp_38477 = 0;
HEX3Atmp_38477 = (Parts_38451Len0-1);
Res_38479 = 0;
Res_38479 = 1;
while (1) {
if (!(Res_38479 <= HEX3Atmp_38477)) goto LA1;
I_38476 = Res_38479;
Result_38452 = nosJoinPath(Result_38452, Parts_38451[I_38476]);
Res_38479 += 1;
} LA1: ;
return Result_38452;
}
N_NIMCALL(void, Rawcreatedir_40216)(NimStringDesc* Dir_40218) {
NIM_BOOL LOC2;
int LOC3;
LOC3 = mkdir(Dir_40218->data, 457);
LOC2 = !((LOC3 == ((NI32) 0)));
if (!(LOC2)) goto LA4;
LOC2 = !((errno == EEXIST));
LA4: ;
if (!LOC2) goto LA5;
nosOSError(((NimStringDesc*) &TMP195636));
LA5: ;
}
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_40403) {
NI I_40414;
NI HEX3Atmp_40427;
NI Res_40429;
NimStringDesc* LOC5;
I_40414 = 0;
HEX3Atmp_40427 = 0;
HEX3Atmp_40427 = (NI32)(Dir_40403->Sup.len - 1);
Res_40429 = 0;
Res_40429 = 1;
while (1) {
if (!(Res_40429 <= HEX3Atmp_40427)) goto LA1;
I_40414 = Res_40429;
if (!(((NU8)(Dir_40403->data[I_40414])) == ((NU8)(47)) || ((NU8)(Dir_40403->data[I_40414])) == ((NU8)(47)))) goto LA3;
LOC5 = 0;
LOC5 = copyStrLast(Dir_40403, 0, (NI32)(I_40414 - 1));
Rawcreatedir_40216(LOC5);
LA3: ;
Res_40429 += 1;
} LA1: ;
Rawcreatedir_40216(Dir_40403);
}
N_NIMCALL(void, Putenv_39432)(NimStringDesc* Key_39434, NimStringDesc* Val_39435) {
NI Indx_39436;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
int LOC7;
Indx_39436 = 0;
Indx_39436 = Findenvvar_39401(Key_39434);
if (!(0 <= Indx_39436)) goto LA2;
LOC4 = 0;
LOC4 = rawNewString(Key_39434->Sup.len + Val_39435->Sup.len + 1);
appendString(LOC4, Key_39434);
appendChar(LOC4, 61);
appendString(LOC4, Val_39435);
asgnRefNoCycle((void**) &Environment_39238->data[Indx_39436], LOC4);
goto LA1;
LA2: ;
LOC5 = 0;
LOC5 = rawNewString(Key_39434->Sup.len + Val_39435->Sup.len + 1);
appendString(LOC5, Key_39434);
appendChar(LOC5, 61);
appendString(LOC5, Val_39435);
Environment_39238 = (TY39221*) incrSeq(&(Environment_39238)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Environment_39238->data[Environment_39238->Sup.len-1], copyString(LOC5));
Indx_39436 = (Environment_39238->Sup.len-1);
LA1: ;
LOC7 = putenv(Environment_39238->data[Indx_39436]->data);
if (!!((LOC7 == ((NI32) 0)))) goto LA8;
nosOSError(((NimStringDesc*) &TMP195636));
LA8: ;
}
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
NimStringDesc* Result_41203;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
Result_41203 = 0;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getenv_39418(((NimStringDesc*) &TMP195639));
LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP195720));
Result_41203 = LOC1;
goto BeforeRet;
BeforeRet: ;
return Result_41203;
}
N_NIMCALL(NI, noscmpPaths)(NimStringDesc* Patha_38845, NimStringDesc* Pathb_38846) {
NI Result_38847;
Result_38847 = 0;
if (!NIM_TRUE) goto LA2;
Result_38847 = Cmp_1327(Patha_38845, Pathb_38846);
goto LA1;
LA2: ;
Result_38847 = nsuCmpIgnoreCase(Patha_38845, Pathb_38846);
LA1: ;
return Result_38847;
}
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_38850, NimStringDesc* Path2_38851) {
NIM_BOOL Result_38852;
struct stat A_38853;
struct stat B_38854;
NIM_BOOL LOC2;
int LOC3;
int LOC5;
NI LOC8;
NIM_BOOL LOC9;
Result_38852 = 0;
memset((void*)&A_38853, 0, sizeof(A_38853));
memset((void*)&B_38854, 0, sizeof(B_38854));
LOC3 = stat(Path1_38850->data, &A_38853);
LOC2 = (LOC3 < ((NI32) 0));
if (LOC2) goto LA4;
LOC5 = stat(Path2_38851->data, &B_38854);
LOC2 = (LOC5 < ((NI32) 0));
LA4: ;
if (!LOC2) goto LA6;
LOC8 = noscmpPaths(Path1_38850, Path2_38851);
Result_38852 = (LOC8 == 0);
goto LA1;
LA6: ;
LOC9 = (A_38853.st_dev == B_38854.st_dev);
if (!(LOC9)) goto LA10;
LOC9 = (A_38853.st_ino == B_38854.st_ino);
LA10: ;
Result_38852 = LOC9;
LA1: ;
return Result_38852;
}
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_38830, NimStringDesc* Ext_38831) {
NimStringDesc* Result_38832;
NI Extpos_38833;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_38832 = 0;
Extpos_38833 = 0;
Extpos_38833 = Searchextpos_38627(Filename_38830);
if (!(Extpos_38833 < 0)) goto LA2;
LOC4 = 0;
LOC5 = 0;
LOC5 = Normext_38621(Ext_38831);
LOC4 = rawNewString(Filename_38830->Sup.len + LOC5->Sup.len + 0);
appendString(LOC4, Filename_38830);
appendString(LOC4, LOC5);
Result_38832 = LOC4;
goto LA1;
LA2: ;
Result_38832 = copyString(Filename_38830);
LA1: ;
return Result_38832;
}
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* Path_38730) {
NimStringDesc* Result_38731;
NIM_BOOL LOC2;
TY38537 LOC6;
Result_38731 = 0;
LOC2 = (Path_38730->Sup.len == 0);
if (LOC2) goto LA3;
LOC2 = (((NU8)(Path_38730->data[(NI32)(Path_38730->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(Path_38730->data[(NI32)(Path_38730->Sup.len - 1)])) == ((NU8)(47)));
LA3: ;
if (!LOC2) goto LA4;
Result_38731 = copyString(((NimStringDesc*) &TMP195636));
goto LA1;
LA4: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
nosSplitPath(Path_38730, &LOC6);
Result_38731 = copyString(LOC6.Tail);
LA1: ;
return Result_38731;
}
N_NIMCALL(NI, nosgetLastModificationTime)(NimStringDesc* File_37403) {
NI Result_37404;
struct stat Res_37405;
int LOC2;
Result_37404 = 0;
memset((void*)&Res_37405, 0, sizeof(Res_37405));
LOC2 = stat(File_37403->data, &Res_37405);
if (!(LOC2 < ((NI32) 0))) goto LA3;
nosOSError(((NimStringDesc*) &TMP195636));
LA3: ;
Result_37404 = Res_37405.st_mtime;
goto BeforeRet;
BeforeRet: ;
return Result_37404;
}
N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* A_38003, NimStringDesc* B_38004) {
NIM_BOOL Result_38005;
NI LOC1;
NI LOC2;
NI64 LOC3;
Result_38005 = 0;
LOC1 = nosgetLastModificationTime(A_38003);
LOC2 = nosgetLastModificationTime(B_38004);
LOC3 = ntDiffTime(LOC1, LOC2);
Result_38005 = (0 < LOC3);
return Result_38005;
}
N_NIMCALL(TY39221*, nosparseCmdLine)(NimStringDesc* C_40432) {
TY39221* Result_40434;
NI I_40451;
NimStringDesc* A_40452;
NIM_BOOL LOC3;
NIM_CHAR Delim_40469;
NIM_BOOL LOC6;
Result_40434 = 0;
Result_40434 = (TY39221*) newSeq(NTI39221, 0);
I_40451 = 0;
I_40451 = 0;
A_40452 = 0;
A_40452 = copyString(((NimStringDesc*) &TMP195636));
while (1) {
A_40452 = setLengthStr(A_40452, 0);
while (1) {
LOC3 = ((NU8)(C_40432->data[I_40451]) == (NU8)(32));
if (LOC3) goto LA4;
LOC3 = ((NU8)(C_40432->data[I_40451]) == (NU8)(9));
LA4: ;
if (!LOC3) goto LA2;
I_40451 += 1;
} LA2: ;
switch (((NU8)(C_40432->data[I_40451]))) {
case 39:
case 34:
Delim_40469 = 0;
Delim_40469 = C_40432->data[I_40451];
I_40451 += 1;
while (1) {
LOC6 = !(((NU8)(C_40432->data[I_40451]) == (NU8)(0)));
if (!(LOC6)) goto LA7;
LOC6 = !(((NU8)(C_40432->data[I_40451]) == (NU8)(Delim_40469)));
LA7: ;
if (!LOC6) goto LA5;
A_40452 = addChar(A_40452, C_40432->data[I_40451]);
I_40451 += 1;
} LA5: ;
if (!!(((NU8)(C_40432->data[I_40451]) == (NU8)(0)))) goto LA9;
I_40451 += 1;
LA9: ;
break;
case 0:
goto LA1;
break;
default:
while (1) {
if (!((NU8)(32) < (NU8)(C_40432->data[I_40451]))) goto LA11;
A_40452 = addChar(A_40452, C_40432->data[I_40451]);
I_40451 += 1;
} LA11: ;
break;
}
Result_40434 = (TY39221*) incrSeq(&(Result_40434)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &Result_40434->data[Result_40434->Sup.len-1], copyString(A_40452));
} LA1: ;
return Result_40434;
}
N_NIMCALL(void, nossleep)(NI Milsecs_42212) {
struct timespec A_42213;
struct timespec B_42214;
int LOC1;
memset((void*)&A_42213, 0, sizeof(A_42213));
memset((void*)&B_42214, 0, sizeof(B_42214));
A_42213.tv_sec = ((NI) ((NI32)(Milsecs_42212 / 1000)));
A_42213.tv_nsec = (NI32)((NI32)(Milsecs_42212 % 1000) * 1000);
LOC1 = nanosleep(&A_42213, &B_42214);
}
N_NOINLINE(void, osInit)(void) {
Envcomputed_39220 = NIM_FALSE;
asgnRefNoCycle((void**) &Environment_39238, (TY39221*) newSeq(NTI39221, 0));
}

