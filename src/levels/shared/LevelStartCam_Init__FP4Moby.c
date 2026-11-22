/* LevelStartCam_Init__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the global flag byte is set, otherwise -1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_158F18.c.
 */

extern unsigned char g_moby_firstInit;

int LevelStartCam_Init__FP4Moby(void)
{
    return g_moby_firstInit != 0 ? 1 : -1;
}
