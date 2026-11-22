/* __unpack_f -- 144 bytes.
 *
 * A function of the boot executable at 0x00114D88; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__unpack_f.c.
 */

/* __unpack_f: unpack_d of GCC 2.95.3's config/fp-bit.c built with FLOAT,
 * from the fp-bit.c that OpenRAC/rac1-decomp rebuilds (src/libgcc/fp-bit.c at ad970bb4;
 * line numbers are that file's). Below is its text in file order: lines 1-41, 95-391,
 * 406-437, 548-549, 550-646 and 1520. It is the GCC 2.95.3 text except for lines
 * 583-591, rac1-decomp's marked in-place backport of the NO_DENORMALS test from GCC
 * trunk 2672543458 (2000-03-16), with which unpack_d reproduces the retail body. Left
 * out: nan (lines 392-405), rac1-decomp's other in-place change, which this routine
 * does not use. Added: the options of the libgcc build (FLOAT, the routine selector and
 * its target options). GPL-2.0-or-later with the libgcc linking exception below; see
 * THIRD_PARTY_NOTICES.md. No SDK source is used.
 */
/* This is a software floating point library which can be used instead of
 the floating point routines in libgcc1.c for targets without hardware
 floating point.
 Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file with other programs, and to distribute
those programs without any restriction coming from the use of this
file. (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING. If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA. */

/* As a special exception, if you link this library with other files,
 some of which are compiled with GCC, to produce an executable,
 this library does not by itself cause the resulting executable
 to be covered by the GNU General Public License.
 This exception does not however invalidate any other reasons why
 the executable file might be covered by the GNU General Public License. */

/* This implements IEEE 754 format arithmetic, but does not provide a
 mechanism for setting the rounding mode, or for generating or handling
 exceptions.

 The original code by Steve Chamberlain, hacked by Mark Eichin and Jim
 Wilson, all of Cygnus Support. */

/* The libgcc build's options for this routine. */
#define FLOAT
#define FINE_GRAINED_LIBRARIES
#define L_unpack_sf
#define FLOAT_BIT_ORDER_MISMATCH
#define NO_DENORMALS
#define US_SOFTWARE_GOFAST

/* The following macros can be defined to change the behaviour of this file:
 FLOAT: Implement a `float', aka SFmode, fp library. If this is not
 defined, then this file implements a `double', aka DFmode, fp library.
 FLOAT_ONLY: Used with FLOAT, to implement a `float' only library, i.e.
 don't include float->double conversion which requires the double library.
 This is useful only for machines which can't support doubles, e.g. some
 8-bit processors.
 CMPtype: Specify the type that floating point compares should return.
 This defaults to SItype, aka int.
 US_SOFTWARE_GOFAST: This makes all entry points use the same names as the
 US Software goFast library. If this is not defined, the entry points use
 the same names as libgcc1.c.
 _DEBUG_BITFLOAT: This makes debugging the code a little easier, by adding
 two integers to the FLO_union_type.
 NO_NANS: Disable nan and infinity handling
 SMALL_MACHINE: Useful when operations on QIs and HIs are faster
 than on an SI */

/* We don't currently support extended floats (long doubles) on machines
 without hardware to deal with them.

 These stubs are just to keep the linker from complaining about unresolved
 references which can be pulled in from libio & libstdc++, even if the
 user isn't using long doubles. However, they may generate an unresolved
 external to abort if abort is not used by the function, and the stubs
 are referenced from within libc, since libgcc goes before and after the
 system library. */

#ifdef EXTENDED_FLOAT_STUBS
__truncxfsf2 (){ abort(); }
__extendsfxf2 (){ abort(); }
__addxf3 (){ abort(); }
__divxf3 (){ abort(); }
__eqxf2 (){ abort(); }
__extenddfxf2 (){ abort(); }
__gtxf2 (){ abort(); }
__lexf2 (){ abort(); }
__ltxf2 (){ abort(); }
__mulxf3 (){ abort(); }
__negxf2 (){ abort(); }
__nexf2 (){ abort(); }
__subxf3 (){ abort(); }
__truncxfdf2 (){ abort(); }

__trunctfsf2 (){ abort(); }
__extendsftf2 (){ abort(); }
__addtf3 (){ abort(); }
__divtf3 (){ abort(); }
__eqtf2 (){ abort(); }
__extenddftf2 (){ abort(); }
__gttf2 (){ abort(); }
__letf2 (){ abort(); }
__lttf2 (){ abort(); }
__multf3 (){ abort(); }
__negtf2 (){ abort(); }
__netf2 (){ abort(); }
__subtf3 (){ abort(); }
__trunctfdf2 (){ abort(); }
__gexf2 (){ abort(); }
__fixxfsi (){ abort(); }
__floatsixf (){ abort(); }
#else	/* !EXTENDED_FLOAT_STUBS, rest of file */


typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));

typedef int HItype __attribute__ ((mode (HI)));
typedef int SItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));

