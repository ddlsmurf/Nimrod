/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46036 TY46036;
typedef struct TY46448 TY46448;
typedef struct TY42536 TY42536;
typedef struct TY38019 TY38019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY38013 TY38013;
typedef struct TY10202 TY10202;
typedef struct TY10218 TY10218;
typedef struct TY10590 TY10590;
typedef struct TY10214 TY10214;
typedef struct TY10210 TY10210;
typedef struct TY10588 TY10588;
typedef struct TNimObject TNimObject;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef NimStringDesc* TY68026[3];
struct TY46036 {
NimStringDesc* Name;
NimStringDesc* Pardir;
NimStringDesc* Dllfrmt;
NimStringDesc* Altdirsep;
NimStringDesc* Objext;
NimStringDesc* Newline;
NimStringDesc* Pathsep;
NimStringDesc* Dirsep;
NimStringDesc* Scriptext;
NimStringDesc* Curdir;
NimStringDesc* Exeext;
NimStringDesc* Extsep;
NU8 Props;
};
typedef TY46036 TY46054[21];
struct TY46448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY46448 TY46461[12];
struct TY42536 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY43016[4];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY38019 {
TNimType* m_type;
TY38013* Head;
TY38013* Tail;
NI Counter;
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
typedef NimStringDesc* TY42498[13];
typedef NimStringDesc* TY42478[15];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct TY38013 {
  TNimObject Sup;
TY38013* Prev;
TY38013* Next;
};
typedef NI TY8214[8];
struct TY10210 {
TY10210* Next;
NI Key;
TY8214 Bits;
};
N_NIMCALL(void, Messageout_42554)(NimStringDesc* S_42556);
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_68021)(void);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* Formatstr_23943, NimStringDesc** A_23945, NI A_23945Len0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18108);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18192, NimStringDesc* Src_18193);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18087);
N_NIMCALL(NU8, Whichkeyword_67474)(NimStringDesc* Id_67476);
N_NIMCALL(void, Expectarg_68211)(NimStringDesc* Switch_68213, NimStringDesc* Arg_68214, NU8 Pass_68215, TY42536 Info_68216);
N_NIMCALL(void, Limessage_42566)(TY42536 Info_42568, NU8 Msg_42569, NimStringDesc* Arg_42570);
N_NIMCALL(NimStringDesc*, Processpath_68345)(NimStringDesc* Path_68347);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* Path_31256);
N_NIMCALL(NimStringDesc*, Getprefixdir_41108)(void);
N_NIMCALL(NIM_BOOL, Contains_38159)(TY38019* List_38161, NimStringDesc* Data_38162);
N_NIMCALL(void, Prependstr_38071)(TY38019* List_38074, NimStringDesc* Data_38075);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12618, void* Src_12619);
static N_INLINE(TY10202*, Usrtocell_11012)(void* Usr_11014);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12001)(TY10202* C_12003);
N_NOINLINE(void, Addzct_11001)(TY10218* S_11004, TY10202* C_11005);
N_NIMCALL(void, Definesymbol_59053)(NimStringDesc* Symbol_59055);
N_NIMCALL(void, Undefsymbol_59056)(NimStringDesc* Symbol_59058);
N_NIMCALL(void, Processcompile_68353)(NimStringDesc* Filename_68355);
N_NIMCALL(NimStringDesc*, Findfile_41089)(NimStringDesc* F_41091);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_33620, NimStringDesc* Ext_33621);
N_NIMCALL(void, Addexternalfiletocompile_65544)(NimStringDesc* Filename_65546);
N_NIMCALL(void, Addfiletolink_65559)(NimStringDesc* Filename_65561);
N_NIMCALL(NimStringDesc*, Completecfilepath_65500)(NimStringDesc* Cfile_65502, NIM_BOOL Createsubdir_65503);
N_NIMCALL(void, Expectnoarg_68217)(NimStringDesc* Switch_68219, NimStringDesc* Arg_68220, NU8 Pass_68221, TY42536 Info_68222);
N_NIMCALL(void, Processonoffswitch_68159)(NU32 Op_68161, NimStringDesc* Arg_68162, NU8 Pass_68163, TY42536 Info_68164);
N_NIMCALL(void, Processspecificnote_68223)(NimStringDesc* Arg_68225, NU8 State_68226, NU8 Pass_68227, TY42536 Info_68228);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(void, Invalidcmdlineoption_68077)(NU8 Pass_68079, NimStringDesc* Switch_68080, TY42536 Info_68081);
N_NIMCALL(NI, Findstr_67477)(NimStringDesc** A_67480, NI A_67480Len0, NimStringDesc* S_67481);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_1924, NI First_1925);
N_NIMCALL(void, Processonoffswitchg_68185)(NU32 Op_68187, NimStringDesc* Arg_68188, NU8 Pass_68189, TY42536 Info_68190);
N_NIMCALL(void, Listsymbols_59062)(void);
N_NIMCALL(void, Addcompileoption_65460)(NimStringDesc* Option_65462);
N_NIMCALL(void, Addlinkoption_65454)(NimStringDesc* Option_65456);
N_NIMCALL(void, Addimplicitmod_41141)(NimStringDesc* Filename_41143);
N_NIMCALL(NU8, Nametoos_46564)(NimStringDesc* Name_46566);
N_NIMCALL(void, Settarget_46574)(NU8 O_46576, NU8 C_46577);
N_NIMCALL(void, Initdefines_59049)(void);
N_NIMCALL(NU8, Nametocpu_46567)(NimStringDesc* Name_46569);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_24425);
N_NIMCALL(void, Writeversioninfo_68059)(NU8 Pass_68061);
N_NIMCALL(void, Writeadvancedusage_68043)(NU8 Pass_68045);
N_NIMCALL(void, Helponerror_68031)(NU8 Pass_68033);
N_NIMCALL(void, Splitswitch_68082)(NimStringDesc* Switch_68084, NimStringDesc** Cmd_68086, NimStringDesc** Arg_68087, NU8 Pass_68088, TY42536 Info_68089);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_12626, void* Src_12627);
N_NIMCALL(void, Putenv_34231)(NimStringDesc* Key_34233, NimStringDesc* Val_34234);
N_NIMCALL(void, Setcc_65397)(NimStringDesc* Ccname_65399);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* S_25205, NIM_CHAR Sub_25206, NI Start_25207);
N_NIMCALL(void, Setconfigvar_41137)(NimStringDesc* Key_41139, NimStringDesc* Val_41140);
STRING_LITERAL(TMP189629, "Nimrod Compiler Version $1 (2011-01-18) [$2: $3]\015\012Copyright (c)"
" 2004-2011 by Andreas Rumpf\015\012", 92);
STRING_LITERAL(TMP189630, "0.8.11", 6);
extern NIM_CONST TY46054 Os_46053;
extern NIM_CONST TY46461 Cpu_46460;
STRING_LITERAL(TMP189631, "Usage:\015\012  nimrod command [options] inputfile [arguments]\015\012Comma"
"nd:\015\012  compile, c                compile project with default co"
"de generator (C)\015\012  compileToC, cc            compile project wi"
"th C code generator\015\012  doc                       generate the do"
"cumentation for inputfile\015\012  rst2html                  converts "
"a reStructuredText file to HTML\015\012  rst2tex                   con"
"verts a reStructuredText file to TeX\015\012Arguments:\015\012  arguments ar"
"e passed to the program being run (if --run option is selected)\015"
"\012Options:\015\012  -p, --path:PATH           add path to search paths\015"
"\012  -o, --out:FILE            set the output filename\015\012  -d, --de"
"fine:SYMBOL       define a conditional symbol\015\012  -u, --undef:SYM"
"BOL        undefine a conditional symbol\015\012  -f, --forceBuild    "
"      force rebuilding of all modules\015\012  --stackTrace:on|off    "
"   turn stack tracing on|off\015\012  --lineTrace:on|off        turn l"
"ine tracing on|off\015\012  --debugger:on|off         turn Embedded Ni"
"mrod Debugger on|off\015\012  -x, --checks:on|off       turn all runti"
"me checks on|off\015\012  --objChecks:on|off        turn obj conversio"
"n checks on|off\015\012  --fieldChecks:on|off      turn case variant f"
"ield checks on|off\015\012  --rangeChecks:on|off      turn range check"
"s on|off\015\012  --boundChecks:on|off      turn bound checks on|off\015\012"
"  --overflowChecks:on|off   turn int over-/underflow checks on|o"
"ff\015\012  -a, --assertions:on|off   turn assertions on|off\015\012  --floa"
"tChecks:on|off      turn all floating point (NaN/Inf) checks on|"
"off\015\012  --nanChecks:on|off        turn NaN checks on|off\015\012  --inf"
"Checks:on|off        turn Inf checks on|off\015\012  --deadCodeElim:on"
"|off     whole program dead code elimination on|off\015\012  --opt:non"
"e|speed|size     optimize not at all or for speed|size\015\012  --app:"
"console|gui|lib     generate a console|GUI application|dynamic l"
"ibrary\015\012  -r, --run                 run the compiled program wit"
"h given arguments\015\012  --advanced                show advanced com"
"mand line switches\015\012  -h, --help                show this help\015\012", 1983);
STRING_LITERAL(TMP189643, "nimrod", 6);
STRING_LITERAL(TMP189644, "lib", 3);
STRING_LITERAL(TMP189645, "", 0);
STRING_LITERAL(TMP189661, "boehmgc", 7);
STRING_LITERAL(TMP189662, "nogc", 4);
extern NIM_CONST TY42498 Hintstostr_42497;
extern NIM_CONST TY42478 Warningstostr_42477;
STRING_LITERAL(TMP189663, "endb", 4);
STRING_LITERAL(TMP189664, "profiler", 8);
STRING_LITERAL(TMP189665, "guiapp", 6);
STRING_LITERAL(TMP189666, "library", 7);
STRING_LITERAL(TMP189670, "Advanced commands:\015\012  compileToOC, oc           compile project"
" to Objective C code\015\012  run                       run the projec"
"t (with Tiny C backend; buggy!)\015\012  pretty                    pre"
"tty print the inputfile\015\012  genDepend                 generate a "
"DOT file containing the\015\012                            module depe"
"ndency graph\015\012  listDef                   list all defined condi"
"tionals and exit\015\012  check                     checks the project"
" for syntax and semantic\015\012  parse                     parses a s"
"ingle file (for debugging Nimrod)\015\012Advanced options:\015\012  -w, --wa"
"rnings:on|off     turn all warnings on|off\015\012  --warning[X]:on|of"
"f       turn specific warning X on|off\015\012  --hints:on|off        "
"    turn all hints on|off\015\012  --hint[X]:on|off          turn spec"
"ific hint X on|off\015\012  --lib:PATH                set the system l"
"ibrary path\015\012  -c, --compileOnly         compile only; do not as"
"semble or link\015\012  --noLinking               compile but do not l"
"ink\015\012  --noMain                  do not generate a main procedur"
"e\015\012  --genScript               generate a compile script (in the"
" \'nimcache\'\015\012                            subdirectory named \'com"
"pile_$project$scriptext\')\015\012  --os:SYMBOL               set the t"
"arget operating system (cross-compilation)\015\012  --cpu:SYMBOL      "
"        set the target processor (cross-compilation)\015\012  --debugi"
"nfo               enables debug information\015\012  -t, --passc:OPTIO"
"N        pass an option to the C compiler\015\012  -l, --passl:OPTION "
"       pass an option to the linker\015\012  --genMapping             "
" generate a mapping file containing\015\012                           "
" (Nimrod, mangled) identifier pairs\015\012  --lineDir:on|off         "
" generation of #line directive on|off\015\012  --checkpoints:on|off   "
"   turn checkpoints on|off; for debugging Nimrod\015\012  --skipCfg   "
"              do not read the general configuration file\015\012  --sk"
"ipProjCfg             do not read the project\'s configuration fi"
"le\015\012  --gc:refc|boehm|none      use Nimrod\'s native GC|Boehm GC|"
"no GC\015\012  --index:FILE              use FILE to generate a docume"
"nation index file\015\012  --putenv:key=value        set an environmen"
"t variable\015\012  --listCmd                 list the commands used t"
"o execute external programs\015\012  --parallelBuild=0|1|...   perform"
" a parallel build\015\012                            value = number of"
" processors (0 for auto-detect)\015\012  --verbosity:0|1|2|3       set"
" Nimrod\'s verbosity level (0 is default)\015\012  -v, --version       "
"      show detailed version information\015\012", 2472);
NIM_BOOL Helpwritten_68028;
NIM_BOOL Versionwritten_68029;
NIM_BOOL Advhelpwritten_68030;
extern NU8 Hostos_46563;
extern NU8 Hostcpu_46561;
extern NimStringDesc* Libpath_41111;
extern TY38019 Searchpaths_41080;
extern NimStringDesc* Outfile_41081;
extern TY10590 Gch_10608;
extern NU32 Gglobaloptions_41078;
extern NU32 Goptions_41076;
extern NU32 Gnotes_42543;
extern NimStringDesc* Gindexfile_41082;
extern NU8 Targetcpu_46560;
extern NU8 Targetos_46562;
extern NI Gverbosity_41084;
extern NI Gnumberofprocessors_41085;
static N_INLINE(void, appendString)(NimStringDesc* Dest_18192, NimStringDesc* Src_18193) {
memcpy(((NCSTRING) (&(*Dest_18192).data[((*Dest_18192).Sup.len)-0])), ((NCSTRING) ((*Src_18193).data)), ((NI32) ((NI64)((NI64)((*Src_18193).Sup.len + 1) * 1))));
(*Dest_18192).Sup.len += (*Src_18193).Sup.len;
}
N_NIMCALL(NimStringDesc*, Getcommandlinedesc_68021)(void) {
NimStringDesc* Result_68023;
NimStringDesc* LOC1;
TY68026 LOC2;
NimStringDesc* LOC3;
Result_68023 = 0;
LOC1 = 0;
memset((void*)&LOC2, 0, sizeof(LOC2));
LOC2[0] = copyString(((NimStringDesc*) &TMP189630));
LOC2[1] = copyString(Os_46053[(Hostos_46563)-1].Name);
LOC2[2] = copyString(Cpu_46460[(Hostcpu_46561)-1].Name);
LOC3 = 0;
LOC3 = nsuFormatOpenArray(((NimStringDesc*) &TMP189629), LOC2, 3);
LOC1 = rawNewString(LOC3->Sup.len + 1983);
appendString(LOC1, LOC3);
appendString(LOC1, ((NimStringDesc*) &TMP189631));
Result_68023 = LOC1;
return Result_68023;
}
N_NIMCALL(void, Writecommandlineusage_68001)(void) {
NimStringDesc* LOC4;
if (!!(Helpwritten_68028)) goto LA2;
LOC4 = 0;
LOC4 = Getcommandlinedesc_68021();
Messageout_42554(LOC4);
Helpwritten_68028 = NIM_TRUE;
LA2: ;
}
N_NIMCALL(void, Expectarg_68211)(NimStringDesc* Switch_68213, NimStringDesc* Arg_68214, NU8 Pass_68215, TY42536 Info_68216) {
if (!((Arg_68214) && (Arg_68214)->Sup.len == 0)) goto LA2;
Limessage_42566(Info_68216, ((NU8) 42), Switch_68213);
LA2: ;
}
N_NIMCALL(NimStringDesc*, Processpath_68345)(NimStringDesc* Path_68347) {
NimStringDesc* Result_68348;
TY43016 LOC1;
NimStringDesc* LOC2;
Result_68348 = 0;
memset((void*)&LOC1, 0, sizeof(LOC1));
LOC1[0] = copyString(((NimStringDesc*) &TMP189643));
LOC1[1] = Getprefixdir_41108();
LOC1[2] = copyString(((NimStringDesc*) &TMP189644));
LOC1[3] = copyString(Libpath_41111);
LOC2 = 0;
LOC2 = nsuFormatOpenArray(Path_68347, LOC1, 4);
Result_68348 = nosUnixToNativePath(LOC2);
return Result_68348;
}
static N_INLINE(TY10202*, Usrtocell_11012)(void* Usr_11014) {
TY10202* Result_11015;
Result_11015 = 0;
Result_11015 = ((TY10202*) ((NI64)((NU64)(((NI) (Usr_11014))) - (NU64)(((NI) (((NI)sizeof(TY10202))))))));
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
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12001(C_12622);
LA10: ;
LA6: ;
(*Dest_12618) = Src_12619;
}
N_NIMCALL(void, Processcompile_68353)(NimStringDesc* Filename_68355) {
NimStringDesc* Found_68356;
NimStringDesc* Trunc_68357;
NimStringDesc* LOC4;
Found_68356 = 0;
Found_68356 = Findfile_41089(Filename_68355);
if (!((Found_68356) && (Found_68356)->Sup.len == 0)) goto LA2;
Found_68356 = copyString(Filename_68355);
LA2: ;
Trunc_68357 = 0;
Trunc_68357 = nosChangeFileExt(Found_68356, ((NimStringDesc*) &TMP189645));
Addexternalfiletocompile_65544(Found_68356);
LOC4 = 0;
LOC4 = Completecfilepath_65500(Trunc_68357, NIM_FALSE);
Addfiletolink_65559(LOC4);
}
N_NIMCALL(void, Expectnoarg_68217)(NimStringDesc* Switch_68219, NimStringDesc* Arg_68220, NU8 Pass_68221, TY42536 Info_68222) {
if (!!(((Arg_68220) && (Arg_68220)->Sup.len == 0))) goto LA2;
Limessage_42566(Info_68222, ((NU8) 43), Switch_68219);
LA2: ;
}
N_NIMCALL(void, Processonoffswitch_68159)(NU32 Op_68161, NimStringDesc* Arg_68162, NU8 Pass_68163, TY42536 Info_68164) {
NU8 LOC1;
LOC1 = Whichkeyword_67474(Arg_68162);
switch (LOC1) {
case ((NU8) 125):
Goptions_41076 = (Goptions_41076 | Op_68161);
break;
case ((NU8) 126):
Goptions_41076 = (Goptions_41076 & ~ Op_68161);
break;
default:
Limessage_42566(Info_68164, ((NU8) 47), Arg_68162);
break;
}
}
N_NIMCALL(void, Invalidcmdlineoption_68077)(NU8 Pass_68079, NimStringDesc* Switch_68080, TY42536 Info_68081) {
Limessage_42566(Info_68081, ((NU8) 41), Switch_68080);
}
N_NIMCALL(void, Processspecificnote_68223)(NimStringDesc* Arg_68225, NU8 State_68226, NU8 Pass_68227, TY42536 Info_68228) {
NimStringDesc* Id_68229;
NI I_68230;
NU8 N_68231;
NIM_BOOL LOC2;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI X_68305;
NI X_68313;
NimStringDesc* LOC23;
NU8 LOC24;
Id_68229 = 0;
Id_68229 = copyString(((NimStringDesc*) &TMP189645));
I_68230 = 0;
I_68230 = 0;
N_68231 = 0;
N_68231 = ((NU8) 224);
while (1) {
LOC2 = (I_68230 < (NI64)(Arg_68225->Sup.len + 0));
if (!(LOC2)) goto LA3;
LOC2 = !(((NU8)(Arg_68225->data[I_68230]) == (NU8)(93)));
LA3: ;
if (!LOC2) goto LA1;
Id_68229 = addChar(Id_68229, Arg_68225->data[I_68230]);
I_68230 += 1;
} LA1: ;
LOC5 = (I_68230 < (NI64)(Arg_68225->Sup.len + 0));
if (!(LOC5)) goto LA6;
LOC5 = ((NU8)(Arg_68225->data[I_68230]) == (NU8)(93));
LA6: ;
if (!LOC5) goto LA7;
I_68230 += 1;
goto LA4;
LA7: ;
Invalidcmdlineoption_68077(Pass_68227, Arg_68225, Info_68228);
LA4: ;
LOC10 = (I_68230 < (NI64)(Arg_68225->Sup.len + 0));
if (!(LOC10)) goto LA11;
LOC10 = (((NU8)(Arg_68225->data[I_68230])) == ((NU8)(58)) || ((NU8)(Arg_68225->data[I_68230])) == ((NU8)(61)));
LA11: ;
if (!LOC10) goto LA12;
I_68230 += 1;
goto LA9;
LA12: ;
Invalidcmdlineoption_68077(Pass_68227, Arg_68225, Info_68228);
LA9: ;
if (!(State_68226 == ((NU8) 96))) goto LA15;
X_68305 = 0;
X_68305 = Findstr_67477(Hintstostr_42497, 13, Id_68229);
if (!(0 <= X_68305)) goto LA18;
N_68231 = ((NU8) (((NU8) ((NI64)(X_68305 + 224)))));
goto LA17;
LA18: ;
Invalidcmdlineoption_68077(Pass_68227, Arg_68225, Info_68228);
LA17: ;
goto LA14;
LA15: ;
X_68313 = 0;
X_68313 = Findstr_67477(Warningstostr_42477, 15, Id_68229);
if (!(0 <= X_68313)) goto LA21;
N_68231 = ((NU8) (((NU8) ((NI64)(X_68313 + 209)))));
goto LA20;
LA21: ;
Invalidcmdlineoption_68077(Pass_68227, Arg_68225, Info_68228);
LA20: ;
LA14: ;
LOC23 = 0;
LOC23 = copyStr(Arg_68225, I_68230);
LOC24 = Whichkeyword_67474(LOC23);
switch (LOC24) {
case ((NU8) 125):
Gnotes_42543 |=(1<<((NI32)((((NU8) (N_68231))-209))%(sizeof(NI32)*8)));
break;
case ((NU8) 126):
Gnotes_42543 &= ~(1 << ((NI32)((((NU8) (N_68231))-209)) % (sizeof(NI32)*8)));
break;
default:
Limessage_42566(Info_68228, ((NU8) 47), Arg_68225);
break;
}
}
N_NIMCALL(void, Processonoffswitchg_68185)(NU32 Op_68187, NimStringDesc* Arg_68188, NU8 Pass_68189, TY42536 Info_68190) {
NU8 LOC1;
LOC1 = Whichkeyword_67474(Arg_68188);
switch (LOC1) {
case ((NU8) 125):
Gglobaloptions_41078 = (Gglobaloptions_41078 | Op_68187);
break;
case ((NU8) 126):
Gglobaloptions_41078 = (Gglobaloptions_41078 & ~ Op_68187);
break;
default:
Limessage_42566(Info_68190, ((NU8) 47), Arg_68188);
break;
}
}
N_NIMCALL(void, Writeversioninfo_68059)(NU8 Pass_68061) {
NIM_BOOL LOC2;
TY68026 LOC6;
NimStringDesc* LOC7;
LOC2 = (Pass_68061 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Versionwritten_68029);
LA3: ;
if (!LOC2) goto LA4;
Versionwritten_68029 = NIM_TRUE;
Helpwritten_68028 = NIM_TRUE;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(((NimStringDesc*) &TMP189630));
LOC6[1] = copyString(Os_46053[(Hostos_46563)-1].Name);
LOC6[2] = copyString(Cpu_46460[(Hostcpu_46561)-1].Name);
LOC7 = 0;
LOC7 = nsuFormatOpenArray(((NimStringDesc*) &TMP189629), LOC6, 3);
Messageout_42554(LOC7);
exit(0);
LA4: ;
}
N_NIMCALL(void, Writeadvancedusage_68043)(NU8 Pass_68045) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
TY68026 LOC7;
NimStringDesc* LOC8;
LOC2 = (Pass_68045 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Advhelpwritten_68030);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(((NimStringDesc*) &TMP189630));
LOC7[1] = copyString(Os_46053[(Hostos_46563)-1].Name);
LOC7[2] = copyString(Cpu_46460[(Hostcpu_46561)-1].Name);
LOC8 = 0;
LOC8 = nsuFormatOpenArray(((NimStringDesc*) &TMP189629), LOC7, 3);
LOC6 = rawNewString(LOC8->Sup.len + 2472);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP189670));
Messageout_42554(LOC6);
Advhelpwritten_68030 = NIM_TRUE;
Helpwritten_68028 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Helponerror_68031)(NU8 Pass_68033) {
NIM_BOOL LOC2;
NimStringDesc* LOC6;
LOC2 = (Pass_68033 == ((NU8) 0));
if (!(LOC2)) goto LA3;
LOC2 = !(Helpwritten_68028);
LA3: ;
if (!LOC2) goto LA4;
LOC6 = 0;
LOC6 = Getcommandlinedesc_68021();
Messageout_42554(LOC6);
Helpwritten_68028 = NIM_TRUE;
exit(0);
LA4: ;
}
N_NIMCALL(void, Splitswitch_68082)(NimStringDesc* Switch_68084, NimStringDesc** Cmd_68086, NimStringDesc** Arg_68087, NU8 Pass_68088, TY42536 Info_68089) {
NI I_68090;
NIM_BOOL LOC2;
NIM_BOOL LOC7;
unsureAsgnRef((void**) &(*Cmd_68086), copyString(((NimStringDesc*) &TMP189645)));
I_68090 = 0;
I_68090 = 0;
LOC2 = (I_68090 < Switch_68084->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Switch_68084->data[I_68090]) == (NU8)(45));
LA3: ;
if (!LOC2) goto LA4;
I_68090 += 1;
LA4: ;
LOC7 = (I_68090 < Switch_68084->Sup.len);
if (!(LOC7)) goto LA8;
LOC7 = ((NU8)(Switch_68084->data[I_68090]) == (NU8)(45));
LA8: ;
if (!LOC7) goto LA9;
I_68090 += 1;
LA9: ;
while (1) {
if (!(I_68090 < Switch_68084->Sup.len)) goto LA11;
switch (((NU8)(Switch_68084->data[I_68090]))) {
case 97 ... 122:
case 65 ... 90:
case 48 ... 57:
case 95:
case 46:
(*Cmd_68086) = addChar((*Cmd_68086), Switch_68084->data[I_68090]);
break;
default:
goto LA11;
break;
}
I_68090 += 1;
} LA11: ;
if (!(Switch_68084->Sup.len <= I_68090)) goto LA13;
unsureAsgnRef((void**) &(*Arg_68087), copyString(((NimStringDesc*) &TMP189645)));
goto LA12;
LA13: ;
if (!(((NU8)(Switch_68084->data[I_68090])) == ((NU8)(58)) || ((NU8)(Switch_68084->data[I_68090])) == ((NU8)(61)) || ((NU8)(Switch_68084->data[I_68090])) == ((NU8)(91)))) goto LA15;
unsureAsgnRef((void**) &(*Arg_68087), copyStr(Switch_68084, (NI64)(I_68090 + 1)));
goto LA12;
LA15: ;
Invalidcmdlineoption_68077(Pass_68088, Switch_68084, Info_68089);
LA12: ;
}
N_NIMCALL(void, Processswitch_68012)(NimStringDesc* Switch_68014, NimStringDesc* Arg_68015, NU8 Pass_68016, TY42536 Info_68017) {
NU8 Theos_68782;
NU8 Cpu_68783;
NimStringDesc* Key_68784;
NimStringDesc* Val_68785;
NimStringDesc* Path_68786;
NU8 LOC1;
NIM_BOOL LOC3;
NU8 LOC12;
NU8 LOC19;
NU8 LOC20;
NI LOC52;
Theos_68782 = 0;
Cpu_68783 = 0;
Key_68784 = 0;
Val_68785 = 0;
Path_68786 = 0;
LOC1 = Whichkeyword_67474(Switch_68014);
switch (LOC1) {
case ((NU8) 143):
case ((NU8) 144):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Path_68786 = Processpath_68345(Arg_68015);
LOC3 = Contains_38159(&Searchpaths_41080, Path_68786);
if (!!(LOC3)) goto LA4;
Prependstr_38071(&Searchpaths_41080, Path_68786);
LA4: ;
break;
case ((NU8) 45):
case ((NU8) 161):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
asgnRefNoCycle((void**) &Outfile_41081, copyString(Arg_68015));
break;
case ((NU8) 100):
case ((NU8) 145):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Definesymbol_59053(Arg_68015);
break;
case ((NU8) 101):
case ((NU8) 146):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Undefsymbol_59056(Arg_68015);
break;
case ((NU8) 107):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!((6 &(1<<((Pass_68016)&7)))!=0)) goto LA7;
Processcompile_68353(Arg_68015);
LA7: ;
break;
case ((NU8) 106):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!((6 &(1<<((Pass_68016)&7)))!=0)) goto LA10;
Addfiletolink_65559(Arg_68015);
LA10: ;
break;
case ((NU8) 147):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 9))%(sizeof(NI32)*8)));
break;
case ((NU8) 148):
case ((NU8) 176):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
break;
case ((NU8) 149):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 7))%(sizeof(NI32)*8)));
break;
case ((NU8) 196):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 18))%(sizeof(NI32)*8)));
break;
case ((NU8) 150):
case ((NU8) 151):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 1))%(sizeof(NI32)*8)));
break;
case ((NU8) 156):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
LOC12 = Whichkeyword_67474(Arg_68015);
switch (LOC12) {
case ((NU8) 158):
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 2))%(sizeof(NI32)*8)));
Gglobaloptions_41078 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Definesymbol_59053(((NimStringDesc*) &TMP189661));
break;
case ((NU8) 157):
Gglobaloptions_41078 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 3))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Gglobaloptions_41078 &= ~(1 << ((NI32)(((NU8) 3)) % (sizeof(NI32)*8)));
Gglobaloptions_41078 &= ~(1 << ((NI32)(((NU8) 2)) % (sizeof(NI32)*8)));
Definesymbol_59053(((NimStringDesc*) &TMP189662));
break;
default:
Limessage_42566(Info_68017, ((NU8) 48), Arg_68015);
break;
}
break;
case ((NU8) 136):
case ((NU8) 137):
Processonoffswitch_68159(2048, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 95):
Processspecificnote_68223(Arg_68015, ((NU8) 95), Pass_68016, Info_68017);
break;
case ((NU8) 96):
Processspecificnote_68223(Arg_68015, ((NU8) 96), Pass_68016, Info_68017);
break;
case ((NU8) 138):
Processonoffswitch_68159(4096, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 195):
Processonoffswitch_68159(524288, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 103):
Processonoffswitch_68159(32768, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 104):
Processonoffswitch_68159(65536, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 114):
Processonoffswitch_68159(131072, Arg_68015, Pass_68016, Info_68017);
if (!((Goptions_41076 &(1<<((((NU8) 17))&31)))!=0)) goto LA14;
Definesymbol_59053(((NimStringDesc*) &TMP189663));
goto LA13;
LA14: ;
Undefsymbol_59056(((NimStringDesc*) &TMP189663));
LA13: ;
break;
case ((NU8) 74):
Processonoffswitch_68159(1048576, Arg_68015, Pass_68016, Info_68017);
if (!((Goptions_41076 &(1<<((((NU8) 20))&31)))!=0)) goto LA17;
Definesymbol_59053(((NimStringDesc*) &TMP189664));
goto LA16;
LA17: ;
Undefsymbol_59056(((NimStringDesc*) &TMP189664));
LA16: ;
break;
case ((NU8) 127):
case ((NU8) 187):
Processonoffswitch_68159(1022, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 132):
Processonoffswitch_68159(384, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 134):
Processonoffswitch_68159(256, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 133):
Processonoffswitch_68159(128, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 75):
Processonoffswitch_68159(2, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 186):
Processonoffswitch_68159(4, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 128):
Processonoffswitch_68159(8, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 129):
Processonoffswitch_68159(16, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 130):
Processonoffswitch_68159(32, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 102):
Processonoffswitch_68159(1024, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 135):
case ((NU8) 159):
Processonoffswitch_68159(512, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 152):
Processonoffswitchg_68185(16, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 160):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
LOC19 = Whichkeyword_67474(Arg_68015);
switch (LOC19) {
case ((NU8) 140):
Goptions_41076 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
Goptions_41076 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
case ((NU8) 141):
Goptions_41076 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_41076 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 142):
Goptions_41076 &= ~(1 << ((NI32)(((NU8) 13)) % (sizeof(NI32)*8)));
Goptions_41076 &= ~(1 << ((NI32)(((NU8) 14)) % (sizeof(NI32)*8)));
break;
default:
Limessage_42566(Info_68017, ((NU8) 49), Arg_68015);
break;
}
break;
case ((NU8) 162):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
LOC20 = Whichkeyword_67474(Arg_68015);
switch (LOC20) {
case ((NU8) 164):
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 11))%(sizeof(NI32)*8)));
Definesymbol_59053(((NimStringDesc*) &TMP189665));
break;
case ((NU8) 163):
Gglobaloptions_41078 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
break;
case ((NU8) 89):
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 10))%(sizeof(NI32)*8)));
Gglobaloptions_41078 &= ~(1 << ((NI32)(((NU8) 11)) % (sizeof(NI32)*8)));
Definesymbol_59053(((NimStringDesc*) &TMP189666));
break;
default:
Limessage_42566(Info_68017, ((NU8) 50), Arg_68015);
break;
}
break;
case ((NU8) 208):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!((6 &(1<<((Pass_68016)&7)))!=0)) goto LA22;
Listsymbols_59062();
LA22: ;
break;
case ((NU8) 165):
case ((NU8) 166):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!((6 &(1<<((Pass_68016)&7)))!=0)) goto LA25;
Addcompileoption_65460(Arg_68015);
LA25: ;
break;
case ((NU8) 167):
case ((NU8) 168):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!((6 &(1<<((Pass_68016)&7)))!=0)) goto LA28;
Addlinkoption_65454(Arg_68015);
LA28: ;
break;
case ((NU8) 199):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!((6 &(1<<((Pass_68016)&7)))!=0)) goto LA31;
asgnRefNoCycle((void**) &Gindexfile_41082, copyString(Arg_68015));
LA31: ;
break;
case ((NU8) 28):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Addimplicitmod_41141(Arg_68015);
break;
case ((NU8) 169):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 5))%(sizeof(NI32)*8)));
break;
case ((NU8) 171):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 13))%(sizeof(NI32)*8)));
break;
case ((NU8) 172):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!(Pass_68016 == ((NU8) 0))) goto LA34;
Theos_68782 = Nametoos_46564(Arg_68015);
if (!(Theos_68782 == ((NU8) 0))) goto LA37;
Limessage_42566(Info_68017, ((NU8) 51), Arg_68015);
LA37: ;
if (!!((Theos_68782 == Hostos_46563))) goto LA40;
Settarget_46574(Theos_68782, Targetcpu_46560);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_59049();
LA40: ;
LA34: ;
break;
case ((NU8) 173):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
if (!(Pass_68016 == ((NU8) 0))) goto LA43;
Cpu_68783 = Nametocpu_46567(Arg_68015);
if (!(Cpu_68783 == ((NU8) 0))) goto LA46;
Limessage_42566(Info_68017, ((NU8) 52), Arg_68015);
LA46: ;
if (!!((Cpu_68783 == Hostcpu_46561))) goto LA49;
Settarget_46574(Targetos_46562, Cpu_68783);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 6))%(sizeof(NI32)*8)));
Initdefines_59049();
LA49: ;
LA43: ;
break;
case ((NU8) 179):
case ((NU8) 180):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 14))%(sizeof(NI32)*8)));
break;
case ((NU8) 181):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gverbosity_41084 = nsuParseInt(Arg_68015);
break;
case ((NU8) 105):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gnumberofprocessors_41085 = nsuParseInt(Arg_68015);
break;
case ((NU8) 188):
case ((NU8) 182):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Writeversioninfo_68059(Pass_68016);
break;
case ((NU8) 189):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Writeadvancedusage_68043(Pass_68016);
break;
case ((NU8) 183):
case ((NU8) 184):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Helponerror_68031(Pass_68016);
break;
case ((NU8) 185):
Processonoffswitchg_68185(32768, Arg_68015, Pass_68016, Info_68017);
break;
case ((NU8) 190):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
break;
case ((NU8) 191):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 17))%(sizeof(NI32)*8)));
break;
case ((NU8) 193):
Expectnoarg_68217(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Gglobaloptions_41078 |=(1<<((NI32)(((NU8) 12))%(sizeof(NI32)*8)));
break;
case ((NU8) 89):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
asgnRefNoCycle((void**) &Libpath_41111, Processpath_68345(Arg_68015));
break;
case ((NU8) 218):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Splitswitch_68082(Arg_68015, &Key_68784, &Val_68785, Pass_68016, Info_68017);
Putenv_34231(Key_68784, Val_68785);
break;
case ((NU8) 192):
Expectarg_68211(Switch_68014, Arg_68015, Pass_68016, Info_68017);
Setcc_65397(Arg_68015);
break;
default:
LOC52 = nsuFindChar(Switch_68014, 46, 0);
if (!(0 <= LOC52)) goto LA53;
Setconfigvar_41137(Switch_68014, Arg_68015);
goto LA51;
LA53: ;
Invalidcmdlineoption_68077(Pass_68016, Switch_68014, Info_68017);
LA51: ;
break;
}
}
N_NIMCALL(NIM_BOOL, Testcompileoption_68456)(NimStringDesc* Switch_68458, TY42536 Info_68459) {
NIM_BOOL Result_68460;
NU8 LOC1;
Result_68460 = 0;
LOC1 = Whichkeyword_67474(Switch_68458);
switch (LOC1) {
case ((NU8) 147):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 9))&31)))!=0);
break;
case ((NU8) 148):
case ((NU8) 176):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 6))&31)))!=0);
break;
case ((NU8) 149):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 7))&31)))!=0);
break;
case ((NU8) 196):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 18))&31)))!=0);
break;
case ((NU8) 150):
case ((NU8) 151):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 1))&31)))!=0);
break;
case ((NU8) 136):
case ((NU8) 137):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 11))&31)))!=0);
break;
case ((NU8) 138):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 12))&31)))!=0);
break;
case ((NU8) 195):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 19))&31)))!=0);
break;
case ((NU8) 103):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 15))&31)))!=0);
break;
case ((NU8) 104):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 16))&31)))!=0);
break;
case ((NU8) 114):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 17))&31)))!=0);
break;
case ((NU8) 74):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 20))&31)))!=0);
break;
case ((NU8) 127):
case ((NU8) 187):
Result_68460 = ((Goptions_41076 & 1022) == 1022);
break;
case ((NU8) 132):
Result_68460 = ((Goptions_41076 & 384) == 384);
break;
case ((NU8) 134):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 8))&31)))!=0);
break;
case ((NU8) 133):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 7))&31)))!=0);
break;
case ((NU8) 75):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 1))&31)))!=0);
break;
case ((NU8) 186):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 2))&31)))!=0);
break;
case ((NU8) 128):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 3))&31)))!=0);
break;
case ((NU8) 129):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 4))&31)))!=0);
break;
case ((NU8) 130):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 5))&31)))!=0);
break;
case ((NU8) 102):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 10))&31)))!=0);
break;
case ((NU8) 135):
case ((NU8) 159):
Result_68460 = ((Goptions_41076 &(1<<((((NU8) 9))&31)))!=0);
break;
case ((NU8) 152):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 4))&31)))!=0);
break;
case ((NU8) 179):
case ((NU8) 180):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 14))&31)))!=0);
break;
case ((NU8) 185):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 15))&31)))!=0);
break;
case ((NU8) 193):
Result_68460 = ((Gglobaloptions_41078 &(1<<((((NU8) 12))&31)))!=0);
break;
default:
Invalidcmdlineoption_68077(((NU8) 0), Switch_68458, Info_68459);
break;
}
return Result_68460;
}
N_NIMCALL(NIM_BOOL, Testcompileoptionarg_68358)(NimStringDesc* Switch_68360, NimStringDesc* Arg_68361, TY42536 Info_68362) {
NIM_BOOL Result_68363;
NU8 LOC1;
NU8 LOC2;
NU8 LOC3;
Result_68363 = 0;
LOC1 = Whichkeyword_67474(Switch_68360);
switch (LOC1) {
case ((NU8) 156):
LOC2 = Whichkeyword_67474(Arg_68361);
switch (LOC2) {
case ((NU8) 158):
Result_68363 = ((Gglobaloptions_41078 &(1<<((((NU8) 2))&31)))!=0);
break;
case ((NU8) 157):
Result_68363 = ((Gglobaloptions_41078 &(1<<((((NU8) 3))&31)))!=0);
break;
case ((NU8) 142):
Result_68363 = ((Gglobaloptions_41078 & 12) == 0);
break;
default:
Limessage_42566(Info_68362, ((NU8) 48), Arg_68361);
break;
}
break;
case ((NU8) 160):
LOC3 = Whichkeyword_67474(Arg_68361);
switch (LOC3) {
case ((NU8) 140):
Result_68363 = ((Goptions_41076 &(1<<((((NU8) 13))&31)))!=0);
break;
case ((NU8) 141):
Result_68363 = ((Goptions_41076 &(1<<((((NU8) 14))&31)))!=0);
break;
case ((NU8) 142):
Result_68363 = ((Goptions_41076 & 24576) == 0);
break;
default:
Limessage_42566(Info_68362, ((NU8) 49), Arg_68361);
break;
}
break;
default:
Invalidcmdlineoption_68077(((NU8) 0), Switch_68360, Info_68362);
break;
}
return Result_68363;
}
N_NOINLINE(void, commandsInit)(void) {
}

