/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10602 TY10602;
typedef struct TNimType TNimType;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY42538 TY42538;
typedef struct TY189404 TY189404;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY33461 TY33461;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
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
struct TY42538 {
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
struct TY189404 {
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
typedef NimStringDesc* TY41331[1];
struct TY33461 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef NimStringDesc* TY111159[2];
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(TY42538, Newlineinfo_42712)(NimStringDesc* Filename_42714, NI Line_42715, NI Col_42716);
N_NIMCALL(void, Initdefines_59049)(void);
N_NIMCALL(void, Handlecmdline_191245)(void);
N_NIMCALL(NI32, Gettime_28416)(void);
N_NIMCALL(NI, nosparamCount)(void);
N_NIMCALL(void, Writecommandlineusage_69001)(void);
N_NIMCALL(void, Processcmdline_191204)(NU8 Pass_191206, NimStringDesc** Command_191208, NimStringDesc** Filename_191209);
N_NIMCALL(void, Initoptparser_189415)(NimStringDesc* Cmdline_189417, TY189404* Result);
N_NIMCALL(void, nponext)(TY189404* P_189783);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25216, NIM_CHAR Sub_25217, NI Start_25218);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(void, Processswitch_69012)(NimStringDesc* Switch_69014, NimStringDesc* Arg_69015, NU8 Pass_69016, TY42538 Info_69017);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_31256);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(TY189404* P_189913);
N_NIMCALL(void, Rawmessage_42971)(NU8 Msg_42973, NimStringDesc** Args_42975, NI Args_42975Len0);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_33460, TY33461* Result);
N_NIMCALL(void, Loadconfig_76004)(NimStringDesc* Project_76006);
N_NIMCALL(void, Initvars_66472)(void);
N_NIMCALL(void, Maincommand_187201)(NimStringDesc* Cmd_187203, NimStringDesc* Filename_187204);
N_NIMCALL(NimStringDesc*, Gcgetstatistics_3082)(void);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
static N_INLINE(void, rawEchoNL)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
N_NIMCALL(NI64, ntDiffTime)(NI32 A_28435, NI32 B_28436);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 X_19270);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_25268)(NimStringDesc* S_25270);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_33620, NimStringDesc* Ext_33621);
N_NIMCALL(void, Execexternalprogram_66570)(NimStringDesc* Cmd_66572);
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
N_NOINLINE(void, suggestInit)(void);
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
STRING_LITERAL(TMP191203, "", 0);
STRING_LITERAL(TMP191601, "command line", 12);
STRING_LITERAL(TMP193508, "\015\012", 2);
NimStringDesc* Arguments_191201;
extern TY10996 Gch_11014;
TY42538 Cmdlineinfo_191202;
extern TNimType* NTI189404; /* TOptParser */
extern NU32 Gglobaloptions_41079;
extern NimStringDesc* Projectpath_41113;
extern NI Gverbosity_41085;
extern NI Gerrorcounter_42565;
extern NU8 Gcmd_41084;
extern NI Glinescompiled_73285;
extern NI8 Gexitcode_41080;
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI32)((NI32)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI32)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(void, Processcmdline_191204)(NU8 Pass_191206, NimStringDesc** Command_191208, NimStringDesc** Filename_191209) {
TY189404 P_191210;
NI Bracketle_191212;
NimStringDesc* Key_191215;
NimStringDesc* Val_191216;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NIM_BOOL LOC16;
TY41331 LOC20;
memset((void*)&P_191210, 0, sizeof(P_191210));
Initoptparser_189415(((NimStringDesc*) &TMP191203), &P_191210);
P_191210.Sup.m_type = NTI189404;
while (1) {
nponext(&P_191210);
switch (P_191210.Kind) {
case ((NU8) 0):
goto LA1;
break;
case ((NU8) 2):
case ((NU8) 3):
Bracketle_191212 = 0;
Bracketle_191212 = nsuFindChar(P_191210.Key, 91, 0);
if (!(0 <= Bracketle_191212)) goto LA3;
Key_191215 = 0;
Key_191215 = copyStrLast(P_191210.Key, 0, (NI32)(Bracketle_191212 - 1));
Val_191216 = 0;
LOC5 = 0;
LOC6 = 0;
LOC6 = copyStr(P_191210.Key, (NI32)(Bracketle_191212 + 1));
LOC5 = rawNewString(LOC6->Sup.len + P_191210.Val->Sup.len + 1);
appendString(LOC5, LOC6);
appendChar(LOC5, 58);
appendString(LOC5, P_191210.Val);
Val_191216 = LOC5;
Processswitch_69012(Key_191215, Val_191216, Pass_191206, Cmdlineinfo_191202);
goto LA2;
LA3: ;
Processswitch_69012(P_191210.Key, P_191210.Val, Pass_191206, Cmdlineinfo_191202);
LA2: ;
break;
case ((NU8) 1):
if (!(((*Command_191208)) && ((*Command_191208))->Sup.len == 0)) goto LA8;
unsureAsgnRef((void**) &(*Command_191208), copyString(P_191210.Key));
goto LA7;
LA8: ;
if (!(((*Filename_191209)) && ((*Filename_191209))->Sup.len == 0)) goto LA10;
unsureAsgnRef((void**) &(*Filename_191209), nosUnixToNativePath(P_191210.Key));
goto LA1;
goto LA7;
LA10: ;
LA7: ;
break;
}
} LA1: ;
if (!(Pass_191206 == ((NU8) 1))) goto LA13;
asgnRefNoCycle((void**) &Arguments_191201, npocmdLineRest(&P_191210));
LOC16 = !(((Gglobaloptions_41079 &(1<<((((NU8) 14))&31)))!=0));
if (!(LOC16)) goto LA17;
LOC16 = !(((Arguments_191201) && (Arguments_191201)->Sup.len == 0));
LA17: ;
if (!LOC16) goto LA18;
memset((void*)&LOC20, 0, sizeof(LOC20));
Rawmessage_42971(((NU8) 54), LOC20, 0);
LA18: ;
LA13: ;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502) {
Write_3866(stdout, X_4502);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3866(stdout, ((NimStringDesc*) &TMP193508));
}
N_NIMCALL(void, Handlecmdline_191245)(void) {
NI32 Start_191247;
NI LOC2;
NimStringDesc* Command_191250;
NimStringDesc* Filename_191251;
TY33461 LOC8;
NimStringDesc* LOC12;
TY111159 LOC19;
NI32 LOC20;
NI64 LOC21;
NimStringDesc* Prog_191432;
NimStringDesc* LOC25;
NimStringDesc* LOC26;
Start_191247 = 0;
Start_191247 = Gettime_28416();
LOC2 = nosparamCount();
if (!(LOC2 == 0)) goto LA3;
Writecommandlineusage_69001();
goto LA1;
LA3: ;
Command_191250 = 0;
Command_191250 = copyString(((NimStringDesc*) &TMP191203));
Filename_191251 = 0;
Filename_191251 = copyString(((NimStringDesc*) &TMP191203));
Processcmdline_191204(((NU8) 0), &Command_191250, &Filename_191251);
if (!!(((Filename_191251) && (Filename_191251)->Sup.len == 0))) goto LA6;
memset((void*)&LOC8, 0, sizeof(LOC8));
nossplitFile(Filename_191251, &LOC8);
asgnRefNoCycle((void**) &Projectpath_41113, copyString(LOC8.Dir));
LA6: ;
Loadconfig_76004(Filename_191251);
Initvars_66472();
Command_191250 = copyString(((NimStringDesc*) &TMP191203));
Filename_191251 = copyString(((NimStringDesc*) &TMP191203));
Processcmdline_191204(((NU8) 1), &Command_191250, &Filename_191251);
Maincommand_187201(Command_191250, Filename_191251);
if (!(2 <= Gverbosity_41085)) goto LA10;
LOC12 = 0;
LOC12 = Gcgetstatistics_3082();
rawEcho(LOC12);
rawEchoNL();
LA10: ;
if (!(Gerrorcounter_42565 == 0)) goto LA14;
if (!!(((262208 &(1<<((Gcmd_41084)&31)))!=0))) goto LA17;
memset((void*)&LOC19, 0, sizeof(LOC19));
LOC19[0] = nimIntToStr(Glinescompiled_73285);
LOC20 = Gettime_28416();
LOC21 = ntDiffTime(LOC20, Start_191247);
LOC19[1] = nimInt64ToStr(LOC21);
Rawmessage_42971(((NU8) 224), LOC19, 2);
LA17: ;
if (!((Gglobaloptions_41079 &(1<<((((NU8) 14))&31)))!=0)) goto LA23;
Prog_191432 = 0;
LOC25 = 0;
LOC25 = nosChangeFileExt(Filename_191251, ((NimStringDesc*) &TMP191203));
Prog_191432 = Quoteifcontainswhite_25268(LOC25);
LOC26 = 0;
LOC26 = rawNewString(Prog_191432->Sup.len + Arguments_191201->Sup.len + 1);
appendString(LOC26, Prog_191432);
appendChar(LOC26, 32);
appendString(LOC26, Arguments_191201);
Execexternalprogram_66570(LOC26);
LA23: ;
LA14: ;
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
suggestInit();
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
asgnRefNoCycle((void**) &Arguments_191201, copyString(((NimStringDesc*) &TMP191203)));
Cmdlineinfo_191202 = Newlineinfo_42712(((NimStringDesc*) &TMP191601), -1, -1);
Initdefines_59049();
Handlecmdline_191245();
exit(((NI) (Gexitcode_41080)));
}

