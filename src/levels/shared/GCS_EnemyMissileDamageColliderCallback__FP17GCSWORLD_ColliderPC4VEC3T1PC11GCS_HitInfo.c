/* GCS_EnemyMissileDamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets the float stored 0x48 bytes before the object pointer to -1.0f.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_11F570.c.
 */

void GCS_EnemyMissileDamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo(char *o)
{
    *(float *)(o - 0x48) = -1.0f;
}
