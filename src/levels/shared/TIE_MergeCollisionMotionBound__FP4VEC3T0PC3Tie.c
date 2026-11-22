/* TIE_MergeCollisionMotionBound__FP4VEC3T0PC3Tie -- 180 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When the probe succeeds, pulls the box corners apart by 0.03125 and forwards
 * them.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_083CB0.c.
 */

struct V3 {
    float x;
    float y;
    float z;
};

struct Box {
    struct V3 lo;
    char pad_0c[4];
    struct V3 hi;
};

extern int TIE_GetCollisionAABB__FP4VEC3T0PC3Tie(struct V3 *a, struct V3 *b, void *w);
extern void MergeAABBWithAABB__FP4VEC3T0PC4VEC3N32(void *a, void *b, void *c, void *d, struct V3 *lo, struct V3 *hi);

void TIE_MergeCollisionMotionBound__FP4VEC3T0PC3Tie(void *a0, void *a1, void *a2)
{
    struct Box bx;

    if (TIE_GetCollisionAABB__FP4VEC3T0PC3Tie(&bx.lo, &bx.hi, a2) == 0) {
        return;
    }
    bx.lo.x = bx.lo.x - 0.03125f;
    bx.lo.y = bx.lo.y - 0.03125f;
    bx.lo.z = bx.lo.z - 0.03125f;
    bx.hi.x = bx.hi.x + 0.03125f;
    bx.hi.y = bx.hi.y + 0.03125f;
    bx.hi.z = bx.hi.z + 0.03125f;
    MergeAABBWithAABB__FP4VEC3T0PC4VEC3N32(a0, a1, a0, a1, &bx.lo, &bx.hi);
}