/* The type of the result of a fp compare */
#ifndef CMPtype
#define CMPtype SItype
#endif

typedef unsigned int UHItype __attribute__ ((mode (HI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));

#define MAX_SI_INT   ((SItype) ((unsigned) (~0)>>1))
#define MAX_USI_INT  ((USItype) ~0)


#ifdef FLOAT_ONLY
#define NO_DI_MODE
#endif

#ifdef FLOAT
#	define NGARDS    7L
#	define GARDROUND 0x3f
#	define GARDMASK  0x7f
#	define GARDMSB   0x40
#	define EXPBITS 8
#	define EXPBIAS 127
#	define FRACBITS 23
#	define EXPMAX (0xff)
#	define QUIET_NAN 0x100000L
#	define FRAC_NBITS 32
#	define FRACHIGH  0x80000000L
#	define FRACHIGH2 0xc0000000L
#	define pack_d __pack_f
#	define unpack_d __unpack_f
#	define __fpcmp_parts __fpcmp_parts_f
	typedef USItype fractype;
	typedef UHItype halffractype;
	typedef SFtype FLO_type;
	typedef SItype intfrac;

#else
#	define PREFIXFPDP dp
#	define PREFIXSFDF df
#	define NGARDS 8L
#	define GARDROUND 0x7f
#	define GARDMASK  0xff
#	define GARDMSB   0x80
#	define EXPBITS 11
#	define EXPBIAS 1023
#	define FRACBITS 52
#	define EXPMAX (0x7ff)
#	define QUIET_NAN 0x8000000000000LL
#	define FRAC_NBITS 64
#	define FRACHIGH  0x8000000000000000LL
#	define FRACHIGH2 0xc000000000000000LL
#	define pack_d __pack_d
#	define unpack_d __unpack_d
#	define __fpcmp_parts __fpcmp_parts_d
	typedef UDItype fractype;
	typedef USItype halffractype;
	typedef DFtype FLO_type;
	typedef DItype intfrac;
#endif

#ifdef US_SOFTWARE_GOFAST
#	ifdef FLOAT
#		define add 		fpadd
#		define sub 		fpsub
#		define multiply 	fpmul
#		define divide 		fpdiv
#		define compare 		fpcmp
#		define si_to_float 	sitofp
#		define float_to_si 	fptosi
#		define float_to_usi 	fptoui
#		define negate 		__negsf2
#		define sf_to_df		fptodp
#		define dptofp 		dptofp
#else
#		define add 		dpadd
#		define sub 		dpsub
#		define multiply 	dpmul
#		define divide 		dpdiv
#		define compare 		dpcmp
#		define si_to_float 	litodp
#		define float_to_si 	dptoli
#		define float_to_usi 	dptoul
#		define negate 		__negdf2
#		define df_to_sf 	dptofp
#endif
#else
#	ifdef FLOAT
#		define add 		__addsf3
#		define sub 		__subsf3
#		define multiply 	__mulsf3
#		define divide 		__divsf3
#		define compare 		__cmpsf2
#		define _eq_f2 		__eqsf2
#		define _ne_f2 		__nesf2
#		define _gt_f2 		__gtsf2
#		define _ge_f2 		__gesf2
#		define _lt_f2 		__ltsf2
#		define _le_f2 		__lesf2
#		define si_to_float 	__floatsisf
#		define float_to_si 	__fixsfsi
#		define float_to_usi 	__fixunssfsi
#		define negate 		__negsf2
#		define sf_to_df		__extendsfdf2
#else
#		define add 		__adddf3
#		define sub 		__subdf3
#		define multiply 	__muldf3
#		define divide 		__divdf3
#		define compare 		__cmpdf2
#		define _eq_f2 		__eqdf2
#		define _ne_f2 		__nedf2
#		define _gt_f2 		__gtdf2
#		define _ge_f2 		__gedf2
#		define _lt_f2 		__ltdf2
#		define _le_f2 		__ledf2
#		define si_to_float 	__floatsidf
#		define float_to_si 	__fixdfsi
#		define float_to_usi 	__fixunsdfsi
#		define negate 		__negdf2
#		define df_to_sf		__truncdfsf2
#	endif
#endif


#ifndef INLINE
#define INLINE __inline__
#endif

/* Preserve the sticky-bit when shifting fractions to the right. */
#define LSHIFT(a) { a = (a & 1) | (a >> 1); }

/* numeric parameters */
/* F_D_BITOFF is the number of bits offset between the MSB of the mantissa
 of a float and of a double. Assumes there are only two float types.
 (double::FRAC_BITS+double::NGARDS-(float::FRAC_BITS-float::NGARDS))
 */
#define F_D_BITOFF (52+8-(23+7))


#define NORMAL_EXPMIN (-(EXPBIAS)+1)
#define IMPLICIT_1 (1LL<<(FRACBITS+NGARDS))
#define IMPLICIT_2 (1LL<<(FRACBITS+1+NGARDS))

/* common types */

typedef enum
{
  CLASS_SNAN,
  CLASS_QNAN,
  CLASS_ZERO,
  CLASS_NUMBER,
  CLASS_INFINITY
} fp_class_type;

typedef struct
{
#ifdef SMALL_MACHINE
  char class;
  unsigned char sign;
  short normal_exp;
#else
  fp_class_type class;
  unsigned int sign;
  int normal_exp;
#endif

  union
    {
      fractype ll;
      halffractype l[2];
    } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;

#ifndef FLOAT
  halffractype words[2];
#endif

#ifdef FLOAT_BIT_ORDER_MISMATCH
  struct
    {
      fractype fraction:FRACBITS __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      unsigned int sign:1 __attribute__ ((packed));
    }
  bits;
#endif

#ifdef _DEBUG_BITFLOAT
  struct
    {
      unsigned int sign:1 __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      fractype fraction:FRACBITS __attribute__ ((packed));
    }
  bits_big_endian;

  struct
    {
      fractype fraction:FRACBITS __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      unsigned int sign:1 __attribute__ ((packed));
    }
  bits_little_endian;
#endif
}
FLO_union_type;


/* end of header */

/* IEEE "special" number predicates */

#ifdef NO_NANS

#define nan() 0
#define isnan(x) 0
#define isinf(x) 0
#else

INLINE
static int
isnan ( fp_number_type *  x)
{
  return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

INLINE
static int
isinf ( fp_number_type *  x)
{
  return x->class == CLASS_INFINITY;
}

#endif

INLINE
static int
iszero ( fp_number_type *  x)
{
  return x->class == CLASS_ZERO;
}

INLINE
static void
flip_sign ( fp_number_type *  x)
{
  x->sign = !x->sign;
}

extern FLO_type pack_d ( fp_number_type * );

extern void unpack_d (FLO_union_type *, fp_number_type *);

#if defined(L_unpack_df) || defined(L_unpack_sf)
void
unpack_d (FLO_union_type * src, fp_number_type * dst)
{
  /* We previously used bitfields to store the number, but this doesn't
 handle little/big endian systems conveniently, so use shifts and
 masks */
  fractype fraction;
  int exp;
  int sign;

#if defined(FLOAT_WORD_ORDER_MISMATCH) && !defined(FLOAT)
  FLO_union_type swapped;

  swapped.words[0] = src->words[1];
  swapped.words[1] = src->words[0];
  src = &swapped;
#endif

#ifdef FLOAT_BIT_ORDER_MISMATCH
  fraction = src->bits.fraction;
  exp = src->bits.exp;
  sign = src->bits.sign;
#else
  fraction = src->value_raw & ((((fractype)1) << FRACBITS) - (fractype)1);
  exp = ((int)(src->value_raw >> FRACBITS)) & ((1 << EXPBITS) - 1);
  sign = ((int)(src->value_raw >> (FRACBITS + EXPBITS))) & 1;
#endif

  dst->sign = sign;
  if (exp == 0)
    {
      /* Hmm. Looks like 0 */
      /* rac1-decomp: the NO_DENORMALS test below is backported from GCC
 trunk 2672543458 (Bernd Schmidt, Cygnus, 2000-03-16). Sony's EE
 fp-bit already had it; with -DNO_DENORMALS it reproduces retail's
 __unpack_d and __unpack_f byte for byte. */
      if (fraction == 0
#ifdef NO_DENORMALS
	  || 1
#endif
	  )
	{
	  /* tastes like zero */
	  dst->class = CLASS_ZERO;
	}
      else
	{
	  /* Zero exponent with non zero fraction - it's denormalized,
 so there isn't a leading implicit one - we'll shift it so
 it gets one. */
	  dst->normal_exp = exp - EXPBIAS + 1;
	  fraction <<= NGARDS;

	  dst->class = CLASS_NUMBER;
#if 1
	  while (fraction < IMPLICIT_1)
	    {
	      fraction <<= 1;
	      dst->normal_exp--;
	    }
#endif
	  dst->fraction.ll = fraction;
	}
    }
  else if (exp == EXPMAX)
    {
      /* Huge exponent*/
      if (fraction == 0)
	{
	  /* Attached to a zero fraction - means infinity */
	  dst->class = CLASS_INFINITY;
	}
      else
	{
	  /* Non zero fraction, means nan */
	  if (fraction & QUIET_NAN)
	    {
	      dst->class = CLASS_QNAN;
	    }
	  else
	    {
	      dst->class = CLASS_SNAN;
	    }
	  /* Keep the fraction part as the nan number */
	  dst->fraction.ll = fraction;
	}
    }
  else
    {
      /* Nothing strange about this number */
      dst->normal_exp = exp - EXPBIAS;
      dst->class = CLASS_NUMBER;
      dst->fraction.ll = (fraction << NGARDS) | IMPLICIT_1;
    }
}
#endif

#endif /* !EXTENDED_FLOAT_STUBS */
