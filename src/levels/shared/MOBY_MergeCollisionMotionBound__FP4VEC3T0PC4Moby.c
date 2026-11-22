/* MOBY_MergeCollisionMotionBound__FP4VEC3T0PC4Moby -- 212 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Queries an object's bounds through its callback and passes a padded box on.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_082620.c.
 */

typedef int (*BoundsFn)(float *lo, float *hi);
typedef struct Vt { char pad0[0x20]; BoundsFn bounds; } Vt;
typedef struct Mid { char pad0[0x10]; Vt *vt; } Mid;
typedef struct Obj { char pad0[0x40]; Mid *mid; char pad1[0x18]; int enabled; } Obj;
extern void MergeAABBWithAABB__FP4VEC3T0PC4VEC3N32(int a, int b, int c, int d, float *lo, float *hi);

void MOBY_MergeCollisionMotionBound__FP4VEC3T0PC4Moby(int a, int b, Obj *o)
{
    float lo[4];
    float hi[4];
    BoundsFn fn;
    if (o->mid != 0) {
        fn = o->mid->vt->bounds;
        if (fn != 0 && o->enabled != 0) {
            if (fn(lo, hi) != 0) {
                lo[0] = lo[0] - 0.03125f;
                lo[1] = lo[1] - 0.03125f;
                lo[2] = lo[2] - 0.03125f;
                hi[0] = hi[0] + 0.03125f;
                hi[1] = hi[1] + 0.03125f;
                hi[2] = hi[2] + 0.03125f;
                MergeAABBWithAABB__FP4VEC3T0PC4VEC3N32(a, b, a, b, lo, hi);
            }
        }
    }
}
