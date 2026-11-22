/* MootatorSpinner_EmitParticle__FUiP4VEC3T1ffffUiff -- 304 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills each record returned by a helper with two copied vectors, six scalar
 * parameters and a reciprocal.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1D4320.c.
 */

struct Rec1D4320 {
    float a[3];
    float b[3];
    float f18;
    int f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    int f38;
};

extern struct Rec1D4320 *PAR_Emit__FPiii(int *count, void *obj, int flag);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void MootatorSpinner_EmitParticle__FUiP4VEC3T1ffffUiff(void *obj, float *p, float *q,
                 float x0, float x1, float x2, float x3, int tag, float x4, float x5)
{
    int n;
    float inv;
    struct Rec1D4320 *recs;
    struct Rec1D4320 *r;
    struct Rec1D4320 *end;

    recs = PAR_Emit__FPiii(&n, obj, 1);
    if (n == 0) {
        return;
    }
    inv = 1.0f / x4;
    r = recs;
    end = recs + n;
    while (r != end) {
        Copy3(r->a, p);
        Copy3(r->b, q);
        r->f1C = 0;
        r->f20 = x1;
        r->f18 = x0;
        r->f24 = x2;
        r->f2C = x3;
        r->f30 = x4;
        r->f34 = inv;
        r->f38 = tag;
        r->f28 = x5;
        r++;
    }
}
