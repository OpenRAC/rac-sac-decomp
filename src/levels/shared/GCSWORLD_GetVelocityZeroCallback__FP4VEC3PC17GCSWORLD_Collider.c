/* GCSWORLD_GetVelocityZeroCallback__FP4VEC3PC17GCSWORLD_Collider -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the global 12-byte vector into the destination.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1305B0.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 g_zeroVec3;

void GCSWORLD_GetVelocityZeroCallback__FP4VEC3PC17GCSWORLD_Collider(Vec3 *dst)
{
    *dst = g_zeroVec3;
}
