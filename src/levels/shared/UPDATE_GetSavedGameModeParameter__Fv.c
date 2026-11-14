/* UPDATE_GetSavedGameModeParameter__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_savedGameModeParameter;

int UPDATE_GetSavedGameModeParameter__Fv(void)
{
    return g_savedGameModeParameter;
}
