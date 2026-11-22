/* StartLevelExitAnimation__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_028988.c.
 */

extern unsigned char *g_levelEntryExitAnimation;

int StartLevelExitAnimation__Fv(void)
{
    unsigned char *p = g_levelEntryExitAnimation;
    if (p != 0)
    {
        p[0x45] = 2;
        return 1;
    }
    return 0;
}
