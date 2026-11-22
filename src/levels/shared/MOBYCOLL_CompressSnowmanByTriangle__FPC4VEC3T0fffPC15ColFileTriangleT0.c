/* MOBYCOLL_CompressSnowmanByTriangle__FPC4VEC3T0fffPC15ColFileTriangleT0 -- 404 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Marches along a ray until a probe test succeeds, then refines the distance.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01DC88.c.
 */

extern int COL_TestSphereWithTri__FPC15ColFileTrianglePC4VEC3T1f(float a, void *b, void *c, float *d);
extern int COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(float *b, void *c, void *d, float *e, float a);
extern float func_L01_0294C8(float a, float *b, float *c, float *d);

float MOBYCOLL_CompressSnowmanByTriangle__FPC4VEC3T0fffPC15ColFileTriangleT0(float *p, float *d, void *a, void *b, float max, float base, float k)
{
    float pt[3];
    float hit[3];
    float t;
    float s;
    float u;

    t = base * 1.5f;
    for (;;) {
        if (max < t) {
            break;
        }
        pt[0] = p[0] + d[0] * t;
        pt[1] = p[1] + d[1] * t;
        pt[2] = p[2] + d[2] * t;
        s = base + k * t;
        if (COL_TestSphereWithTri__FPC15ColFileTrianglePC4VEC3T1f(s, a, b, pt)) {
            max = t;
            break;
        }
        t += s * 1.5f;
    }
    u = base + k * max;
    pt[0] = p[0] + d[0] * max;
    pt[1] = p[1] + d[1] * max;
    pt[2] = p[2] + d[2] * max;
    if (COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(hit, a, b, pt, u)) {
        max -= func_L01_0294C8(u * u, hit, d, pt);
    }
    return max;
}
