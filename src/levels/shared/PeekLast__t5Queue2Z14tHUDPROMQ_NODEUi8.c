/* PeekLast__t5Queue2Z14tHUDPROMQ_NODEUi8 -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Slot lookup in the level object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_015EF8.c.
 */

int PeekLast__t5Queue2Z14tHUDPROMQ_NODEUi8(int *p)
{
    int count = p[25];
    int other = p[24];

    if (other == count)
        return 0;
    return (int)p + count * 12;
}
