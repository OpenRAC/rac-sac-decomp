/* SCRNMAP_ClampMapOffset__FPiT0 -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C5428.c.
 */

extern int D_L01_003A8EE8[];

void SCRNMAP_ClampMapOffset__FPiT0(int *x, int *y)
{
    if (*x < -D_L01_003A8EE8[6])
        *x = -D_L01_003A8EE8[6];
    if (*x > D_L01_003A8EE8[8])
        *x = D_L01_003A8EE8[8];
    if (*y < -D_L01_003A8EE8[7])
        *y = -D_L01_003A8EE8[7];
    if (*y > D_L01_003A8EE8[9])
        *y = D_L01_003A8EE8[9];
}
