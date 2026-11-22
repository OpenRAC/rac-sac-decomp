/* TIE_GetBreakable__FP3Tie -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_10_084C50.c.
 */

int TIE_GetBreakable__FP3Tie(char *object)
{
    if (*(unsigned char *)(object + 0x56) == 2)
        return *(int *)(object + 0x58);
    return 0;
}
