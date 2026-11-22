/* MOBY_GetCollisionAABB__FP4VEC3T0PC4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_066610.c.
 */

extern void MOBY_GetCollisionAABB__FP4VEC3T0PC4MobyPC7MATRIX4(void *, void *, void *, void *);

void MOBY_GetCollisionAABB__FP4VEC3T0PC4Moby(void *a, void *b, void *c)
{
    MOBY_GetCollisionAABB__FP4VEC3T0PC4MobyPC7MATRIX4(a, b, c, c);
}
