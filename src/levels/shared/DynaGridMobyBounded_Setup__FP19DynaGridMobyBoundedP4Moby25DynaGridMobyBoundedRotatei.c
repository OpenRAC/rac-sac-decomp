/* DynaGridMobyBounded_Setup__FP19DynaGridMobyBoundedP4Moby25DynaGridMobyBoundedRotatei -- 372 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Initialises a two-point record from a source object in one of three modes
 * and flags it when the span is wide.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0133E8.c.
 */

struct Src0133E8 {
    char pad0[0x30];
    float pos[3];
};

struct Seg0133E8 {
    unsigned short h0;
    unsigned char b2;
    unsigned char pad3;
    struct Src0133E8 *src;
    float a[3];
    float b[3];
    unsigned char b20;
    unsigned char pad21;
    unsigned short h22;
};

extern void MOBY_GetCollisionAABBLocalUpRotating__FP4VEC3T0PC4Moby(float *a, float *b, struct Src0133E8 *s);
extern void MOBY_GetCollisionAABBLocalRotating__FP4VEC3T0PC4Moby(float *a, float *b, struct Src0133E8 *s);
extern void MOBY_GetCollisionAABB__FP4VEC3T0PC4Moby(float *a, float *b, struct Src0133E8 *s);

static __inline__ void Sub0133E8(float *a, float *b)
{
    a[0] = a[0] - b[0];
    a[1] = a[1] - b[1];
    a[2] = a[2] - b[2];
}

static __inline__ int Wide0133E8(float *a, float *b)
{
    float dx;
    float dz;

    dx = b[0] - a[0];
    dz = b[2] - a[2];
    if (8.0f < dx || 8.0f < dz) {
        return 1;
    }
    return 0;
}

void DynaGridMobyBounded_Setup__FP19DynaGridMobyBoundedP4Moby25DynaGridMobyBoundedRotatei(struct Seg0133E8 *o, struct Src0133E8 *s, int mode, int val)
{
    o->b2 = 2;
    o->h0 = 0xFFFF;
    o->src = s;
    if (mode == 1) {
        MOBY_GetCollisionAABBLocalUpRotating__FP4VEC3T0PC4Moby(o->a, o->b, s);
    } else if (mode == 0) {
        MOBY_GetCollisionAABBLocalRotating__FP4VEC3T0PC4Moby(o->a, o->b, s);
    } else {
        MOBY_GetCollisionAABB__FP4VEC3T0PC4Moby(o->a, o->b, s);
        Sub0133E8(o->a, s->pos);
        Sub0133E8(o->b, s->pos);
    }
    o->b20 = Wide0133E8(o->a, o->b);
    o->h22 = val;
}
