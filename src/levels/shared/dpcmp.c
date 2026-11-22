/* dpcmp -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/dpcmp_FRONTEND.c.
 */

void __unpack_d(double *, long long *);
int __fpcmp_parts_d(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    __unpack_d(&a, l0);
    __unpack_d(&b, l1);
    return __fpcmp_parts_d(l0, l1);
}
