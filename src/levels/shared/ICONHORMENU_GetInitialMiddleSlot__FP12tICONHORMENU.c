/* ICONHORMENU_GetInitialMiddleSlot__FP12tICONHORMENU -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D8EE8.c.
 */

unsigned int ICONHORMENU_GetInitialMiddleSlot__FP12tICONHORMENU(int *object)
{
    if (object[1] != 1)
        return (unsigned int)object[2] >> 1;
    return 0;
}
