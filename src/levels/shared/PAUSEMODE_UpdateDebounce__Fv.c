/* PAUSEMODE_UpdateDebounce__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC260.c.
 */

extern int D_FE_000FB704;

void PAUSEMODE_UpdateDebounce__Fv(void)
{
    if (D_FE_000FB704 != 0)
        D_FE_000FB704--;
}
