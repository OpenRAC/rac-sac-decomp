/* ICONHORMENU_IsScrolling__FP12tICONHORMENU -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0DA658.c.
 */

int ICONHORMENU_IsScrolling__FP12tICONHORMENU(char *object)
{
    return (unsigned int)(*(int *)(object + 0xC8) - 2) < 2;
}
