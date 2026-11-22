/* GetCuffLinkBombConfig__C12ExpatContent -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the global at 0x305E0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_019510.c.
 */

extern char G_ExpatShared_CuffLinkBombConfig[];

int GetCuffLinkBombConfig__C12ExpatContent(void)
{
    return (int)G_ExpatShared_CuffLinkBombConfig;
}
