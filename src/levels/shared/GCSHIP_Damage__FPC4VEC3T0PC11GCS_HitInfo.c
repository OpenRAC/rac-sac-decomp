/* GCSHIP_Damage__FPC4VEC3T0PC11GCS_HitInfo -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137228.c.
 */

extern void GCSHIP_ApplyDamage__Ff(float x);

void GCSHIP_Damage__FPC4VEC3T0PC11GCS_HitInfo(void *a0, void *a1, void *a2)
{
    GCSHIP_ApplyDamage__Ff(*(float *)((char *)a2 + 4));
}
