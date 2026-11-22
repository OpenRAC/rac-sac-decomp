/* GasTrapController_IsTripped__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/18_multiplayer_03/LEVEL_18_159C48.c.
 */

int GasTrapController_IsTripped__FP4Moby(char *object)
{
    return *(unsigned char *)(object + 0x45) == 1;
}
