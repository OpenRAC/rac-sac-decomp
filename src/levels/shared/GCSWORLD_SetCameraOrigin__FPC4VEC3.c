/* GCSWORLD_SetCameraOrigin__FPC4VEC3 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_133180.c.
 */

extern char D_L24_003A30D8[];
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(void *, void *, void *);

void GCSWORLD_SetCameraOrigin__FPC4VEC3(void *value)
{
    VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(D_L24_003A30D8, D_L24_003A30D8 - 0x60, value);
}
