/* GCSWORLD_SetCameraOffset__FPC8MATRIX43 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1331B0.c.
 */

extern char D_L24_003A30A8[];
extern void MatrixMul__FP8MATRIX43PC8MATRIX43T1(void *, void *, void *);

void GCSWORLD_SetCameraOffset__FPC8MATRIX43(void *value)
{
    MatrixMul__FP8MATRIX43PC8MATRIX43T1(D_L24_003A30A8, value, D_L24_003A30A8 - 0x30);
}
