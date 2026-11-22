/* PAUSEMODE_MustAutoSaveBeforeExit__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one byte of the global flag table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001400.c.
 */

extern unsigned char D_FE_000FB68D[];

unsigned char PAUSEMODE_MustAutoSaveBeforeExit__Fv(void)
{
    return D_FE_000FB68D[0];
}
