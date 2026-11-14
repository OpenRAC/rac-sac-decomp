/* fpcmp -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc fp-bit.c; see THIRD_PARTY_NOTICES.md.
 *
 * EE-GCC 2.9 libgcc routine (fp-bit.c, FLOAT single-precision configuration,
 * US_SOFTWARE_GOFAST): compare() = fpcmp. The two floats are unpacked and
 * compared via __fpcmp_parts_f, which returns -1, 0 or +1.
 */

typedef struct {
    int kind;
    int sign;
    int exponent;
    int fraction;
} float_descriptor;

extern void __unpack_f(float *value, float_descriptor *out);
extern int func_FE_0006A658(float_descriptor *left, float_descriptor *right);

int fpcmp(float left, float right)
{
    float_descriptor first;
    float_descriptor second;

    __unpack_f(&left, &first);
    __unpack_f(&right, &second);
    return func_FE_0006A658(&first, &second);
}
