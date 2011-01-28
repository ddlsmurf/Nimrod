/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10402 TY10402;
typedef struct TNimType TNimType;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY46536 TY46536;
typedef struct TY191404 TY191404;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY37660 TY37660;
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
struct TY46536 {
NI16 Line;
NI16 Col;
int Fileindex;
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
struct TY191404 {
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
typedef NimStringDesc* TY45320[1];
struct TY37660 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NimStringDesc* TY114148[2];
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
N_NIMCALL(TY46536, Newlineinfo_46578)(NimStringDesc* Filename_46580, NI Line_46581, NI Col_46582);
N_NIMCALL(void, Initdefines_63049)(void);
N_NIMCALL(void, Handlecmdline_193245)(void);
N_NIMCALL(NI, Gettime_27616)(void);
N_NIMCALL(NI, Paramcount_40428)(void);
N_NIMCALL(void, Writecommandlineusage_72001)(void);
N_NIMCALL(void, Processcmdline_193204)(NU8 Pass_193206, NimStringDesc** Command_193208, NimStringDesc** Filename_193209);
N_NIMCALL(void, Initoptparser_191415)(NimStringDesc* Cmdline_191417, TY191404* Result);
N_NIMCALL(void, nponext)(TY191404* P_191783);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25205, NIM_CHAR Sub_25206, NI Start_25207);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_1928, NI First_1929, NI Last_1930);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18287);
N_NIMCALL(void, Processswitch_72012)(NimStringDesc* Switch_72014, NimStringDesc* Arg_72015, NU8 Pass_72016, TY46536 Info_72017);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12826, void* Src_12827);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_35856);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY191404* P_191913);
N_NIMCALL(void, Rawmessage_46561)(NU8 Msg_46563, NimStringDesc** Args_46565, NI Args_46565Len0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_37659, TY37660* Result);
N_NIMCALL(void, Loadconfig_79004)(NimStringDesc* Project_79006);
N_NIMCALL(void, Initvars_69466)(void);
N_NIMCALL(void, Maincommand_189201)(NimStringDesc* Cmd_189203, NimStringDesc* Filename_189204);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_2682)(void);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094);
N_NIMCALL(void, Write_3658)(FILE* F_3660, NimStringDesc* S_3661);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19003);
N_NIMCALL(NI64, ntDiffTime)(NI A_27635, NI B_27636);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19067);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_25255)(NimStringDesc* S_25257);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_37820, NimStringDesc* Ext_37821);
N_NIMCALL(void, Execexternalprogram_69563)(NimStringDesc* Cmd_69565);
N_NOINLINE(void, nim__datInit)(void);
N_NOINLINE(void, systemInit)(void);
N_NOINLINE(void, parseutilsInit)(void);
N_NOINLINE(void, strutilsInit)(void);
N_NOINLINE(void, timesInit)(void);
N_NOINLINE(void, posixInit)(void);
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
STRING_LITERAL(TMP193203, "", 0);
STRING_LITERAL(TMP193601, "command line", 12);
STRING_LITERAL(TMP195500, "\012", 1);
STRING_LITERAL(TMP195501, "./", 2);
NimStringDesc* Arguments_193201;
extern TY10790 Gch_10808;
TY46536 Cmdlineinfo_193202;
extern TNimType* NTI191404; /* TOptParser */
extern NU32 Gglobaloptions_45078;
extern NimStringDesc* Projectpath_45112;
extern NI Gverbosity_45084;
extern NU8 Gcmd_45083;
extern NI Gerrorcounter_46544;
extern NI Glinescompiled_76285;
extern NI8 Gexitcode_45079;
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
static N_INLINE(void, appendString)(NimStringDesc* Dest_18392, NimStringDesc* Src_18393) {
memcpy(((NCSTRING) (&(*Dest_18392).data[((*Dest_18392).Sup.len)-0])), ((NCSTRING) ((*Src_18393).data)), ((int) ((NI32)((NI32)((*Src_18393).Sup.len + 1) * 1))));
(*Dest_18392).Sup.len += (*Src_18393).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18409, NIM_CHAR C_18410) {
(*Dest_18409).data[((*Dest_18409).Sup.len)-0] = C_18410;
(*Dest_18409).data[((NI32)((*Dest_18409).Sup.len + 1))-0] = 0;
(*Dest_18409).Sup.len += 1;
}
N_NIMCALL(void, Processcmdline_193204)(NU8 Pass_193206, NimStringDesc** Command_193208, NimStringDesc** Filename_193209) {
TY191404 P_193210;
NI Bracketle_193212;
NimStringDesc* Key_193215;
NimStringDesc* Val_193216;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NIM_BOOL LOC16;
TY45320 LOC20;
memset((void*)&P_193210, 0, sizeof(P_193210));
Initoptparser_191415(((NimStringDesc*) &TMP193203), &P_193210);
P_193210.Sup.m_type = NTI191404;
while (1) {
nponext(&P_193210);
switch (P_193210.Kind) {
case ((NU8) 0):
goto LA1;
break;
case ((NU8) 2):
case ((NU8) 3):
Bracketle_193212 = 0;
Bracketle_193212 = nsuFindChar(P_193210.Key, 91, 0);
if (!(0 <= Bracketle_193212)) goto LA3;
Key_193215 = 0;
Key_193215 = copyStrLast(P_193210.Key, 0, (NI32)(Bracketle_193212 - 1));
Val_193216 = 0;
LOC5 = 0;
LOC6 = 0;
LOC6 = copyStr(P_193210.Key, (NI32)(Bracketle_193212 + 1));
LOC5 = rawNewString(LOC6->Sup.len + P_193210.Val->Sup.len + 1);
appendString(LOC5, LOC6);
appendChar(LOC5, 58);
appendString(LOC5, P_193210.Val);
Val_193216 = LOC5;
Processswitch_72012(Key_193215, Val_193216, Pass_193206, Cmdlineinfo_193202);
goto LA2;
LA3: ;
Processswitch_72012(P_193210.Key, P_193210.Val, Pass_193206, Cmdlineinfo_193202);
LA2: ;
break;
case ((NU8) 1):
if (!(((*Command_193208)) && ((*Command_193208))->Sup.len == 0)) goto LA8;
unsureAsgnRef((void**) &(*Command_193208), copyString(P_193210.Key));
goto LA7;
LA8: ;
if (!(((*Filename_193209)) && ((*Filename_193209))->Sup.len == 0)) goto LA10;
unsureAsgnRef((void**) &(*Filename_193209), nosUnixToNativePath(P_193210.Key));
goto LA1;
goto LA7;
LA10: ;
LA7: ;
break;
}
} LA1: ;
if (!(Pass_193206 == ((NU8) 1))) goto LA13;
asgnRefNoCycle((void**) &Arguments_193201, npocmdLineRest(&P_193210));
LOC16 = !(((Gglobaloptions_45078 &(1<<((((NU8) 14))&31)))!=0));
if (!(LOC16)) goto LA17;
LOC16 = !(((Arguments_193201) && (Arguments_193201)->Sup.len == 0));
LA17: ;
if (!LOC16) goto LA18;
memset((void*)&LOC20, 0, sizeof(LOC20));
Rawmessage_46561(((NU8) 54), LOC20, 0);
LA18: ;
LA13: ;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4094) {
Write_3658(stdout, X_4094);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3658(stdout, ((NimStringDesc*) &TMP195500));
}
N_NIMCALL(void, Handlecmdline_193245)(void) {
NI Start_193247;
NI LOC2;
NimStringDesc* Command_193250;
NimStringDesc* Filename_193251;
TY37660 LOC8;
NimStringDesc* LOC12;
NIM_BOOL LOC14;
TY114148 LOC18;
NI LOC19;
NI64 LOC20;
NimStringDesc* Prog_193434;
NimStringDesc* LOC24;
NimStringDesc* LOC25;
NimStringDesc* LOC26;
NimStringDesc* LOC27;
Start_193247 = 0;
Start_193247 = Gettime_27616();
LOC2 = Paramcount_40428();
if (!(LOC2 == 0)) goto LA3;
Writecommandlineusage_72001();
goto LA1;
LA3: ;
Command_193250 = 0;
Command_193250 = copyString(((NimStringDesc*) &TMP193203));
Filename_193251 = 0;
Filename_193251 = copyString(((NimStringDesc*) &TMP193203));
Processcmdline_193204(((NU8) 0), &Command_193250, &Filename_193251);
if (!!(((Filename_193251) && (Filename_193251)->Sup.len == 0))) goto LA6;
memset((void*)&LOC8, 0, sizeof(LOC8));
nossplitFile(Filename_193251, &LOC8);
asgnRefNoCycle((void**) &Projectpath_45112, copyString(LOC8.Dir));
LA6: ;
Loadconfig_79004(Filename_193251);
Initvars_69466();
Command_193250 = copyString(((NimStringDesc*) &TMP193203));
Filename_193251 = copyString(((NimStringDesc*) &TMP193203));
Processcmdline_193204(((NU8) 1), &Command_193250, &Filename_193251);
Maincommand_189201(Command_193250, Filename_193251);
if (!(2 <= Gverbosity_45084)) goto LA10;
LOC12 = 0;
LOC12 = Gcgetstatistics_2682();
rawEcho(LOC12);
rawEchoNL();
LA10: ;
LOC14 = !(((262208 &(1<<((Gcmd_45083)&31)))!=0));
if (!(LOC14)) goto LA15;
LOC14 = (Gerrorcounter_46544 == 0);
LA15: ;
if (!LOC14) goto LA16;
memset((void*)&LOC18, 0, sizeof(LOC18));
LOC18[0] = nimIntToStr(Glinescompiled_76285);
LOC19 = Gettime_27616();
LOC20 = ntDiffTime(LOC19, Start_193247);
LOC18[1] = nimInt64ToStr(LOC20);
Rawmessage_46561(((NU8) 225), LOC18, 2);
LA16: ;
if (!((Gglobaloptions_45078 &(1<<((((NU8) 14))&31)))!=0)) goto LA22;
Prog_193434 = 0;
LOC24 = 0;
LOC25 = 0;
LOC25 = nosChangeFileExt(Filename_193251, ((NimStringDesc*) &TMP193203));
LOC26 = 0;
LOC26 = Quoteifcontainswhite_25255(LOC25);
LOC24 = rawNewString(LOC26->Sup.len + 2);
appendString(LOC24, ((NimStringDesc*) &TMP195501));
appendString(LOC24, LOC26);
Prog_193434 = LOC24;
LOC27 = 0;
LOC27 = rawNewString(Prog_193434->Sup.len + Arguments_193201->Sup.len + 1);
appendString(LOC27, Prog_193434);
appendChar(LOC27, 32);
appendString(LOC27, Arguments_193201);
Execexternalprogram_69563(LOC27);
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
timesInit();
posixInit();
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
asgnRefNoCycle((void**) &Arguments_193201, copyString(((NimStringDesc*) &TMP193203)));
Cmdlineinfo_193202 = Newlineinfo_46578(((NimStringDesc*) &TMP193601), -1, -1);
Initdefines_63049();
Handlecmdline_193245();
exit(((NI) (Gexitcode_45079)));
}

