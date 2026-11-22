/* ICONMENU_GetCurrentItemNode__FP9tICONMENU -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D83F8.c.
 */

int ICONMENU_GetCurrentItemNode__FP9tICONMENU(int *set)
{
    if (set[1] != 0)
        return set[0] + set[3] * 0x1C;
    return 0;
}
