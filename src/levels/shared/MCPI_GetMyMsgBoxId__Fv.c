/* MCPI_GetMyMsgBoxId__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_myMsgBoxId;

int MCPI_GetMyMsgBoxId__Fv(void)
{
    return g_myMsgBoxId;
}
