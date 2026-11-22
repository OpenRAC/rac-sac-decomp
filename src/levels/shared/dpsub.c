/* dpsub -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/dpsub_FRONTEND.c.
 */

/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void __unpack_d(double *, char *);
extern long long func_FE_069340(char *, char *, char *);
extern double __pack_d(long long);

double dpsub(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    __unpack_d(&a, left);
    __unpack_d(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_FE_069340(left, right, output);
    return __pack_d(value);
}
