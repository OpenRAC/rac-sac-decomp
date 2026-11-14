/* __floatdisf -- 224 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc2.c; see THIRD_PARTY_NOTICES.md.
 */

typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));
typedef int SItype __attribute__ ((mode (SI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));

/* BITS_PER_UNIT is the size of a byte in bits, not GCC's internal macro:
 * WORD_SIZE = 4 * 8 = 32 and DI_SIZE = 8 * 8 = 64, as the retail constants
 * confirm (HIGH_HALFWORD_COEFF = 2^16, HIGH_WORD_COEFF = 2^32,
 * REP_BIT = 2^11). */
#define BITS_PER_UNIT 8
#define WORD_SIZE (sizeof (SItype) * BITS_PER_UNIT)
#define HIGH_HALFWORD_COEFF (((UDItype) 1) << (WORD_SIZE / 2))
#define HIGH_WORD_COEFF (((UDItype) 1) << WORD_SIZE)
#define DI_SIZE (sizeof (DItype) * BITS_PER_UNIT)

#define DF_SIZE 53
#define SF_SIZE 24

#define REP_BIT ((USItype) 1 << (DI_SIZE - DF_SIZE))

SFtype
__floatdisf (DItype u)
{
  DFtype f;

  if (DF_SIZE < DI_SIZE
      && DF_SIZE > (DI_SIZE - DF_SIZE + SF_SIZE))
    {
      if (! (- ((DItype) 1 << DF_SIZE) < u
	     && u < ((DItype) 1 << DF_SIZE)))
	{
	  if ((USItype) u & (REP_BIT - 1))
	    u |= REP_BIT;
	}
    }
  f = (SItype) (u >> WORD_SIZE);
  f *= HIGH_HALFWORD_COEFF;
  f *= HIGH_HALFWORD_COEFF;
  f += (USItype) (u & (HIGH_WORD_COEFF - 1));

  return (SFtype) f;
}
