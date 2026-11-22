/* CrateHealth_PowerupStolen__FP4MobyT0 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_160548.c.
 */

void CrateHealth_PowerupStolen__FP4MobyT0(char *object)
{
    char *child = *(char **)(object + 0x54);
    *(int *)(child + 0x10) = 0;
}
