/* dpadd -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies two 64-bit arguments, calls a helper pair and a final call.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/dpadd_FRONTEND.c.
 */

extern void __unpack_d(double *, char *);
extern double func_FE_069340(char *, char *, char *);
extern double __pack_d(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    __unpack_d(&a, left);
    __unpack_d(&b, right);
    value = func_FE_069340(left, right, output);
    return __pack_d(value);
}
