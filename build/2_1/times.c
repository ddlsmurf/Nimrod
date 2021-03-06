/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY28602 TY28602;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
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
struct TY28602 {
  TNimObject Sup;
NI Second;
NI Minute;
NI Hour;
NI Monthday;
NU8 Month;
NI Year;
NU8 Weekday;
NI Yearday;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY28848[7];
N_NIMCALL(TY28602, Getlocaltime_28618)(NI T_28620);
N_NIMCALL(TY28602, Tmtotimeinfo_28843)(struct tm* Tm_28845);
N_NIMCALL(NI, Gettime_28616)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19403);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI X_25428, NI Minchars_25429);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
NIM_CONST TY28848 Weekdays_28847 = {((NU8) 6),
((NU8) 0),
((NU8) 1),
((NU8) 2),
((NU8) 3),
((NU8) 4),
((NU8) 5)}
;
extern NIM_CONST TY28848 Weekdays_28847;
extern TNimType* NTI28602; /* TTimeInfo */
N_NIMCALL(NI, Gettime_28616)(void) {
NI Result_29403;
Result_29403 = 0;
Result_29403 = time(NIM_NIL);
goto BeforeRet;
BeforeRet: ;
return Result_29403;
}
N_NIMCALL(TY28602, Tmtotimeinfo_28843)(struct tm* Tm_28845) {
TY28602 Result_28846;
memset((void*)&Result_28846, 0, sizeof(Result_28846));
Result_28846.Sup.m_type = NTI28602;
Result_28846.Second = ((NI) (((NI) ((*Tm_28845).tm_sec))));
Result_28846.Minute = ((NI) (((NI) ((*Tm_28845).tm_min))));
Result_28846.Hour = ((NI) (((NI) ((*Tm_28845).tm_hour))));
Result_28846.Monthday = ((NI) (((NI) ((*Tm_28845).tm_mday))));
Result_28846.Month = ((NU8) ((*Tm_28845).tm_mon));
Result_28846.Year = ((NI) ((NI32)((*Tm_28845).tm_year + ((NI32) 1900))));
Result_28846.Weekday = Weekdays_28847[(((NI) ((*Tm_28845).tm_wday)))-0];
Result_28846.Yearday = ((NI) (((NI) ((*Tm_28845).tm_yday))));
return Result_28846;
}
N_NIMCALL(TY28602, Getlocaltime_28618)(NI T_28620) {
TY28602 Result_29407;
NI A_29408;
struct tm* LOC1;
memset((void*)&Result_29407, 0, sizeof(Result_29407));
Result_29407.Sup.m_type = NTI28602;
A_29408 = 0;
A_29408 = T_28620;
LOC1 = localtime(&A_29408);
Result_29407 = Tmtotimeinfo_28843(&(*LOC1));
return Result_29407;
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
N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
NimStringDesc* Result_30003;
TY28602 Ti_30004;
NI LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_30003 = 0;
memset((void*)&Ti_30004, 0, sizeof(Ti_30004));
LOC1 = Gettime_28616();
Ti_30004 = Getlocaltime_28618(LOC1);
Ti_30004.Sup.m_type = NTI28602;
LOC2 = 0;
LOC3 = 0;
LOC3 = nimIntToStr(Ti_30004.Year);
LOC4 = 0;
LOC4 = nsuIntToStr((NI32)(Ti_30004.Month + 1), 2);
LOC5 = 0;
LOC5 = nsuIntToStr(((NI) (Ti_30004.Monthday)), 2);
LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
Result_30003 = LOC2;
return Result_30003;
}
N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
NimStringDesc* Result_30014;
TY28602 Ti_30015;
NI LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Result_30014 = 0;
memset((void*)&Ti_30015, 0, sizeof(Ti_30015));
LOC1 = Gettime_28616();
Ti_30015 = Getlocaltime_28618(LOC1);
Ti_30015.Sup.m_type = NTI28602;
LOC2 = 0;
LOC3 = 0;
LOC3 = nsuIntToStr(((NI) (Ti_30015.Hour)), 2);
LOC4 = 0;
LOC4 = nsuIntToStr(((NI) (Ti_30015.Minute)), 2);
LOC5 = 0;
LOC5 = nsuIntToStr(((NI) (Ti_30015.Second)), 2);
LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
Result_30014 = LOC2;
return Result_30014;
}
N_NIMCALL(NI64, ntDiffTime)(NI A_28635, NI B_28636) {
NI64 Result_28869;
NF LOC1;
Result_28869 = 0;
LOC1 = difftime(A_28635, B_28636);
Result_28869 = float64ToInt64(((NF64) (LOC1)));
goto BeforeRet;
BeforeRet: ;
return Result_28869;
}
N_NOINLINE(void, timesInit)(void) {
}

