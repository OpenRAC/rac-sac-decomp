/* ICONHORMENU_GetMiddleSlot__FP12tICONHORMENU -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D8EB0.c.
 */

unsigned int ICONHORMENU_GetMiddleSlot__FP12tICONHORMENU(char *object)
{
    unsigned int state = *(unsigned int *)(object + 4);
    if (state == 1)
        return 0;
    if (state > 3)
        return *(unsigned int *)(object + 8) >> 1;
    return *(unsigned int *)(object + 0x0C);
}
