/* PAUSEMODE_RefreshNoFadeOverlay__FUiUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A5D20.c.
 */

extern int D_FE_000FB6A0;
extern int D_FE_000FB69C;

void PAUSEMODE_RefreshNoFadeOverlay__FUiUi(int first, int second)
{
    D_FE_000FB6A0 = first;
    D_FE_000FB69C = second;
}
