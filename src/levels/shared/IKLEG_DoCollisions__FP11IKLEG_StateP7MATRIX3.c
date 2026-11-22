/* IKLEG_DoCollisions__FP11IKLEG_StateP7MATRIX3 -- 252 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Probes the ground below the object and stores the height and the slope
 * factor of the surface.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0291A8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

struct Obj0291A8 {
    char pad0[0x4C];
    Vec3 axis;
    float f58;
    float height;
    Vec3 pos;
    char pad6C[0x1C];
    float slope;
    char pad8C[0x40];
    float matrix[1];
};

extern float D_L01_002D7CC4;
extern int MOBYCOLL_CollideDownRayWithWorld__FPfP15CollSurfaceInfoPC4VEC3fii(float *a, Vec3 *b, Vec3 *c, int d, int e, float f);
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(Vec3 *out, float *matrix, Vec3 *in);

int IKLEG_DoCollisions__FP11IKLEG_StateP7MATRIX3(struct Obj0291A8 *o, int arg)
{
    float lim;
    Vec3 p;
    float hit[8];
    Vec3 n;
    Vec3 tmp;
    float y;
    float *a;

    y = o->pos.y + 0.2f;
    p.x = o->pos.x;
    p.y = y;
    p.z = o->pos.z;
    if ((unsigned char)MOBYCOLL_CollideDownRayWithWorld__FPfP15CollSurfaceInfoPC4VEC3fii(&lim, (Vec3 *)hit, &p, 0x28, 0, y - D_L01_002D7CC4)) {
        lim = lim - 0.2f;
        o->height = lim;
        tmp = *(Vec3 *)hit;
        VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(&n, o->matrix, &tmp);
        a = &o->axis.x;
        o->slope = a[0] * n.x + a[1] * n.y + a[2] * n.z;
        return 1;
    }
    o->height = 0.0f;
    o->slope = 0.0f;
    return 0;
}
