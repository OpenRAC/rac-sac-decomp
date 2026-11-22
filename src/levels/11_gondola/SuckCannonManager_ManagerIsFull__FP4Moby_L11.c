/* SuckCannonManager_ManagerIsFull__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1B5408.c.
 */

int SuckCannonManager_ManagerIsFull__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(int *)(child + 4) == 6;
}
