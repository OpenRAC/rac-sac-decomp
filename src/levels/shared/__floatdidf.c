/* __floatdidf -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/__floatdidf_LEVEL_01.c.
 */

extern double litodp(int value);
extern double dpmul(double a, double b);
extern double dpadd(double a, double b);

double __floatdidf(long long value)
{
    double hi = dpmul(dpmul(litodp((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = litodp(low);
    if (low < 0)
        lo = dpadd(lo, 4294967296.0);
    return dpadd(hi, lo);
}
