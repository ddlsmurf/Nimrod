/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY27595 TY27595;
typedef struct TY27593 TY27593;
typedef struct TY27432 TY27432;
typedef struct TY27434 TY27434;
typedef struct TY27436 TY27436;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_STDCALL_PTR(NCSTRING, TY27650) (void);
typedef N_STDCALL_PTR(NI32, TY27580) (NI Handle_27581, NCSTRING Buf_27582, NI32 Size_27583);
typedef N_STDCALL_PTR(NCSTRING, TY27645) (void);
typedef N_STDCALL_PTR(NI32, TY27647) (NCSTRING Para1_27648);
typedef N_STDCALL_PTR(NI, TY27613) (NCSTRING Lpfilename_27614, TY27595* Lpfindfiledata_27616);
typedef N_STDCALL_PTR(NI32, TY27618) (NI Hfindfile_27619, TY27595* Lpfindfiledata_27621);
typedef N_STDCALL_PTR(void, TY27623) (NI Hfindfile_27624);
typedef N_STDCALL_PTR(NI32, TY27633) (NCSTRING Lpfilename_27634);
typedef N_STDCALL_PTR(NI32, TY27562) (NI32 Nbufferlength_27563, NCSTRING Lpbuffer_27564);
typedef N_STDCALL_PTR(NI32, TY27548) (void);
typedef N_STDCALL_PTR(NI32, TY27550) (NI32 Dwflags_27551, void* Lpsource_27552, NI32 Dwmessageid_27553, NI32 Dwlanguageid_27554, void* Lpbuffer_27555, NI32 Nsize_27556, void* Arguments_27557);
typedef N_STDCALL_PTR(void, TY27559) (void* P_27560);
typedef N_STDCALL_PTR(NI32, TY27569) (NCSTRING Pathname_27570, void* Security_27571);
typedef N_STDCALL_PTR(NI32, TY27576) (NCSTRING Lpname_27577, NCSTRING Lpvalue_27578);
struct TY27593 {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef N_STDCALL_PTR(NI, TY27538) (NI32 Nstdhandle_27539);
typedef N_STDCALL_PTR(NI32, TY27503) (NCSTRING Lpapplicationname_27504, NCSTRING Lpcommandline_27505, TY27432* Lpprocessattributes_27507, TY27432* Lpthreadattributes_27509, NI32 Binherithandles_27510, NI32 Dwcreationflags_27511, void* Lpenvironment_27512, NCSTRING Lpcurrentdirectory_27513, TY27434* Lpstartupinfo_27515, TY27436* Lpprocessinformation_27517);
typedef N_STDCALL_PTR(NI32, TY27476) (NI Hobject_27477);
typedef N_STDCALL_PTR(NI32, TY27525) (NI Hhandle_27526, NI32 Dwmilliseconds_27527);
typedef N_STDCALL_PTR(NI32, TY27533) (NI Hprocess_27534, NI32* Lpexitcode_27536);
typedef N_STDCALL_PTR(NI32, TY27495) (NI* Hreadpipe_27497, NI* Hwritepipe_27498, TY27432* Lppipeattributes_27500, NI32 Nsize_27501);
typedef N_STDCALL_PTR(void, TY27664) (NI32 Dwmilliseconds_27665);
typedef NIM_CHAR TY27606[260];
typedef NIM_CHAR TY27609[14];
struct TY27595 {
NI32 Dwfileattributes;
TY27593 Ftcreationtime;
TY27593 Ftlastaccesstime;
TY27593 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY27606 Cfilename;
TY27609 Calternatefilename;
};
struct TY27432 {
NI32 Nlength;
void* Lpsecuritydescriptor;
NI32 Binherithandle;
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
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* Path_1811);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* Path_1821);
N_NIMCALL(void*, nimGetProcAddr)(void* Lib_1817, NCSTRING Name_1818);
STRING_LITERAL(TMP191625, "kernel32", 8);
STRING_LITERAL(TMP191626, "kernel32", 8);
static void* TMP191624;
TY27650 Dl_27649;
TY27580 Dl_27579;
TY27645 Dl_27644;
TY27647 Dl_27646;
TY27613 Dl_27612;
TY27618 Dl_27617;
TY27623 Dl_27622;
TY27633 Dl_27632;
TY27562 Dl_27561;
TY27548 Dl_27547;
TY27550 Dl_27549;
TY27559 Dl_27558;
TY27569 Dl_27568;
TY27576 Dl_27575;
TY27538 Dl_27537;
TY27503 Dl_27502;
TY27476 Dl_27475;
TY27525 Dl_27524;
TY27533 Dl_27532;
TY27495 Dl_27494;
TY27664 Dl_27663;
N_NIMCALL(NI64, Rdfiletime_27651)(TY27593 F_27653) {
NI64 Result_27654;
Result_27654 = 0;
Result_27654 = (((NI64)(NU64)(NU32)(F_27653.Dwlowdatetime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(F_27653.Dwhighdatetime))) << (NU64)(32)));
return Result_27654;
}
N_NOINLINE(void, winleanInit)(void) {
if (!((TMP191624 = nimLoadLibrary((NimStringDesc*) &TMP191625))
)) nimLoadLibraryError((NimStringDesc*) &TMP191626);
Dl_27649 = (TY27650) nimGetProcAddr(TMP191624, "GetCommandLineA");
Dl_27579 = (TY27580) nimGetProcAddr(TMP191624, "GetModuleFileNameA");
Dl_27644 = (TY27645) nimGetProcAddr(TMP191624, "GetEnvironmentStringsA");
Dl_27646 = (TY27647) nimGetProcAddr(TMP191624, "FreeEnvironmentStringsA");
Dl_27612 = (TY27613) nimGetProcAddr(TMP191624, "FindFirstFileA");
Dl_27617 = (TY27618) nimGetProcAddr(TMP191624, "FindNextFileA");
Dl_27622 = (TY27623) nimGetProcAddr(TMP191624, "FindClose");
Dl_27632 = (TY27633) nimGetProcAddr(TMP191624, "GetFileAttributesA");
Dl_27561 = (TY27562) nimGetProcAddr(TMP191624, "GetCurrentDirectoryA");
Dl_27547 = (TY27548) nimGetProcAddr(TMP191624, "GetLastError");
Dl_27549 = (TY27550) nimGetProcAddr(TMP191624, "FormatMessageA");
Dl_27558 = (TY27559) nimGetProcAddr(TMP191624, "LocalFree");
Dl_27568 = (TY27569) nimGetProcAddr(TMP191624, "CreateDirectoryA");
Dl_27575 = (TY27576) nimGetProcAddr(TMP191624, "SetEnvironmentVariableA");
Dl_27537 = (TY27538) nimGetProcAddr(TMP191624, "GetStdHandle");
Dl_27502 = (TY27503) nimGetProcAddr(TMP191624, "CreateProcessA");
Dl_27475 = (TY27476) nimGetProcAddr(TMP191624, "CloseHandle");
Dl_27524 = (TY27525) nimGetProcAddr(TMP191624, "WaitForSingleObject");
Dl_27532 = (TY27533) nimGetProcAddr(TMP191624, "GetExitCodeProcess");
Dl_27494 = (TY27495) nimGetProcAddr(TMP191624, "CreatePipe");
Dl_27663 = (TY27664) nimGetProcAddr(TMP191624, "Sleep");
}

