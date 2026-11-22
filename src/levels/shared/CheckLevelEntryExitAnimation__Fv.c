/* CheckLevelEntryExitAnimation__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0289B0.c.
 */

extern unsigned char *g_levelEntryExitAnimation;

int CheckLevelEntryExitAnimation__Fv(void)
{
    unsigned char *p = g_levelEntryExitAnimation;
    if (p != 0)
        return p[0x45] != 0;
    return 0;
}
