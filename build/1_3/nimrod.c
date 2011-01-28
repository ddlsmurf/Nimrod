/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10202 TY10202;
typedef struct TNimType TNimType;
typedef struct TY10218 TY10218;
typedef struct TY10590 TY10590;
typedef struct TY10214 TY10214;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
typedef struct TY42536 TY42536;
typedef struct TY187404 TY187404;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY33460 TY33460;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY42536 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TY187404 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY41320[1];
struct TY33460 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NimStringDesc* TY110148[2];
typedef NI TY8214[16];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12618, void* Src_12619);
static N_INLINE(TY10202*, Usrtocell_11012)(void* Usr_11014);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12001)(TY10202* C_12003);
N_NOINLINE(void, Addzct_11001)(TY10218* S_11004, TY10202* C_11005);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18108);
N_NIMCALL(TY42536, Newlineinfo_42578)(NimStringDesc* Filename_42580, NI Line_42581, NI Col_42582);
N_NIMCALL(void, Initdefines_59049)(void);
N_NIMCALL(void, Handlecmdline_189245)(void);
N_NIMCALL(NI32, Gettime_28416)(void);
N_NIMCALL(NI, nosparamCount)(void);
N_NIMCALL(void, Writecommandlineusage_68001)(void);
N_NIMCALL(void, Processcmdline_189204)(NU8 Pass_189206, NimStringDesc** Command_189208, NimStringDesc** Filename_189209);
N_NIMCALL(void, Initoptparser_187415)(NimStringDesc* Cmdline_187417, TY187404* Result);
N_NIMCALL(void, nponext)(TY187404* P_187783);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25205, NIM_CHAR Sub_25206, NI Start_25207);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18192, NimStringDesc* Src_18193);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18209, NIM_CHAR C_18210);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18087);
N_NIMCALL(void, Processswitch_68012)(NimStringDesc* Switch_68014, NimStringDesc* Arg_68015, NU8 Pass_68016, TY42536 Info_68017);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12626, void* Src_12627);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_31256);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY187404* P_187913);
N_NIMCALL(void, Rawmessage_42561)(NU8 Msg_42563, NimStringDesc** Args_42565, NI Args_42565Len0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_33459, TY33460* Result);
N_NIMCALL(void, Loadconfig_75004)(NimStringDesc* Project_75006);
N_NIMCALL(void, Initvars_65466)(void);
N_NIMCALL(void, Maincommand_185201)(NimStringDesc* Cmd_185203, NimStringDesc* Filename_185204);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_2682)(void);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_18803);
N_NIMCALL(NI64, ntDiffTime)(NI32 A_28435, NI32 B_28436);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_18867);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_25255)(NimStringDesc* S_25257);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_33620, NimStringDesc* Ext_33621);
N_NIMCALL(void, Execexternalprogram_65563)(NimStringDesc* Cmd_65565);
N_NOINLINE(void, nim__datInit)(void);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, parseutilsInit)(void);
N_NOINLINE(void, strutilsInit)(void);
N_NOINLINE(void, winleanInit)(void);
N_NOINLINE(void, timesInit)(void);
N_NOINLINE(void, osInit)(void);
N_NOINLINE(void, listsInit)(void);
N_NOINLINE(void, nhashesInit)(void);
N_NOINLINE(void, nstrtabsInit)(void);
N_NOINLINE(void, optionsInit)(void);
N_NOINLINE(void, msgsInit)(void);
N_NOINLINE(void, nversionInit)(void);
N_NOINLINE(void, crcInit)(void);
N_NOINLINE(void, platformInit)(void);
N_NOINLINE(void, ropesInit)(void);
N_NOINLINE(void, identsInit)(void);
N_NOINLINE(void, astInit)(void);
N_NOINLINE(void, rodutilsInit)(void);
N_NOINLINE(void, astalgoInit)(void);
N_NOINLINE(void, condsymsInit)(void);
N_NOINLINE(void, hashesInit)(void);
N_NOINLINE(void, strtabsInit)(void);
N_NOINLINE(void, streamsInit)(void);
N_NOINLINE(void, osprocInit)(void);
N_NOINLINE(void, extccompInit)(void);
N_NOINLINE(void, wordrecgInit)(void);
N_NOINLINE(void, commandsInit)(void);
N_NOINLINE(void, llstreamInit)(void);
N_NOINLINE(void, lexbaseInit)(void);
N_NOINLINE(void, scannerInit)(void);
N_NOINLINE(void, nimconfInit)(void);
N_NOINLINE(void, pnimsynInit)(void);
N_NOINLINE(void, pbracesInit)(void);
N_NOINLINE(void, rnimsynInit)(void);
N_NOINLINE(void, filtersInit)(void);
N_NOINLINE(void, ptmplsynInit)(void);
N_NOINLINE(void, syntaxesInit)(void);
N_NOINLINE(void, rodreadInit)(void);
N_NOINLINE(void, treesInit)(void);
N_NOINLINE(void, typesInit)(void);
N_NOINLINE(void, mathInit)(void);
N_NOINLINE(void, magicsysInit)(void);
N_NOINLINE(void, bitsetsInit)(void);
N_NOINLINE(void, nimsetsInit)(void);
N_NOINLINE(void, passesInit)(void);
N_NOINLINE(void, treetabInit)(void);
N_NOINLINE(void, semdataInit)(void);
N_NOINLINE(void, lookupsInit)(void);
N_NOINLINE(void, importerInit)(void);
N_NOINLINE(void, rodwriteInit)(void);
N_NOINLINE(void, semfoldInit)(void);
N_NOINLINE(void, evalsInit)(void);
N_NOINLINE(void, procfindInit)(void);
N_NOINLINE(void, pragmasInit)(void);
N_NOINLINE(void, semInit)(void);
N_NOINLINE(void, rstInit)(void);
N_NOINLINE(void, highliteInit)(void);
N_NOINLINE(void, docgenInit)(void);
N_NOINLINE(void, ccgutilsInit)(void);
N_NOINLINE(void, cgmethInit)(void);
N_NOINLINE(void, cgenInit)(void);
N_NOINLINE(void, ecmasgenInit)(void);
N_NOINLINE(void, interactInit)(void);
N_NOINLINE(void, passauxInit)(void);
N_NOINLINE(void, dependsInit)(void);
N_NOINLINE(void, transfInit)(void);
N_NOINLINE(void, mainInit)(void);
N_NOINLINE(void, parseoptInit)(void);
N_NOINLINE(void, nimrodInit)(void);
STRING_LITERAL(TMP189203, "", 0);
STRING_LITERAL(TMP189601, "command line", 12);
STRING_LITERAL(TMP191500, "\015\012", 2);
NimStringDesc* Arguments_189201;
extern TY10590 Gch_10608;
TY42536 Cmdlineinfo_189202;
extern TNimType* NTI187404; /* TOptParser */
extern NU32 Gglobaloptions_41078;
extern NimStringDesc* Projectpath_41112;
extern NI Gverbosity_41084;
extern NU8 Gcmd_41083;
extern NI Gerrorcounter_42544;
extern NI Glinescompiled_72285;
extern NI8 Gexitcode_41079;
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
static N_INLINE(void, appendString)(NimStringDesc* Dest_18192, NimStringDesc* Src_18193) {
memcpy(((NCSTRING) (&(*Dest_18192).data[((*Dest_18192).Sup.len)-0])), ((NCSTRING) ((*Src_18193).data)), ((NI32) ((NI32)((NI32)((*Src_18193).Sup.len + 1) * 1))));
(*Dest_18192).Sup.len += (*Src_18193).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18209, NIM_CHAR C_18210) {
(*Dest_18209).data[((*Dest_18209).Sup.len)-0] = C_18210;
(*Dest_18209).data[((NI32)((*Dest_18209).Sup.len + 1))-0] = 0;
(*Dest_18209).Sup.len += 1;
}
N_NIMCALL(void, Processcmdline_189204)(NU8 Pass_189206, NimStringDesc** Command_189208, NimStringDesc** Filename_189209) {
TY187404 P_189210;
NI Bracketle_189212;
NimStringDesc* Key_189215;
NimStringDesc* Val_189216;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NIM_BOOL LOC16;
TY41320 LOC20;
memset((void*)&P_189210, 0, sizeof(P_189210));
Initoptparser_187415(((NimStringDesc*) &TMP189203), &P_189210);
P_189210.Sup.m_type = NTI187404;
while (1) {
nponext(&P_189210);
switch (P_189210.Kind) {
case ((NU8) 0):
goto LA1;
break;
case ((NU8) 2):
case ((NU8) 3):
Bracketle_189212 = 0;
Bracketle_189212 = nsuFindChar(P_189210.Key, 91, 0);
if (!(0 <= Bracketle_189212)) goto LA3;
Key_189215 = 0;
Key_189215 = copyStrLast(P_189210.Key, 0, (NI32)(Bracketle_189212 - 1));
Val_189216 = 0;
LOC5 = 0;
LOC6 = 0;
LOC6 = copyStr(P_189210.Key, (NI32)(Bracketle_189212 + 1));
LOC5 = rawNewString(LOC6->Sup.len + P_189210.Val->Sup.len + 1);
appendString(LOC5, LOC6);
appendChar(LOC5, 58);
appendString(LOC5, P_189210.Val);
Val_189216 = LOC5;
Processswitch_68012(Key_189215, Val_189216, Pass_189206, Cmdlineinfo_189202);
goto LA2;
LA3: ;
Processswitch_68012(P_189210.Key, P_189210.Val, Pass_189206, Cmdlineinfo_189202);
LA2: ;
break;
case ((NU8) 1):
if (!(((*Command_189208)) && ((*Command_189208))->Sup.len == 0)) goto LA8;
unsureAsgnRef((void**) &(*Command_189208), copyString(P_189210.Key));
goto LA7;
LA8: ;
if (!(((*Filename_189209)) && ((*Filename_189209))->Sup.len == 0)) goto LA10;
unsureAsgnRef((void**) &(*Filename_189209), nosUnixToNativePath(P_189210.Key));
goto LA1;
goto LA7;
LA10: ;
LA7: ;
break;
}
} LA1: ;
if (!(Pass_189206 == ((NU8) 1))) goto LA13;
asgnRefNoCycle((void**) &Arguments_189201, npocmdLineRest(&P_189210));
LOC16 = !(((Gglobaloptions_41078 &(1<<((((NU8) 14))&31)))!=0));
if (!(LOC16)) goto LA17;
LOC16 = !(((Arguments_189201) && (Arguments_189201)->Sup.len == 0));
LA17: ;
if (!LOC16) goto LA18;
memset((void*)&LOC20, 0, sizeof(LOC20));
Rawmessage_42561(((NU8) 54), LOC20, 0);
LA18: ;
LA13: ;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094) {
Write_3658(stdout, X_4094);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3658(stdout, ((NimStringDesc*) &TMP191500));
}
N_NIMCALL(void, Handlecmdline_189245)(void) {
NI32 Start_189247;
NI LOC2;
NimStringDesc* Command_189250;
NimStringDesc* Filename_189251;
TY33460 LOC8;
NimStringDesc* LOC12;
NIM_BOOL LOC14;
TY110148 LOC18;
NI32 LOC19;
NI64 LOC20;
NimStringDesc* Prog_189434;
NimStringDesc* LOC24;
NimStringDesc* LOC25;
Start_189247 = 0;
Start_189247 = Gettime_28416();
LOC2 = nosparamCount();
if (!(LOC2 == 0)) goto LA3;
Writecommandlineusage_68001();
goto LA1;
LA3: ;
Command_189250 = 0;
Command_189250 = copyString(((NimStringDesc*) &TMP189203));
Filename_189251 = 0;
Filename_189251 = copyString(((NimStringDesc*) &TMP189203));
Processcmdline_189204(((NU8) 0), &Command_189250, &Filename_189251);
if (!!(((Filename_189251) && (Filename_189251)->Sup.len == 0))) goto LA6;
memset((void*)&LOC8, 0, sizeof(LOC8));
nossplitFile(Filename_189251, &LOC8);
asgnRefNoCycle((void**) &Projectpath_41112, copyString(LOC8.Dir));
LA6: ;
Loadconfig_75004(Filename_189251);
Initvars_65466();
Command_189250 = copyString(((NimStringDesc*) &TMP189203));
Filename_189251 = copyString(((NimStringDesc*) &TMP189203));
Processcmdline_189204(((NU8) 1), &Command_189250, &Filename_189251);
Maincommand_185201(Command_189250, Filename_189251);
if (!(2 <= Gverbosity_41084)) goto LA10;
LOC12 = 0;
LOC12 = Gcgetstatistics_2682();
rawEcho(LOC12);
rawEchoNL();
LA10: ;
LOC14 = !(((1073742848 &(1<<((Gcmd_41083)&31)))!=0));
if (!(LOC14)) goto LA15;
LOC14 = (Gerrorcounter_42544 == 0);
LA15: ;
if (!LOC14) goto LA16;
memset((void*)&LOC18, 0, sizeof(LOC18));
LOC18[0] = nimIntToStr(Glinescompiled_72285);
LOC19 = Gettime_28416();
LOC20 = ntDiffTime(LOC19, Start_189247);
LOC18[1] = nimInt64ToStr(LOC20);
Rawmessage_42561(((NU8) 225), LOC18, 2);
LA16: ;
if (!((Gglobaloptions_41078 &(1<<((((NU8) 14))&31)))!=0)) goto LA22;
Prog_189434 = 0;
LOC24 = 0;
LOC24 = nosChangeFileExt(Filename_189251, ((NimStringDesc*) &TMP189203));
Prog_189434 = Quoteifcontainswhite_25255(LOC24);
LOC25 = 0;
LOC25 = rawNewString(Prog_189434->Sup.len + Arguments_189201->Sup.len + 1);
appendString(LOC25, Prog_189434);
appendChar(LOC25, 32);
appendString(LOC25, Arguments_189201);
Execexternalprogram_65563(LOC25);
LA22: ;
LA1: ;
}
int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMain)(void) {
  nim__datInit();
  systemInit();
parseutilsInit();
strutilsInit();
winleanInit();
timesInit();
osInit();
listsInit();
nhashesInit();
nstrtabsInit();
optionsInit();
msgsInit();
nversionInit();
crcInit();
platformInit();
ropesInit();
identsInit();
astInit();
rodutilsInit();
astalgoInit();
condsymsInit();
hashesInit();
strtabsInit();
streamsInit();
osprocInit();
extccompInit();
wordrecgInit();
commandsInit();
llstreamInit();
lexbaseInit();
scannerInit();
nimconfInit();
pnimsynInit();
pbracesInit();
rnimsynInit();
filtersInit();
ptmplsynInit();
syntaxesInit();
rodreadInit();
treesInit();
typesInit();
mathInit();
magicsysInit();
bitsetsInit();
nimsetsInit();
passesInit();
treetabInit();
semdataInit();
lookupsInit();
importerInit();
rodwriteInit();
semfoldInit();
evalsInit();
procfindInit();
pragmasInit();
semInit();
rstInit();
highliteInit();
docgenInit();
ccgutilsInit();
cgmethInit();
cgenInit();
ecmasgenInit();
interactInit();
passauxInit();
dependsInit();
transfInit();
mainInit();
parseoptInit();
nimrodInit();
}
int main(int argc, char** args, char** env) {
  cmdLine = args;
  cmdCount = argc;
  gEnv = env;
  NimMain();
  return 0;
}
N_NOINLINE(void, nimrodInit)(void) {
asgnRefNoCycle((void**) &Arguments_189201, copyString(((NimStringDesc*) &TMP189203)));
Cmdlineinfo_189202 = Newlineinfo_42578(((NimStringDesc*) &TMP189601), -1, -1);
Initdefines_59049();
Handlecmdline_189245();
exit(((NI) (Gexitcode_41079)));
}

