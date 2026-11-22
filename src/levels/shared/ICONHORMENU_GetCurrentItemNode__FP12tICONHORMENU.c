/* ICONHORMENU_GetCurrentItemNode__FP12tICONHORMENU -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D9220.c.
 */

int ICONHORMENU_GetCurrentItemNode__FP12tICONHORMENU(int *set)
{
    if (set[1] != 0)
        return set[0] + set[3] * 0x40;
    return 0;
}
