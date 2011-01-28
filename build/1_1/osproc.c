/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY27434 TY27434;
typedef struct TY27436 TY27436;
typedef struct TY27432 TY27432;
typedef struct TY63694 TY63694;
typedef struct TY63202 TY63202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY34021 TY34021;
typedef struct TY10202 TY10202;
typedef struct TY10218 TY10218;
typedef struct TY10590 TY10590;
typedef struct TY10214 TY10214;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
typedef struct TY61408 TY61408;
typedef struct TNimObject TNimObject;
typedef struct TY40006 TY40006;
typedef struct TY40004 TY40004;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY27434 {
NI32 Cb;
NCSTRING Lpreserved;
NCSTRING Lpdesktop;
NCSTRING Lptitle;
NI32 Dwx;
NI32 Dwy;
NI32 Dwxsize;
NI32 Dwysize;
NI32 Dwxcountchars;
NI32 Dwycountchars;
NI32 Dwfillattribute;
NI32 Dwflags;
NI16 Wshowwindow;
NI16 Cbreserved2;
void* Lpreserved2;
NI Hstdinput;
NI Hstdoutput;
NI Hstderror;
};
struct TY27436 {
NI Hprocess;
NI Hthread;
NI32 Dwprocessid;
NI32 Dwthreadid;
};
typedef N_STDCALL_PTR(NI, TY27538) (NI32 Nstdhandle_27539);
typedef N_STDCALL_PTR(NI32, TY27503) (NCSTRING Lpapplicationname_27504, NCSTRING Lpcommandline_27505, TY27432* Lpprocessattributes_27507, TY27432* Lpthreadattributes_27509, NI32 Binherithandles_27510, NI32 Dwcreationflags_27511, void* Lpenvironment_27512, NCSTRING Lpcurrentdirectory_27513, TY27434* Lpstartupinfo_27515, TY27436* Lpprocessinformation_27517);
typedef N_STDCALL_PTR(NI32, TY27476) (NI Hobject_27477);
typedef N_STDCALL_PTR(NI32, TY27525) (NI Hhandle_27526, NI32 Dwmilliseconds_27527);
typedef N_STDCALL_PTR(NI32, TY27533) (NI Hprocess_27534, NI32* Lpexitcode_27536);
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
struct TY63202 {
  TNimObject Sup;
NI Fprocesshandle;
NI32 Inputhandle;
NI32 Outputhandle;
NI32 Errorhandle;
NI32 Id;
NI32 Exitcode;
};
struct TY27432 {
NI32 Nlength;
void* Lpsecuritydescriptor;
NI32 Binherithandle;
};
typedef N_STDCALL_PTR(NI32, TY27495) (NI* Hreadpipe_27497, NI* Hwritepipe_27498, TY27432* Lppipeattributes_27500, NI32 Nsize_27501);
struct TY40004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY61408 {
  TNimObject Sup;
NI Counter;
TY40006* Data;
NU8 Mode;
};
typedef NI TY8214[16];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
struct TY63694 {
  TGenericSeq Sup;
  TY63202* data[SEQ_DECL_SIZE];
};
struct TY34021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY40006 {
  TGenericSeq Sup;
  TY40004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, Getenv_34217)(NimStringDesc* Key_34219);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_24425);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_31004);
