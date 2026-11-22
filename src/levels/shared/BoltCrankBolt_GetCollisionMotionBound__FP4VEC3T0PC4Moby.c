/* BoltCrankBolt_GetCollisionMotionBound__FP4VEC3T0PC4Moby -- 196 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When MOBY_GetCollisionAABBLocalUpRotating__FP4VEC3T0PC4Moby succeeds, moves
 * both points by the object's position and lowers the first by 0.5; returns
 * whether it did.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_155D88.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Obj;

extern int MOBY_GetCollisionAABBLocalUpRotating__FP4VEC3T0PC4Moby(void);

int BoltCrankBolt_GetCollisionMotionBound__FP4VEC3T0PC4Moby(Vec3 *a, Vec3 *b, Obj *o)
{
    Vec3 *p;

    if (MOBY_GetCollisionAABBLocalUpRotating__FP4VEC3T0PC4Moby() == 0)
        return 0;
    p = &o->pos;
    a->x = a->x + p->x;
    a->y = a->y + p->y;
    a->z = a->z + p->z;
    b->x = b->x + p->x;
    b->y = b->y + p->y;
    b->z = b->z + p->z;
    a->y = a->y - 0.5f;
    return 1;
}
