/* MCPI_SetMyMsgBoxId__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_myMsgBoxId;

void MCPI_SetMyMsgBoxId__Fi(int id)
{
    g_myMsgBoxId = id;
}
