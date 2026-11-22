/* SwarmManager_Detarget__FP4MobyUi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1B6440.c.
 */

void SwarmManager_Detarget__FP4MobyUi(char *object, int index)
{
    int stride = 0x14;
    char *table = *(char **)(object + 0x58);
    int offset = index * stride;
    *(int *)(table + offset + 4) = -1;
}
