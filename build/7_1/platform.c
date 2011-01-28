/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY50036 TY50036;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY50448 TY50448;
typedef struct TY10402 TY10402;
typedef struct TNimType TNimType;
typedef struct TY10418 TY10418;
typedef struct TY10790 TY10790;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY50036 {
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
typedef TY50036 TY50054[21];
typedef NimStringDesc* TY50457[2];
struct TY50448 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY50448 TY50461[12];
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
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
typedef NI TY8414[16];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NU8, Nametocpu_50567)(NimStringDesc* Name_50569);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_23624, NimStringDesc* B_23625);
N_NIMCALL(NU8, Nametoos_50564)(NimStringDesc* Name_50566);
N_NIMCALL(void, Settarget_50574)(NU8 O_50576, NU8 C_50577);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_12818, void* Src_12819);
static N_INLINE(TY10402*, Usrtocell_11212)(void* Usr_11214);
static N_INLINE(NI, Atomicinc_3001)(NI* Memloc_3004, NI X_3005);
static N_INLINE(NI, Atomicdec_3006)(NI* Memloc_3009, NI X_3010);
static N_INLINE(void, Rtladdzct_12201)(TY10402* C_12203);
N_NOINLINE(void, Addzct_11201)(TY10418* S_11204, TY10402* C_11205);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18308);
STRING_LITERAL(TMP50384, "DOS", 3);
STRING_LITERAL(TMP50385, "..", 2);
STRING_LITERAL(TMP50386, "$1.dll", 6);
STRING_LITERAL(TMP50387, "/", 1);
STRING_LITERAL(TMP50388, ".obj", 4);
STRING_LITERAL(TMP50389, "\015\012", 2);
STRING_LITERAL(TMP50390, ";", 1);
STRING_LITERAL(TMP50391, "\\", 1);
STRING_LITERAL(TMP50392, ".bat", 4);
STRING_LITERAL(TMP50393, ".", 1);
STRING_LITERAL(TMP50394, ".exe", 4);
STRING_LITERAL(TMP50395, "Windows", 7);
STRING_LITERAL(TMP50396, "OS2", 3);
STRING_LITERAL(TMP50397, "Linux", 5);
STRING_LITERAL(TMP50398, "lib$1.so", 8);
STRING_LITERAL(TMP50399, ".o", 2);
STRING_LITERAL(TMP50400, "\012", 1);
STRING_LITERAL(TMP50401, ":", 1);
STRING_LITERAL(TMP50402, ".sh", 3);
STRING_LITERAL(TMP50403, "", 0);
STRING_LITERAL(TMP50404, "MorphOS", 7);
STRING_LITERAL(TMP50405, "SkyOS", 5);
STRING_LITERAL(TMP50406, "Solaris", 7);
STRING_LITERAL(TMP50407, "Irix", 4);
STRING_LITERAL(TMP50408, "NetBSD", 6);
STRING_LITERAL(TMP50409, "FreeBSD", 7);
STRING_LITERAL(TMP50410, "OpenBSD", 7);
STRING_LITERAL(TMP50411, "AIX", 3);
STRING_LITERAL(TMP50412, "PalmOS", 6);
STRING_LITERAL(TMP50413, "QNX", 3);
STRING_LITERAL(TMP50414, "Amiga", 5);
STRING_LITERAL(TMP50415, "$1.library", 10);
STRING_LITERAL(TMP50416, "Atari", 5);
STRING_LITERAL(TMP50417, ".tpp", 4);
STRING_LITERAL(TMP50418, "Netware", 7);
STRING_LITERAL(TMP50419, "$1.nlm", 6);
STRING_LITERAL(TMP50420, ".nlm", 4);
STRING_LITERAL(TMP50421, "MacOS", 5);
STRING_LITERAL(TMP50422, "::", 2);
STRING_LITERAL(TMP50423, "$1Lib", 5);
STRING_LITERAL(TMP50424, "\015", 1);
STRING_LITERAL(TMP50425, ",", 1);
STRING_LITERAL(TMP50426, "MacOSX", 6);
STRING_LITERAL(TMP50427, "lib$1.dylib", 11);
STRING_LITERAL(TMP50428, "EcmaScript", 10);
STRING_LITERAL(TMP50429, "NimrodVM", 8);
NIM_CONST TY50054 Os_50053 = {{((NimStringDesc*) &TMP50384),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50388),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50390),
((NimStringDesc*) &TMP50391),
((NimStringDesc*) &TMP50392),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50394),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50395),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50388),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50390),
((NimStringDesc*) &TMP50391),
((NimStringDesc*) &TMP50392),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50394),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50396),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50388),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50390),
((NimStringDesc*) &TMP50391),
((NimStringDesc*) &TMP50392),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50394),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50397),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50404),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50405),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50406),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50407),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50408),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50409),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50410),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50411),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50412),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
1}
,
{((NimStringDesc*) &TMP50413),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50414),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50415),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
1}
,
{((NimStringDesc*) &TMP50416),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50386),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50417),
((NimStringDesc*) &TMP50393),
1}
,
{((NimStringDesc*) &TMP50418),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50419),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50389),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50420),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50421),
((NimStringDesc*) &TMP50422),
((NimStringDesc*) &TMP50423),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50424),
((NimStringDesc*) &TMP50425),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
2}
,
{((NimStringDesc*) &TMP50426),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50427),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
5}
,
{((NimStringDesc*) &TMP50428),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
0}
,
{((NimStringDesc*) &TMP50429),
((NimStringDesc*) &TMP50385),
((NimStringDesc*) &TMP50398),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50399),
((NimStringDesc*) &TMP50400),
((NimStringDesc*) &TMP50401),
((NimStringDesc*) &TMP50387),
((NimStringDesc*) &TMP50402),
((NimStringDesc*) &TMP50393),
((NimStringDesc*) &TMP50403),
((NimStringDesc*) &TMP50393),
0}
}
;
STRING_LITERAL(TMP50546, "littleEndian", 12);
STRING_LITERAL(TMP50547, "bigEndian", 9);
NIM_CONST TY50457 Endiantostr_50456 = {((NimStringDesc*) &TMP50546),
((NimStringDesc*) &TMP50547)}
;
STRING_LITERAL(TMP50548, "i386", 4);
STRING_LITERAL(TMP50549, "m68k", 4);
STRING_LITERAL(TMP50550, "alpha", 5);
STRING_LITERAL(TMP50551, "powerpc", 7);
STRING_LITERAL(TMP50552, "sparc", 5);
STRING_LITERAL(TMP50553, "vm", 2);
STRING_LITERAL(TMP50554, "ia64", 4);
STRING_LITERAL(TMP50555, "amd64", 5);
STRING_LITERAL(TMP50556, "mips", 4);
STRING_LITERAL(TMP50557, "arm", 3);
STRING_LITERAL(TMP50558, "ecmascript", 10);
STRING_LITERAL(TMP50559, "nimrodvm", 8);
NIM_CONST TY50461 Cpu_50460 = {{((NimStringDesc*) &TMP50548),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP50549),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50550),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP50551),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50552),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50553),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP50554),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP50555),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP50556),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50557),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP50558),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP50559),
32,
((NU8) 1),
64,
32}
}
;
STRING_LITERAL(TMP50690, "solaris", 7);
NU8 Targetcpu_50560;
NU8 Hostcpu_50561;
NU8 Targetos_50562;
NU8 Hostos_50563;
NI Intsize_50570;
NI Floatsize_50571;
NI Ptrsize_50572;
NimStringDesc* Tnl_50573;
extern TY10790 Gch_10808;
N_NIMCALL(NU8, Nametocpu_50567)(NimStringDesc* Name_50569) {
NU8 Result_50646;
NU8 I_50685;
NU8 Res_50689;
NI LOC3;
Result_50646 = 0;
I_50685 = 0;
Res_50689 = 0;
Res_50689 = ((NU8) 1);
while (1) {
if (!(Res_50689 <= ((NU8) 12))) goto LA1;
I_50685 = Res_50689;
LOC3 = nsuCmpIgnoreStyle(Name_50569, Cpu_50460[(I_50685)-1].Name);
if (!(LOC3 == 0)) goto LA4;
Result_50646 = I_50685;
goto BeforeRet;
LA4: ;
Res_50689 += 1;
} LA1: ;
Result_50646 = ((NU8) 0);
BeforeRet: ;
return Result_50646;
}
N_NIMCALL(NU8, Nametoos_50564)(NimStringDesc* Name_50566) {
NU8 Result_50599;
NU8 I_50638;
NU8 Res_50642;
NI LOC3;
Result_50599 = 0;
I_50638 = 0;
Res_50642 = 0;
Res_50642 = ((NU8) 1);
while (1) {
if (!(Res_50642 <= ((NU8) 21))) goto LA1;
I_50638 = Res_50642;
LOC3 = nsuCmpIgnoreStyle(Name_50566, Os_50053[(I_50638)-1].Name);
if (!(LOC3 == 0)) goto LA4;
Result_50599 = I_50638;
goto BeforeRet;
LA4: ;
Res_50642 += 1;
} LA1: ;
Result_50599 = ((NU8) 0);
BeforeRet: ;
return Result_50599;
}
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
N_NIMCALL(void, Settarget_50574)(NU8 O_50576, NU8 C_50577) {
Targetcpu_50560 = C_50577;
Targetos_50562 = O_50576;
Intsize_50570 = (NI32)(Cpu_50460[(C_50577)-1].Intsize / 8);
Floatsize_50571 = (NI32)(Cpu_50460[(C_50577)-1].Floatsize / 8);
Ptrsize_50572 = (NI32)(Cpu_50460[(C_50577)-1].Bit / 8);
asgnRefNoCycle((void**) &Tnl_50573, copyString(Os_50053[(O_50576)-1].Newline));
}
N_NOINLINE(void, platformInit)(void) {
Hostcpu_50561 = Nametocpu_50567(((NimStringDesc*) &TMP50548));
Hostos_50563 = Nametoos_50564(((NimStringDesc*) &TMP50690));
Settarget_50574(Hostos_50563, Hostcpu_50561);
}

