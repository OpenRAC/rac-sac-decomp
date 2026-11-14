/* MCPI_SetTheirMsgBoxId__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_theirMsgBoxId;

void MCPI_SetTheirMsgBoxId__Fi(int id)
{
    g_theirMsgBoxId = id;
}
