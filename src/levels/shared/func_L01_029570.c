/* func_L01_029570 -- 328 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Transforms a point into a matrix's local frame and tests it against a box
 * grown by a margin.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_01C0E8.c.
 */

static __inline__ void SubVec(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

static __inline__ float Dot(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

int func_L01_029570(float *mn, float *mx, float *m, float *x, float s, float e)
{
    float d[3];
    float l0;
    float l1;
    float l2;

    SubVec(d, x, m + 12);
    l0 = Dot(d, m) * s;
    l1 = Dot(d, m + 4) * s;
    l2 = Dot(d, m + 8) * s;
    if (l0 < mn[0] - e) {
        return 0;
    }
    if (l1 < mn[1] - e) {
        return 0;
    }
    if (l2 < mn[2] - e) {
        return 0;
    }
    if (mx[0] + e < l0) {
        return 0;
    }
    if (mx[1] + e < l1) {
        return 0;
    }
    if (mx[2] + e < l2) {
        return 0;
    }
    return 1;
}
