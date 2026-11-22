/* VehicleFormation_GetCount__FPC4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_1C7B10.c.
 */

int VehicleFormation_GetCount__FPC4Moby(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(int *)(child + 0x18);
}
