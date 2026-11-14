/* fpcmp -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * It follows the form of GCC's libgcc fp-bit.c; see THIRD_PARTY_NOTICES.md.
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
