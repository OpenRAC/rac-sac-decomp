/* Line_SetColor__FP10Line_GroupUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_108D50.c.
 */

void Line_SetColor__FP10Line_GroupUi(char *object, int value)
{
    *(int *)(object + 0x2C) = value;
}
