/* dpmul -- 680 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0238C8.c.
 */

/* Adapted from GCC 2.95.3 gcc/config/fp-bit.c.
 * Public upstream: https://github.com/gcc-mirror/gcc/blob/7f236610e99c7a11fb18f056b6446b3c7c40979c/gcc/config/fp-bit.c
 * Public upstream file SHA-256: 9aa27be26b945edde2c6ef81d0289724d1d9ca1e756a1a98230ab58de46091eb
 * Full upstream copyright, GPL and linking exception follow below.
 */
#define FINE_GRAINED_LIBRARIES
#define L_mul_df
#define FLOAT_BIT_ORDER_MISMATCH
#define US_SOFTWARE_GOFAST
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
file.  (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

/* This implements IEEE 754 format arithmetic, but does not provide a
   mechanism for setting the rounding mode, or for generating or handling
   exceptions.

   The original code by Steve Chamberlain, hacked by Mark Eichin and Jim
   Wilson, all of Cygnus Support.  */

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
#		define multiply dpmul
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

/* Preserve the sticky-bit when shifting fractions to the right.  */
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


/* IEEE "special" number predicates */

#ifdef NO_NANS

#define nan() 0
#define isnan(x) 0
#define isinf(x) 0
#else

INLINE
static fp_number_type *
nan ()
{
  extern fp_number_type D_FE_002251A8;

  return &D_FE_002251A8;
}

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
#if defined(L_mul_sf) || defined(L_mul_df)
static INLINE fp_number_type *
_fpmul_parts ( fp_number_type *  a,
	       fp_number_type *  b,
	       fp_number_type * tmp)
{
  fractype low = 0;
  fractype high = 0;

  if (isnan (a))
    {
      a->sign = a->sign != b->sign;
      return a;
    }
  if (isnan (b))
    {
      b->sign = a->sign != b->sign;
      return b;
    }
  if (isinf (a))
    {
      if (iszero (b))
	return nan ();
      a->sign = a->sign != b->sign;
      return a;
    }
  if (isinf (b))
    {
      if (iszero (a))
	{
	  return nan ();
	}
      b->sign = a->sign != b->sign;
      return b;
    }
  if (iszero (a))
    {
      a->sign = a->sign != b->sign;
      return a;
    }
  if (iszero (b))
    {
      b->sign = a->sign != b->sign;
      return b;
    }

  /* Calculate the mantissa by multiplying both 64bit numbers to get a
     128 bit number */
  {
#if defined(NO_DI_MODE)
    {
      fractype x = a->fraction.ll;
      fractype ylow = b->fraction.ll;
      fractype yhigh = 0;
      int bit;

      /* ??? This does multiplies one bit at a time.  Optimize.  */
      for (bit = 0; bit < FRAC_NBITS; bit++)
	{
	  int carry;

	  if (x & 1)
	    {
	      carry = (low += ylow) < ylow;
	      high += yhigh + carry;
	    }
	  yhigh <<= 1;
	  if (ylow & FRACHIGH)
	    {
	      yhigh |= 1;
	    }
	  ylow <<= 1;
	  x >>= 1;
	}
    }
#elif defined(FLOAT)
    {
      /* Multiplying two 32 bit numbers to get a 64 bit number  on
        a machine with DI, so we're safe */

      DItype answer = (DItype)(a->fraction.ll) * (DItype)(b->fraction.ll);

      high = answer >> 32;
      low = answer;
    }
#else
    /* Doing a 64*64 to 128 */
    {
      UDItype nl = a->fraction.ll & 0xffffffff;
      UDItype nh = a->fraction.ll >> 32;
      UDItype ml = b->fraction.ll & 0xffffffff;
      UDItype mh = b->fraction.ll >>32;
      UDItype pp_ll = ml * nl;
      UDItype pp_hl = mh * nl;
      UDItype pp_lh = ml * nh;
      UDItype pp_hh = mh * nh;
      UDItype res2 = 0;
      UDItype res0 = 0;
      UDItype ps_hh__ = pp_hl + pp_lh;
      if (ps_hh__ < pp_hl)
	res2 += 0x100000000LL;
      pp_hl = (ps_hh__ << 32) & 0xffffffff00000000LL;
      res0 = pp_ll + pp_hl;
      if (res0 < pp_ll)
	res2++;
      res2 += ((ps_hh__ >> 32) & 0xffffffffL) + pp_hh;
      high = res2;
      low = res0;
    }
#endif
  }

  tmp->normal_exp = a->normal_exp + b->normal_exp;
  tmp->sign = a->sign != b->sign;
#ifdef FLOAT
  tmp->normal_exp += 2;		/* ??????????????? */
#else
  tmp->normal_exp += 4;		/* ??????????????? */
#endif
  while (high >= IMPLICIT_2)
    {
      tmp->normal_exp++;
      if (high & 1)
	{
	  low >>= 1;
	  low |= FRACHIGH;
	}
      high >>= 1;
    }
  while (high < IMPLICIT_1)
    {
      tmp->normal_exp--;

      high <<= 1;
      if (low & FRACHIGH)
	high |= 1;
      low <<= 1;
    }
  /* rounding is tricky. if we only round if it won't make us round later. */
#if 0
  if (low & FRACHIGH2)
    {
      if (((high & GARDMASK) != GARDMSB)
	  && (((high + 1) & GARDMASK) == GARDMSB))
	{
	  /* don't round, it gets done again later. */
	}
      else
	{
	  high++;
	}
    }
#endif
  if ((high & GARDMASK) == GARDMSB)
    {
      if (high & (1 << NGARDS))
	{
	  /* half way, so round to even */
	  high += GARDROUND + 1;
	}
      else if (low)
	{
	  /* but we really weren't half way */
	  high += GARDROUND + 1;
	}
    }
  tmp->fraction.ll = high;
  tmp->class = CLASS_NUMBER;
  return tmp;
}

FLO_type
dpmul (FLO_type arg_a, FLO_type arg_b)
{
  fp_number_type a;
  fp_number_type b;
  fp_number_type tmp;
  fp_number_type *res;

  unpack_d ((FLO_union_type *) & arg_a, &a);
  unpack_d ((FLO_union_type *) & arg_b, &b);

  res = _fpmul_parts (&a, &b, &tmp);

  return pack_d (res);
}
#endif