N_NIMCALL(void*, newSeq)(TNimType* Typ_13804, NI Len_13805);
N_NIMCALL(TY63202*, Startprocessaux_63603)(NimStringDesc* Cmd_63605, NU8 Options_63607);
N_NIMCALL(TY34021*, nosparseCmdLine)(NimStringDesc* C_35231);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18235, NI Elemsize_18236);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12618, void* Src_12619);
static N_INLINE(TY10202*, Usrtocell_11012)(void* Usr_11014);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12001)(TY10202* C_12003);
N_NOINLINE(void, Addzct_11001)(TY10218* S_11004, TY10202* C_11005);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18108);
N_NIMCALL(TY63202*, nospstartProcess)(NimStringDesc* Command_63239, NimStringDesc* Workingdir_63240, NimStringDesc** Args_63245, NI Args_63245Len0, TY61408* Env_63246, NU8 Options_63249);
N_NIMCALL(void*, newObj)(TNimType* Typ_13307, NI Size_13308);
N_NIMCALL(void, Createpipehandles_64320)(NI* Rdhandle_64323, NI* Wrhandle_64324);
N_NIMCALL(NCSTRING, Buildcommandline_64258)(NimStringDesc* A_64260, NimStringDesc** Args_64262, NI Args_64262Len0);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_25255)(NimStringDesc* S_25257);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18192, NimStringDesc* Src_18193);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18182, NI Addlen_18183);
N_NOCONV(void*, Alloc0_1953)(NI Size_1955);
N_NIMCALL(NCSTRING, Buildenv_64277)(TY61408* Env_64279);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18087);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18104);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
static N_INLINE(void, rawEchoNL)(void);
static N_INLINE(void, Fileclose_64329)(NI H_64331);
N_NOCONV(void, Dealloc_1960)(void* P_1962);
N_NIMCALL(void, nossleep)(NI Milsecs_37006);
N_NIMCALL(NIM_BOOL, nosprunning)(TY63202* P_63261);
N_NIMCALL(NI, nospwaitForExit)(TY63202* P_63268);
STRING_LITERAL(TMP190861, "NUMBER_OF_PROCESSORS", 20);
STRING_LITERAL(TMP190862, "", 0);
STRING_LITERAL(TMP190864, "=", 1);
STRING_LITERAL(TMP190865, "\015\012", 2);
extern TY27538 Dl_27537;
extern TY27503 Dl_27502;
extern TY27476 Dl_27475;
extern TY27525 Dl_27524;
extern TY27533 Dl_27532;
extern TNimType* NTI63694; /* seq[PProcess] */
extern TNimType* NTI34021; /* seq[string] */
extern TY10590 Gch_10608;
extern TNimType* NTI63204; /* PProcess */
extern TNimType* NTI63202; /* TProcess */
extern TY27495 Dl_27494;
N_NIMCALL(NI, nospcountProcessors)(void) {
NI Result_63403;
NimStringDesc* X_63404;
Result_63403 = 0;
X_63404 = 0;
X_63404 = Getenv_34217(((NimStringDesc*) &TMP190861));
if (!(0 < X_63404->Sup.len)) goto LA2;
Result_63403 = nsuParseInt(X_63404);
LA2: ;
if (!(Result_63403 <= 0)) goto LA5;
Result_63403 = 1;
LA5: ;
return Result_63403;
}
N_NIMCALL(NI, nospexecCmd)(NimStringDesc* Command_63232) {
NI Result_64492;
TY27434 Si_64493;
TY27436 Procinfo_64494;
NI Process_64495;
NI32 L_64496;
NI32 LOC2;
NI32 LOC5;
NI32 LOC7;
NI32 LOC10;
NI32 LOC11;
Result_64492 = 0;
memset((void*)&Si_64493, 0, sizeof(Si_64493));
memset((void*)&Procinfo_64494, 0, sizeof(Procinfo_64494));
Process_64495 = 0;
L_64496 = 0;
Si_64493.Cb = ((NI32) (((NI)sizeof(TY27434))));
Si_64493.Hstderror = Dl_27537(((NI32) -12));
Si_64493.Hstdinput = Dl_27537(((NI32) -10));
Si_64493.Hstdoutput = Dl_27537(((NI32) -11));
LOC2 = Dl_27502(NIM_NIL, Command_63232->data, NIM_NIL, NIM_NIL, ((NI32) 0), ((NI32) 32), NIM_NIL, NIM_NIL, &Si_64493, &Procinfo_64494);
if (!(((NI) (LOC2)) == 0)) goto LA3;
nosOSError(((NimStringDesc*) &TMP190862));
goto LA1;
LA3: ;
Process_64495 = Procinfo_64494.Hprocess;
LOC5 = Dl_27475(Procinfo_64494.Hthread);
LOC7 = Dl_27524(Process_64495, ((NI32) -1));
if (!!((((NI) (LOC7)) == -1))) goto LA8;
LOC10 = Dl_27532(Process_64495, &L_64496);
Result_64492 = ((NI) (L_64496));
goto LA6;
LA8: ;
Result_64492 = -1;
LA6: ;
LOC11 = Dl_27475(Process_64495);
LA1: ;
return Result_64492;
}
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
N_NIMCALL(void, Createpipehandles_64320)(NI* Rdhandle_64323, NI* Wrhandle_64324) {
TY27432 Piinheritablepipe_64325;
NI32 LOC2;
memset((void*)&Piinheritablepipe_64325, 0, sizeof(Piinheritablepipe_64325));
Piinheritablepipe_64325.Nlength = ((NI32) (((NI)sizeof(TY27432))));
Piinheritablepipe_64325.Lpsecuritydescriptor = NIM_NIL;
Piinheritablepipe_64325.Binherithandle = ((NI32) 1);
LOC2 = Dl_27494(Rdhandle_64323, Wrhandle_64324, &Piinheritablepipe_64325, ((NI32) 1024));
if (!(LOC2 == ((NI32) 0))) goto LA3;
nosOSError(((NimStringDesc*) &TMP190862));
LA3: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18192, NimStringDesc* Src_18193) {
memcpy(((NCSTRING) (&(*Dest_18192).data[((*Dest_18192).Sup.len)-0])), ((NCSTRING) ((*Src_18193).data)), ((NI32) ((NI32)((NI32)((*Src_18193).Sup.len + 1) * 1))));
(*Dest_18192).Sup.len += (*Src_18193).Sup.len;
}
N_NIMCALL(NCSTRING, Buildcommandline_64258)(NimStringDesc* A_64260, NimStringDesc** Args_64262, NI Args_64262Len0) {
NCSTRING Result_64263;
NimStringDesc* Res_64264;
NI I_64272;
NI HEX3Atmp_64601;
NI Res_64603;
NimStringDesc* LOC2;
void* LOC3;
Result_64263 = 0;
Res_64264 = 0;
Res_64264 = Quoteifcontainswhite_25255(A_64260);
I_64272 = 0;
HEX3Atmp_64601 = 0;
HEX3Atmp_64601 = (Args_64262Len0-1);
Res_64603 = 0;
Res_64603 = 0;
while (1) {
if (!(Res_64603 <= HEX3Atmp_64601)) goto LA1;
I_64272 = Res_64603;
Res_64264 = addChar(Res_64264, 32);
LOC2 = 0;
LOC2 = Quoteifcontainswhite_25255(Args_64262[I_64272]);
Res_64264 = resizeString(Res_64264, LOC2->Sup.len + 0);
appendString(Res_64264, LOC2);
Res_64603 += 1;
} LA1: ;
LOC3 = Alloc0_1953((NI32)(Res_64264->Sup.len + 1));
Result_64263 = ((NCSTRING) (LOC3));
memcpy(((void*) (Result_64263)), ((void*) (Res_64264->data)), Res_64264->Sup.len);
return Result_64263;
}
N_NIMCALL(NCSTRING, Buildenv_64277)(TY61408* Env_64279) {
NCSTRING Result_64280;
NI L_64281;
NimStringDesc* Key_64282;
NimStringDesc* Val_64283;
NI H_64605;
NI HEX3Atmp_64607;
NI Res_64609;
void* LOC5;
NimStringDesc* Key_64300;
NimStringDesc* Val_64301;
NI H_64611;
NI HEX3Atmp_64613;
NI Res_64615;
NimStringDesc* X_64302;
NimStringDesc* LOC10;
Result_64280 = 0;
L_64281 = 0;
L_64281 = 0;
Key_64282 = 0;
Val_64283 = 0;
H_64605 = 0;
HEX3Atmp_64607 = 0;
HEX3Atmp_64607 = ((*Env_64279).Data->Sup.len-1);
Res_64609 = 0;
Res_64609 = 0;
while (1) {
if (!(Res_64609 <= HEX3Atmp_64607)) goto LA1;
H_64605 = Res_64609;
if (!!((*Env_64279).Data->data[H_64605].Key == 0)) goto LA3;
Key_64282 = (*Env_64279).Data->data[H_64605].Key;
Val_64283 = (*Env_64279).Data->data[H_64605].Val;
L_64281 += (NI32)((NI32)(Key_64282->Sup.len + Val_64283->Sup.len) + 2);
LA3: ;
Res_64609 += 1;
} LA1: ;
LOC5 = Alloc0_1953((NI32)(L_64281 + 2));
Result_64280 = ((NCSTRING) (LOC5));
L_64281 = 0;
Key_64300 = 0;
Val_64301 = 0;
H_64611 = 0;
HEX3Atmp_64613 = 0;
HEX3Atmp_64613 = ((*Env_64279).Data->Sup.len-1);
Res_64615 = 0;
Res_64615 = 0;
while (1) {
if (!(Res_64615 <= HEX3Atmp_64613)) goto LA6;
H_64611 = Res_64615;
if (!!((*Env_64279).Data->data[H_64611].Key == 0)) goto LA8;
Key_64300 = (*Env_64279).Data->data[H_64611].Key;
Val_64301 = (*Env_64279).Data->data[H_64611].Val;
X_64302 = 0;
LOC10 = 0;
LOC10 = rawNewString(Key_64300->Sup.len + Val_64301->Sup.len + 1);
appendString(LOC10, Key_64300);
appendString(LOC10, ((NimStringDesc*) &TMP190864));
appendString(LOC10, Val_64301);
X_64302 = LOC10;
memcpy(((void*) (&Result_64280[L_64281])), ((void*) (X_64302->data)), (NI32)(X_64302->Sup.len + 1));
L_64281 += (NI32)(X_64302->Sup.len + 1);
LA8: ;
Res_64615 += 1;
} LA6: ;
return Result_64280;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094) {
Write_3658(stdout, X_4094);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3658(stdout, ((NimStringDesc*) &TMP190865));
}
static N_INLINE(void, Fileclose_64329)(NI H_64331) {
NI32 LOC4;
if (!(4 < H_64331)) goto LA2;
LOC4 = Dl_27475(H_64331);
LA2: ;
}
N_NIMCALL(TY63202*, nospstartProcess)(NimStringDesc* Command_63239, NimStringDesc* Workingdir_63240, NimStringDesc** Args_63245, NI Args_63245Len0, TY61408* Env_63246, NU8 Options_63249) {
TY63202* Result_64347;
TY27434 Si_64348;
TY27436 Procinfo_64349;
NI Success_64350;
NI Hi_64351;
NI Ho_64352;
NI He_64353;
NCSTRING Cmdl_64397;
NCSTRING Wd_64401;
NCSTRING E_64402;
NimStringDesc* LOC16;
NI32 LOC17;
NI32 LOC30;
Result_64347 = 0;
memset((void*)&Si_64348, 0, sizeof(Si_64348));
memset((void*)&Procinfo_64349, 0, sizeof(Procinfo_64349));
Success_64350 = 0;
Hi_64351 = 0;
Ho_64352 = 0;
He_64353 = 0;
Result_64347 = (TY63202*) newObj(NTI63204, sizeof(TY63202));
(*Result_64347).Sup.m_type = NTI63202;
Si_64348.Cb = ((NI32) (((NI)sizeof(TY27434))));
if (!!(((Options_63249 &(1<<((((NU8) 3))&7)))!=0))) goto LA2;
Si_64348.Dwflags = ((NI32) 256);
Createpipehandles_64320(&Si_64348.Hstdinput, &Hi_64351);
Createpipehandles_64320(&Ho_64352, &Si_64348.Hstdoutput);
if (!((Options_63249 &(1<<((((NU8) 2))&7)))!=0)) goto LA5;
Si_64348.Hstderror = Si_64348.Hstdoutput;
He_64353 = Ho_64352;
goto LA4;
LA5: ;
Createpipehandles_64320(&He_64353, &Si_64348.Hstderror);
LA4: ;
(*Result_64347).Inputhandle = ((NI32) (Hi_64351));
(*Result_64347).Outputhandle = ((NI32) (Ho_64352));
(*Result_64347).Errorhandle = ((NI32) (He_64353));
goto LA1;
LA2: ;
Si_64348.Hstderror = Dl_27537(((NI32) -12));
Si_64348.Hstdinput = Dl_27537(((NI32) -10));
Si_64348.Hstdoutput = Dl_27537(((NI32) -11));
(*Result_64347).Inputhandle = ((NI32) (Si_64348.Hstdinput));
(*Result_64347).Outputhandle = ((NI32) (Si_64348.Hstdoutput));
(*Result_64347).Errorhandle = ((NI32) (Si_64348.Hstderror));
LA1: ;
Cmdl_64397 = 0;
Cmdl_64397 = Buildcommandline_64258(Command_63239, Args_63245, Args_63245Len0);
Wd_64401 = 0;
Wd_64401 = NIM_NIL;
E_64402 = 0;
E_64402 = NIM_NIL;
if (!(0 < Workingdir_63240->Sup.len)) goto LA8;
Wd_64401 = Workingdir_63240->data;
LA8: ;
if (!!((Env_63246 == NIM_NIL))) goto LA11;
E_64402 = Buildenv_64277(Env_63246);
LA11: ;
if (!((Options_63249 &(1<<((((NU8) 0))&7)))!=0)) goto LA14;
LOC16 = 0;
LOC16 = cstrToNimstr(Cmdl_64397);
rawEcho(LOC16);
rawEchoNL();
LA14: ;
LOC17 = Dl_27502(NIM_NIL, Cmdl_64397, NIM_NIL, NIM_NIL, ((NI32) 1), ((NI32) 32), ((void*) (E_64402)), Wd_64401, &Si_64348, &Procinfo_64349);
Success_64350 = ((NI) (LOC17));
if (!!(((Options_63249 &(1<<((((NU8) 3))&7)))!=0))) goto LA19;
Fileclose_64329(Si_64348.Hstdinput);
Fileclose_64329(Si_64348.Hstdoutput);
if (!!(((Options_63249 &(1<<((((NU8) 2))&7)))!=0))) goto LA22;
Fileclose_64329(Si_64348.Hstderror);
LA22: ;
LA19: ;
if (!!((E_64402 == NIM_NIL))) goto LA25;
Dealloc_1960(((void*) (E_64402)));
LA25: ;
Dealloc_1960(((void*) (Cmdl_64397)));
if (!(Success_64350 == 0)) goto LA28;
nosOSError(((NimStringDesc*) &TMP190862));
LA28: ;
LOC30 = Dl_27475(Procinfo_64349.Hthread);
(*Result_64347).Fprocesshandle = Procinfo_64349.Hprocess;
(*Result_64347).Id = Procinfo_64349.Dwprocessid;
return Result_64347;
}
N_NIMCALL(TY63202*, Startprocessaux_63603)(NimStringDesc* Cmd_63605, NU8 Options_63607) {
TY63202* Result_63608;
TY34021* C_63609;
TY34021* A_63627;
NI I_63660;
NI HEX3Atmp_63679;
NI Res_63681;
Result_63608 = 0;
C_63609 = 0;
C_63609 = nosparseCmdLine(Cmd_63605);
A_63627 = 0;
A_63627 = (TY34021*) newSeq(NTI34021, 0);
I_63660 = 0;
HEX3Atmp_63679 = 0;
HEX3Atmp_63679 = (NI32)(C_63609->Sup.len - 1);
Res_63681 = 0;
Res_63681 = 1;
while (1) {
if (!(Res_63681 <= HEX3Atmp_63679)) goto LA1;
I_63660 = Res_63681;
A_63627 = (TY34021*) incrSeq(&(A_63627)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &A_63627->data[A_63627->Sup.len-1], copyString(C_63609->data[I_63660]));
Res_63681 += 1;
} LA1: ;
Result_63608 = nospstartProcess(C_63609->data[0], ((NimStringDesc*) &TMP190862), A_63627->data, A_63627->Sup.len, NIM_NIL, Options_63607);
return Result_63608;
}
N_NIMCALL(NIM_BOOL, nosprunning)(TY63202* P_63261) {
NIM_BOOL Result_64464;
NI32 X_64465;
Result_64464 = 0;
X_64465 = 0;
X_64465 = Dl_27524((*P_63261).Fprocesshandle, ((NI32) 50));
Result_64464 = (X_64465 == ((NI32) 258));
goto BeforeRet;
BeforeRet: ;
return Result_64464;
}
N_NIMCALL(NI, nospwaitForExit)(TY63202* P_63268) {
NI Result_64474;
NI32 LOC1;
NI32 Res_64475;
NI32 LOC2;
NI32 LOC3;
Result_64474 = 0;
LOC1 = Dl_27524((*P_63268).Fprocesshandle, ((NI32) -1));
Res_64475 = 0;
LOC2 = Dl_27532((*P_63268).Fprocesshandle, &Res_64475);
Result_64474 = ((NI) (Res_64475));
LOC3 = Dl_27475((*P_63268).Fprocesshandle);
return Result_64474;
}
N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** Cmds_63685, NI Cmds_63685Len0, NU8 Options_63687, NI N_63688) {
NI Result_63689;
TY63694* Q_63695;
NI M_63720;
NI I_63728;
NI HEX3Atmp_63822;
NI Res_63824;
NI I_63729;
NI R_63739;
NI HEX3Atmp_63825;
NI Res_63827;
NIM_BOOL LOC8;
NI LOC11;
NI I_63808;
NI HEX3Atmp_63828;
NI Res_63830;
NI LOC16;
NI I_63818;
NI HEX3Atmp_63831;
NI Res_63833;
TY63202* P_63819;
NI LOC18;
Result_63689 = 0;
if (!(1 < N_63688)) goto LA2;
Q_63695 = 0;
Q_63695 = (TY63694*) newSeq(NTI63694, N_63688);
M_63720 = 0;
M_63720 = ((N_63688 <= Cmds_63685Len0) ? N_63688 : Cmds_63685Len0);
I_63728 = 0;
HEX3Atmp_63822 = 0;
HEX3Atmp_63822 = (NI32)(M_63720 - 1);
Res_63824 = 0;
Res_63824 = 0;
while (1) {
if (!(Res_63824 <= HEX3Atmp_63822)) goto LA4;
I_63728 = Res_63824;
asgnRefNoCycle((void**) &Q_63695->data[I_63728], Startprocessaux_63603(Cmds_63685[I_63728], Options_63687));
Res_63824 += 1;
} LA4: ;
I_63729 = 0;
I_63729 = M_63720;
while (1) {
if (!(I_63729 <= (Cmds_63685Len0-1))) goto LA5;
nossleep(50);
R_63739 = 0;
HEX3Atmp_63825 = 0;
HEX3Atmp_63825 = (NI32)(N_63688 - 1);
Res_63827 = 0;
Res_63827 = 0;
while (1) {
if (!(Res_63827 <= HEX3Atmp_63825)) goto LA6;
R_63739 = Res_63827;
LOC8 = nosprunning(Q_63695->data[R_63739]);
if (!!(LOC8)) goto LA9;
LOC11 = nospwaitForExit(Q_63695->data[R_63739]);
Result_63689 = ((LOC11 >= Result_63689) ? LOC11 : Result_63689);
asgnRefNoCycle((void**) &Q_63695->data[R_63739], Startprocessaux_63603(Cmds_63685[I_63729], Options_63687));
I_63729 += 1;
if (!((Cmds_63685Len0-1) < I_63729)) goto LA13;
goto LA6;
LA13: ;
LA9: ;
Res_63827 += 1;
} LA6: ;
} LA5: ;
I_63808 = 0;
HEX3Atmp_63828 = 0;
HEX3Atmp_63828 = (NI32)(M_63720 - 1);
Res_63830 = 0;
Res_63830 = 0;
while (1) {
if (!(Res_63830 <= HEX3Atmp_63828)) goto LA15;
I_63808 = Res_63830;
LOC16 = nospwaitForExit(Q_63695->data[I_63808]);
Result_63689 = ((LOC16 >= Result_63689) ? LOC16 : Result_63689);
Res_63830 += 1;
} LA15: ;
goto LA1;
LA2: ;
I_63818 = 0;
HEX3Atmp_63831 = 0;
HEX3Atmp_63831 = (Cmds_63685Len0-1);
Res_63833 = 0;
Res_63833 = 0;
while (1) {
if (!(Res_63833 <= HEX3Atmp_63831)) goto LA17;
I_63818 = Res_63833;
P_63819 = 0;
P_63819 = Startprocessaux_63603(Cmds_63685[I_63818], Options_63687);
LOC18 = nospwaitForExit(P_63819);
Result_63689 = ((LOC18 >= Result_63689) ? LOC18 : Result_63689);
Res_63833 += 1;
} LA17: ;
LA1: ;
return Result_63689;
}
N_NOINLINE(void, osprocInit)(void) {
}

