/* OperaTicketManager_NotifyContinuePointHit__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_continueFrom;
extern int g_continueTo;

void OperaTicketManager_NotifyContinuePointHit__Fv(void)
{
    g_continueTo = g_continueFrom;
}
