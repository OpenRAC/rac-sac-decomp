/* COL_CheckTriLineSegClsn__FRC15ColFileTriangleRC11LineSegmentPf -- 492 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether a ray segment hits a triangular prism; stores the hit distance
 * and returns 1 on a hit.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_111388.c.
 */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct {
    char pad0[8];
    V4 pl;
    V4 e[3];
} Tri;

typedef struct {
    float o[3];
    float pad[3];
    float d[3];
} Ray;

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ float Plane(float *pl, float *p)
{
    return pl[0] * p[0] + pl[1] * p[1] + pl[2] * p[2] + pl[3];
}

static __inline__ void Scale3(float *dst, float *v, float s)
{
    dst[0] = s * v[0];
    dst[1] = s * v[1];
    dst[2] = s * v[2];
}

static __inline__ void Add3(float *dst, float *a, float *b)
{
    dst[0] = a[0] + b[0];
    dst[1] = a[1] + b[1];
    dst[2] = a[2] + b[2];
}

int COL_CheckTriLineSegClsn__FRC15ColFileTriangleRC11LineSegmentPf(Tri *tri, Ray *ray, float *out)
{
    float pt[3];
    float den;
    float t;

    den = Dot3(ray->d, &tri->pl.x);
    if (den > -9.999999747378752e-06f && den < 9.999999747378752e-06f) {
        return 0;
    }
    t = Plane(&tri->pl.x, ray->o) / den;
    if (t > 0.0f) {
        return 0;
    }
    if (t < -1.0f) {
        return 0;
    }
    t = -t;
    Scale3(pt, ray->d, t);
    Add3(pt, pt, ray->o);
    if (Plane(&tri->e[0].x, pt) > 0.0f) {
        return 0;
    }
    if (Plane(&tri->e[1].x, pt) > 0.0f) {
        return 0;
    }
    if (Plane(&tri->e[2].x, pt) > 0.0f) {
        return 0;
    }
    if (out) {
        *out = t;
    }
    return 1;
}
