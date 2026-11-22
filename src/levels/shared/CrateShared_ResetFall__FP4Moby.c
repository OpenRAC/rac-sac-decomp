/* CrateShared_ResetFall__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_03_1DBA08.c.
 */

void CrateShared_ResetFall__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x54);
    *(int *)(child + 4) = 0;
    *(int *)(child + 8) = 0;
    *(int *)(child + 0xC) = 0;
    *(unsigned char *)(object + 0x46) = 1;
}
