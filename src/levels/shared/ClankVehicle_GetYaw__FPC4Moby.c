/* ClankVehicle_GetYaw__FPC4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rend le flottant +0x20 du module attache a l'objet (+0x58).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/18_multiplayer_03/LEVEL_18_155FF8.c.
 */

float ClankVehicle_GetYaw__FPC4Moby(char *a0)
{
    return *(float *)(*(char **)(a0 + 0x58) + 0x20);
}
