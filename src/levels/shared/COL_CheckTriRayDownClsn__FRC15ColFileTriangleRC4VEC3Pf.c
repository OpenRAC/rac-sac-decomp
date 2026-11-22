/* COL_CheckTriRayDownClsn__FRC15ColFileTriangleRC4VEC3Pf -- 372 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether a point lies inside a four-plane volume reached along the
 * first plane's normal, reporting the distance.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_111210.c.
 */

extern float fabsf(float x);

struct V3_111210 {
    float x;
    float y;
    float z;
};

struct Plane_111210 {
    float c[4];
};

struct Vol_111210 {
    char hdr[8];
    struct Plane_111210 pl[4];
};

static __inline__ float pdist(float *pl, float *p)
{
    return pl[0] * p[0] + pl[1] * p[1] + pl[2] * p[2] + pl[3];
}

int COL_CheckTriRayDownClsn__FRC15ColFileTriangleRC4VEC3Pf(struct Vol_111210 *v, float *pt, float *out)
{
    struct V3_111210 q;
    float t;

    if (fabsf(v->pl[0].c[1]) < 9.999999747378752e-06f) {
        return 0;
    }
    t = pdist(v->pl[0].c, pt) / v->pl[0].c[1];
    if (t < 0.0f) {
        return 0;
    }
    q = *(struct V3_111210 *)pt;
    q.y = q.y - t;
    if (pdist(v->pl[1].c, &q.x) > 0.0f) {
        return 0;
    }
    if (pdist(v->pl[2].c, &q.x) > 0.0f) {
        return 0;
    }
    if (pdist(v->pl[3].c, &q.x) > 0.0f) {
        return 0;
    }
    if (out != 0) {
        *out = t;
    }
    return 1;
}
