/* Lvl04GondalaCombatCtrl_GetGondolaPlayerIsOn__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1B5420.c.
 */

int Lvl04GondalaCombatCtrl_GetGondolaPlayerIsOn__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(int *)(child + 4);
}
