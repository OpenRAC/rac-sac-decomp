/* MOBYCOLL_CompressWandByTriangle__FPC4VEC3T0ffPC15ColFileTriangleT0 -- 276 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Shortens a travel distance by the triangle hit fraction, then refines it
 * with a probe test at the end point.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01CE48.c.
 */

extern int COL_CheckTriLineSegClsn__FRC15ColFileTrianglePC4VEC3T1fPf(float t, void *a, float *p, float *d, float *out);
extern int COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(float *b, void *c, void *d, float *e, float a);
extern float func_L01_0294C8(float a, float *b, float *c, float *d);

float MOBYCOLL_CompressWandByTriangle__FPC4VEC3T0ffPC15ColFileTriangleT0(float *p, float *d, void *a, void *b, float len, float r)
{
    float pt[3];
    float hit[3];
    float out[3];

    if (COL_CheckTriLineSegClsn__FRC15ColFileTrianglePC4VEC3T1fPf(len, a, p, d, out)) {
        len -= (1.0f - out[0]) * len + r;
    }
    pt[0] = p[0] + d[0] * len;
    pt[1] = p[1] + d[1] * len;
    pt[2] = p[2] + d[2] * len;
    if (COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(hit, a, b, pt, r)) {
        len -= func_L01_0294C8(r * r, hit, d, pt);
    }
    return len;
}
