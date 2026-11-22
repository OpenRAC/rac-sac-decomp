/* PAUSEMODE_ResetScaleFX__FUcff -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_09BAA8.c.
 */

extern unsigned char D_FE_000FB6A5;
extern unsigned char D_FE_000FB6A6;
extern float D_FE_000FB6A8;
extern float D_FE_000FB6AC;

void PAUSEMODE_ResetScaleFX__FUcff(unsigned char flag, float v0, float v1)
{
    D_FE_000FB6A6 = flag;
    D_FE_000FB6A5 = flag;
    D_FE_000FB6A8 = v1;
    D_FE_000FB6AC = v0;
}
