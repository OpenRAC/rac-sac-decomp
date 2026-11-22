/* JackOfAllTrades_GetEffectMan__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_1611B0.c.
 */

char *JackOfAllTrades_GetEffectMan__FP4Moby(char *object)
{
    return *(char **)(object + 0x58) + 0x54;
}
