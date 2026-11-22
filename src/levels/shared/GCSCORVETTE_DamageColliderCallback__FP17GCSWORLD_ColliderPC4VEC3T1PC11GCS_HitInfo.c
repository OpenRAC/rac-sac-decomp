/* GCSCORVETTE_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Subtracts the source's step from the owner's first value and 0.15 times the
 * step from the second one, clamping the second at zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_105700.c.
 */

typedef struct Owner {
    char pad0[0x26C];
    float a;
    float b;
} Owner;

extern float fabsf(float x);

void GCSCORVETTE_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo(char *member, int a1, int a2, float *src)
{
    Owner *o = (Owner *)(member - 0x434);
    float v;

    o->a = o->a - src[1];
    v = o->b - src[1] * 0.15f;
    o->b = (v + fabsf(v)) * 0.5f;
}
