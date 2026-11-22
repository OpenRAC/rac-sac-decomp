/* GCSPOPPLER_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Subtracts the float at +4 of the third record from the float at +0x24C of
 * the record that precedes the first argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_110F38.c.
 */

typedef struct {
    char pad0[0x24C];
    float f24C;
} Rec;

typedef struct {
    char pad0[4];
    float f4;
} Src;

void GCSPOPPLER_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo(char *a0, int a1, int a2, Src *s)
{
    Rec *r = (Rec *)(a0 - 0x258);

    r->f24C = r->f24C - s->f4;
}
