/* PAR_IsGroupDestroyed__FPC9PAR_Group -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/ENGINE/par/LEVEL_04_09A750.c.
 */

int PAR_IsGroupDestroyed__FPC9PAR_Group(char *object)
{
    return *(unsigned short *)(object + 0x10) == 0x100;
}
