/* dptoli -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc fp-bit.c; see THIRD_PARTY_NOTICES.md.
 *
 * EE-GCC 2.9 libgcc routine (fp-bit.c, DOUBLE configuration,
 * US_SOFTWARE_GOFAST): float_to_si() = dptoli, which unpacks a double and
 * converts it to a signed integer.
 */

typedef struct {
    unsigned int kind;
    int sign;
    int exponent;
    int pad;
    unsigned long long fraction;
} double_descriptor;

extern void __unpack_d(double *value, double_descriptor *out);

int dptoli(double value)
{
    double_descriptor descriptor;
    int result;

    __unpack_d(&value, &descriptor);
    if ((descriptor.kind ^ 2) == 0)
        return 0;
    if (descriptor.kind < 2)
        return 0;
    if ((descriptor.kind ^ 4) == 0)
        return descriptor.sign ? (int)0x80000000 : 0x7FFFFFFF;
    if (descriptor.exponent < 0)
        return 0;
    if (descriptor.exponent >= 0x1F)
        return descriptor.sign ? (int)0x80000000 : 0x7FFFFFFF;
    result = (int)(descriptor.fraction >> (60 - descriptor.exponent));
    if (descriptor.sign)
        result = -result;
    return result;

}
