/* UPDATE_IsGameInThisMode__F14GAME_MODE_LIST -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01A868.c.
 */

extern int g_GameMode;

int UPDATE_IsGameInThisMode__F14GAME_MODE_LIST(int value)
{
    return g_GameMode == value;
}
