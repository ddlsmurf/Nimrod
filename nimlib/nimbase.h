/*

            Nimrod's Runtime Library
        (c) Copyright 2009 Andreas Rumpf

    See the file "copying.txt", included in this
    distribution, for details about the copyright.
*/

/* compiler symbols:
__BORLANDC__
_MSC_VER
__WATCOMC__
__LCC__
__GNUC__
__DMC__
__POCC__
__TINYC__
*/


#ifndef NIMBASE_H
#define NIMBASE_H

#include  <math.h>

/* calling convention mess ----------------------------------------------- */
#if defined(__GNUC__) || defined(__LCC__) || defined(__POCC__) \
                      || defined(__TINYC__)
  /* these should support C99's inline */
  /* the test for __POCC__ has to come before the test for _MSC_VER,
     because PellesC defines _MSC_VER too. This is brain-dead. */
#  define N_INLINE(rettype, name) inline rettype name
#elif defined(__BORLANDC__) || defined(_MSC_VER)
/* Borland's compiler is really STRANGE here; note that the __fastcall
   keyword cannot be before the return type, but __inline cannot be after
   the return type, so we do not handle this mess in the code generator
   but rather here. */
#  define N_INLINE(rettype, name) __inline rettype name
#elif defined(__DMC__)
#  define N_INLINE(rettype, name) inline rettype name
#elif defined(__WATCOMC__)
#  define N_INLINE(rettype, name) __inline rettype name
#else /* others are less picky: */
#  define N_INLINE(rettype, name) rettype __inline name
#endif

#if defined(__POCC__) || defined(_MSC_VER)
#  define HAVE_LRINT 1
#endif

#if defined(__POCC__)
#  define NIM_CONST /* PCC is really picky with const modifiers */
#  undef _MSC_VER /* Yeah, right PCC defines _MSC_VER even if it is
                     not that compatible. Well done. */
#elif defined(__cplusplus)
#  define NIM_CONST /* C++ is picky with const modifiers */
#else
#  define NIM_CONST  const
#endif

#define NIM_THREADVAR __thread

/* --------------- how int64 constants should be declared: ----------- */
#if defined(__GNUC__) || defined(__LCC__) || \
    defined(__POCC__) || defined(__DMC__)
#  define IL64(x) x##LL
#else /* works only without LL */
#  define IL64(x) x
#endif

/* ---------------- casting without correct aliasing rules ----------- */

#if defined(__GNUCC__)
#  define NIM_CAST(type, ptr) (((union{type __x__;}*)(ptr))->__x__)
#else
#  define NIM_CAST(type, ptr) ((type)(ptr))
#endif

/* ------------------------------------------------------------------- */

#if defined(WIN32) || defined(_WIN32) /* only Windows has this mess... */
#  define N_CDECL(rettype, name) rettype __cdecl name
#  define N_STDCALL(rettype, name) rettype __stdcall name
#  define N_SYSCALL(rettype, name) rettype __syscall name
#  define N_FASTCALL(rettype, name) rettype __fastcall name
#  define N_SAFECALL(rettype, name) rettype __safecall name
/* function pointers with calling convention: */
#  define N_CDECL_PTR(rettype, name) rettype (__cdecl *name)
#  define N_STDCALL_PTR(rettype, name) rettype (__stdcall *name)
#  define N_SYSCALL_PTR(rettype, name) rettype (__syscall *name)
#  define N_FASTCALL_PTR(rettype, name) rettype (__fastcall *name)
#  define N_SAFECALL_PTR(rettype, name) rettype (__safecall *name)

#  define N_LIB_EXPORT  extern __declspec(dllexport)
#  define N_LIB_IMPORT  extern __declspec(dllimport)
#else
#  define N_CDECL(rettype, name) rettype name
#  define N_STDCALL(rettype, name) rettype name
#  define N_SYSCALL(rettype, name) rettype name
#  define N_FASTCALL(rettype, name) rettype name
#  define N_SAFECALL(rettype, name) rettype name
/* function pointers with calling convention: */
#  define N_CDECL_PTR(rettype, name) rettype (*name)
#  define N_STDCALL_PTR(rettype, name) rettype (*name)
#  define N_SYSCALL_PTR(rettype, name) rettype (*name)
#  define N_FASTCALL_PTR(rettype, name) rettype (*name)
#  define N_SAFECALL_PTR(rettype, name) rettype (*name)

#  define N_LIB_EXPORT  extern
#  define N_LIB_IMPORT  extern
#endif

#define N_NOCONV(rettype, name) rettype name
/* specify no calling convention */
#define N_NOCONV_PTR(rettype, name) rettype (*name)

