/* __unpack_f -- 144 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unpacks a single-precision float into class, sign, unbiased exponent and
 * fraction fields.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/__unpack_f.c.
 */

enum {
    CLASS_SNAN,
    CLASS_QNAN,
    CLASS_ZERO,
    CLASS_NUMBER,
    CLASS_INFINITY
};

typedef struct {
    unsigned int fraction : 23;
    unsigned int exp : 8;
    unsigned int sign : 1;
} FloatBits;

typedef union {
    float value;
    unsigned int word;
    FloatBits bits;
} FloatUnion;

typedef struct {
    int class;
    unsigned int sign;
    int normal_exp;
    unsigned int fraction;
} Unpacked;

void __unpack_f(FloatUnion *src, Unpacked *dst)
{
    unsigned int fraction = src->bits.fraction;
    int exp = src->bits.exp;
    int sign = src->bits.sign;

    dst->sign = sign;
    if (exp == 0) {
        dst->class = CLASS_ZERO;
    } else if (exp == 0xFF) {
        if (fraction == 0) {
            dst->class = CLASS_INFINITY;
        } else {
            if (fraction & 0x100000)
                dst->class = CLASS_QNAN;
            else
                dst->class = CLASS_SNAN;
            dst->fraction = fraction;
        }
    } else {
        dst->normal_exp = exp - 0x7F;
        dst->class = CLASS_NUMBER;
        dst->fraction = (fraction << 7) | 0x40000000;
    }
}
