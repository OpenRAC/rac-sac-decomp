/* fpsub -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc fp-bit.c; see THIRD_PARTY_NOTICES.md.
 *
 * EE-GCC 2.9 libgcc routine (fp-bit.c, FLOAT single-precision configuration,
 * US_SOFTWARE_GOFAST): sub() = fpsub. Like fpadd, but the sign of the second
 * operand is flipped before the soft-float addition.
 */

typedef struct {
    int kind;
    int sign;
    int exponent;
    int fraction;
} float_descriptor;

extern void __unpack_f(float *value, float_descriptor *out);
extern float __pack_f(float_descriptor *value);
extern float_descriptor *func_FE_0006A008(float_descriptor *left,
                                       float_descriptor *right,
                                       float_descriptor *result);

float fpsub(float left, float right)
{
    float_descriptor first;
    float_descriptor second;
    float_descriptor difference;

    __unpack_f(&left, &first);
    __unpack_f(&right, &second);
    second.sign = second.sign ^ 1;
    return __pack_f(func_FE_0006A008(&first, &second, &difference));
}
