/* MOBY_GetCollisionMotionBoundStatic__FP4VEC3T0PC4Moby -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When MOBY_GetCollisionCenter__FP4VEC3PC4Moby accepts the source it copies
 * the 12-byte vector to the destination; returns whether it did.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0826F8.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int MOBY_GetCollisionCenter__FP4VEC3PC4Moby(Vec3 *src, int arg);

int MOBY_GetCollisionMotionBoundStatic__FP4VEC3T0PC4Moby(Vec3 *src, Vec3 *dst, int arg)
{
    if (MOBY_GetCollisionCenter__FP4VEC3PC4Moby(src, arg) == 0)
        return 0;
    *dst = *src;
    return 1;
}