#define N_CLOSURE(rettype, name) rettype name
/* specify no calling convention */
#define N_CLOSURE_PTR(rettype, name) rettype (*name)


#if defined(__GNUC__) || defined(__ICC__)
#  define N_NOINLINE(rettype, name) rettype __attribute__((noinline)) name
#elif defined(_MSC_VER)
#  define N_NOINLINE(rettype, name) __declspec(noinline) rettype name
#else
#  define N_NOINLINE(rettype, name) rettype name
#endif

#define N_NOINLINE_PTR(rettype, name) rettype (*name)

#if defined(__BORLANDC__) || defined(__WATCOMC__) || \
    defined(__POCC__) || defined(_MSC_VER)
/* these compilers have a fastcall so use it: */
#  define N_NIMCALL(rettype, name) rettype __fastcall name
#  define N_NIMCALL_PTR(rettype, name) rettype (__fastcall *name)
#else
#  define N_NIMCALL(rettype, name) rettype name /* no modifier */
#  define N_NIMCALL_PTR(rettype, name) rettype (*name)
#endif

/* ----------------------------------------------------------------------- */

/* from float_cast.h: */

/*
** Copyright (C) 2001 Erik de Castro Lopo <erikd AT mega-nerd DOT com>
**
** Permission to use, copy, modify, distribute, and sell this file for any
** purpose is hereby granted without fee, provided that the above copyright
** and this permission notice appear in all copies.  No representations are
** made about the suitability of this software for any purpose.  It is
** provided "as is" without express or implied warranty.
*/

/* Version 1.1 */


/*============================================================================
**  On Intel Pentium processors (especially PIII and probably P4), converting
**  from float to int is very slow. To meet the C specs, the code produced by
**  most C compilers targeting Pentium needs to change the FPU rounding mode
**  before the float to int conversion is performed.
**
**  Changing the FPU rounding mode causes the FPU pipeline to be flushed. It
**  is this flushing of the pipeline which is so slow.
**
**  Fortunately the ISO C99 specifications define the functions lrint, lrintf,
**  llrint and llrintf which fix this problem as a side effect.
**
**  On Unix-like systems, the configure process should have detected the
**  presence of these functions. If they weren't found we have to replace them
**  here with a standard C cast.
*/

/*
**	The C99 prototypes for lrint and lrintf are as follows:
**
**		long int lrintf (float x);
**		long int lrint  (double x);
*/

#if defined(__LCC__) || (defined(__GNUC__) && defined(WIN32))
/* Linux' GCC does not seem to have these. Why? */
#  define HAVE_LRINT
#  define HAVE_LRINTF
#endif

#if defined(HAVE_LRINT) && defined(HAVE_LRINTF)

/*  These defines enable functionality introduced with the 1999 ISO C
**  standard. They must be defined before the inclusion of math.h to
**  engage them. If optimisation is enabled, these functions will be
**  inlined. With optimisation switched off, you have to link in the
**  maths library using -lm.
*/

#  define  _ISOC9X_SOURCE  1
#  define  _ISOC99_SOURCE  1
#  define  __USE_ISOC9X  1
#  define  __USE_ISOC99  1

#elif (defined(WIN32) || defined(_WIN32) || defined(__WIN32__)) \
   && !defined(__BORLANDC__) && !defined(__POCC__)

/*  Win32 doesn't seem to have these functions.
**  Therefore implement inline versions of these functions here.
*/
static N_INLINE(long int, lrint)(double flt) {
  long int intgr;
  _asm {
    fld flt
    fistp intgr
  };
  return intgr;
}

static N_INLINE(long int, lrintf)(float flt) {
  long int intgr;
  _asm {
    fld flt
    fistp intgr
  };
  return intgr;
}

#else

#  ifndef lrint
#    define  lrint(dbl)   ((long int)(dbl))
#  endif
#  ifndef lrintf
#    define  lrintf(flt)  ((long int)(flt))
#  endif

#endif /* defined(HAVE_LRINT) && defined(HAVE_LRINTF) */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stddef.h>
#include <signal.h>
#include <setjmp.h>

/*
#ifndef INF
static unsigned long nimInf[2]={0xffffffff, 0x7fffffff};
#  define INF (*(double*) nimInf)
#endif */

/* C99 compiler? */
#if (defined(__STD_VERSION__) && (__STD_VERSION__ >= 199901))
#  define HAVE_STDINT_H
#endif

#if defined(__LCC__) || defined(__DMC__) || defined(__POCC__)
#  define HAVE_STDINT_H
#endif

