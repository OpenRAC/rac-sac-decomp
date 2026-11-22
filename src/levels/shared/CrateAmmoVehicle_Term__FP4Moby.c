/* CrateAmmoVehicle_Term__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unlinks the node stored at offset 0x58 of the item.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/03_kalidon/LEVEL_03_158D68.c.
 */

extern void CrateShared_Term__FP4MobyP18CrateCommonContent(int unused, char *node);

void CrateAmmoVehicle_Term__FP4Moby(char *item)
{
    CrateShared_Term__FP4MobyP18CrateCommonContent((int)item, *(char **)(item + 0x58));
}
