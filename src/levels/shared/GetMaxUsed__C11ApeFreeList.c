/* GetMaxUsed__C11ApeFreeList -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_108D58.c.
 */

int GetMaxUsed__C11ApeFreeList(char *object)
{
    return *(int *)(object + 0x2C);
}