/* bool types (C++ has it): */
#ifdef __cplusplus
#  ifndef NIM_TRUE
#    define NIM_TRUE true
#  endif
#  ifndef NIM_FALSE
#    define NIM_FALSE false
#  endif
#  define NIM_BOOL bool
#else
#  ifdef bool
#    define NIM_BOOL bool
#  else
  typedef unsigned char NIM_BOOL;
#  endif
#  ifndef NIM_TRUE
#    define NIM_TRUE ((NIM_BOOL) 1)
#  endif
#  ifndef NIM_FALSE
#    define NIM_FALSE ((NIM_BOOL) 0)
#  endif
#endif

#define NIM_NIL ((void*)0) /* C's NULL is fucked up in some C compilers, so
                              the generated code does not rely on it anymore */

#if defined(__BORLANDC__) || defined(__DMC__) \
   || defined(__WATCOMC__) || defined(_MSC_VER)
typedef signed char NI8;
typedef signed short int NI16;
typedef signed int NI32;
/* XXX: Float128? */
typedef unsigned char NU8;
typedef unsigned short int NU16;
typedef unsigned __int64 NU64;
typedef __int64 NI64;
typedef unsigned int NU32;
#elif defined(HAVE_STDINT_H)
#  include <stdint.h>
typedef int8_t NI8;
typedef int16_t NI16;
typedef int32_t NI32;
typedef int64_t NI64;
typedef uint64_t NU64;
typedef uint8_t NU8;
typedef uint16_t NU16;
typedef uint32_t NU32;
#else
typedef signed char NI8;
typedef signed short int NI16;
typedef signed int NI32;
/* XXX: Float128? */
typedef unsigned char NU8;
typedef unsigned short int NU16;
typedef unsigned long long int NU64;
typedef long long int NI64;
typedef unsigned int NU32;
#endif

typedef float NF32;
typedef double NF64;
typedef double NF;

typedef char NIM_CHAR;
typedef char* NCSTRING;

#ifdef NIM_BIG_ENDIAN
#  define NIM_IMAN 1
#else
#  define NIM_IMAN 0
#endif

static N_INLINE(NI32, float64ToInt32)(double val) {
  val = val + 68719476736.0*1.5;
  /* 2^36 * 1.5,  (52-_shiftamt=36) uses limited precisicion to floor */
  return ((NI32*)&val)[NIM_IMAN] >> 16; /* 16.16 fixed point representation */
}

static N_INLINE(NI32, float32ToInt32)(float val) {
  return float64ToInt32((double)val);
}

#define float64ToInt64(x) ((NI64) (x))

#define zeroMem(a, size) memset(a, 0, size)
#define equalMem(a, b, size) (memcmp(a, b, size) == 0)

#define STRING_LITERAL(name, str, length) \
  static const struct {                   \
    TGenericSeq Sup;                      \
    NIM_CHAR data[length + 1];            \
  } name = {{length, length}, str}

typedef struct TStringDesc* string;

/* declared size of a sequence: */
#if defined(__GNUC__)
#  define SEQ_DECL_SIZE /* empty is correct! */
#else
#  define SEQ_DECL_SIZE 1000000
#endif

#define ALLOC_0(size)  calloc(1, size)
#define DL_ALLOC_0(size) dlcalloc(1, size)

#define GenericSeqSize sizeof(TGenericSeq)
#define paramCount() cmdCount

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__i386__)
#  ifndef NAN
static unsigned long nimNaN[2]={0xffffffff, 0x7fffffff};
#    define NAN (*(double*) nimNaN)
#  endif
#endif

#ifndef NAN
#  define NAN (0.0 / 0.0)
#endif

#ifndef INF
#  ifdef INFINITY
#    define INF INFINITY
#  elif defined(HUGE_VAL)
#    define INF  HUGE_VAL
#  else
#    define INF (1.0 / 0.0)
#  endif
#endif
/*
typedef struct TSafePoint TSafePoint;
struct TSafePoint {
  NI exc;
  NCSTRING excname;
  NCSTRING msg;
  TSafePoint* prev;
  jmp_buf context;
}; */

typedef struct TFrame TFrame;
struct TFrame {
  TFrame* prev;
  NCSTRING procname;
  NI line;
  NCSTRING filename;
  NI len;
};

extern TFrame* framePtr;
/*extern TSafePoint* excHandler; */

#if defined(__cplusplus)
struct NimException {
  TSafePoint sp;

  NimException(NI aExc, NCSTRING aExcname, NCSTRING aMsg) {
    sp.exc = aExc; sp.excname = aExcname; sp.msg = aMsg;
    sp.prev = excHandler;
    excHandler = &sp;
  }
};
#endif

#endif
