/* __negdf2 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc fp-bit.c; see THIRD_PARTY_NOTICES.md.
 *
 * EE-GCC 2.9 libgcc routine (fp-bit.c, DOUBLE configuration,
 * US_SOFTWARE_GOFAST): negate() = __negdf2. __unpack_d fills a 24-byte
 * descriptor (kind, sign, exponent, fraction), the sign is flipped and
 * __pack_d rebuilds the double.
 */

typedef struct {
    int kind;
    int sign;
    int exponent;
    int pad;
    unsigned long long fraction;
} double_descriptor;

extern void __unpack_d(double *value, double_descriptor *out);
extern double __pack_d(double_descriptor *value);

double __negdf2(double value)
{
    double_descriptor descriptor;

    __unpack_d(&value, &descriptor);
    descriptor.sign = (descriptor.sign == 0);
    return __pack_d(&descriptor);
}
