/* MCPI_SetGameId__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_gameId;

void MCPI_SetGameId__Fi(int id)
{
    g_gameId = id;
}
