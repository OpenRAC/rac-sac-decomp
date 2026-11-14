/* dptoul -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc fp-bit.c; see THIRD_PARTY_NOTICES.md.
 *
 * Compiler library routine from EE-GCC 2.9 (libgcc fp-bit.c), DOUBLE
 * configuration with US_SOFTWARE_GOFAST. It is float_to_usi(): unpacks a
 * double and converts it to an unsigned integer.
 */

typedef float DFtype __attribute__ ((mode (DF)));
typedef int SItype __attribute__ ((mode (SI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));

#define INLINE __inline__

#define NGARDS    8L
#define GARDROUND 0x7f
#define GARDMASK  0xff
#define GARDMSB   0x80
#define EXPBITS 11
#define EXPBIAS 1023
#define FRACBITS 52
#define EXPMAX (0x7ff)
#define QUIET_NAN 0x8000000000000LL
#define FRAC_NBITS 64
#define FRACHIGH  0x8000000000000000LL
#define FRACHIGH2 0xc000000000000000LL

#define MAX_USI_INT  ((USItype) ~0)

typedef UDItype fractype;
typedef USItype halffractype;

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
  fp_class_type class;
  unsigned int sign;
  int normal_exp;
  union
    {
      fractype ll;
      halffractype l[2];
    } fraction;
} fp_number_type;

typedef union
{
  DFtype value;
  fractype value_raw;
  halffractype words[2];
} FLO_union_type;

INLINE
static int
isnan (fp_number_type *x)
{
  return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

INLINE
static int
isinf (fp_number_type *x)
{
  return x->class == CLASS_INFINITY;
}

INLINE
static int
iszero (fp_number_type *x)
{
  return x->class == CLASS_ZERO;
}

extern void __unpack_d (FLO_union_type *, fp_number_type *);

USItype
dptoul (DFtype arg_a)
{
  fp_number_type a;

  __unpack_d ((FLO_union_type *) & arg_a, &a);
  if (iszero (&a))
    return 0;
  if (isnan (&a))
    return 0;
  /* it is a negative number */
  if (a.sign)
    return 0;
  /* get reasonable MAX_USI_INT... */
  if (isinf (&a))
    return MAX_USI_INT;
  /* it is a number, but a small one */
  if (a.normal_exp < 0)
    return 0;
  if (a.normal_exp > 31)
    return MAX_USI_INT;
  else if (a.normal_exp > (FRACBITS + NGARDS))
    return a.fraction.ll << (a.normal_exp - (FRACBITS + NGARDS));
  else
    return a.fraction.ll >> ((FRACBITS + NGARDS) - a.normal_exp);
}
