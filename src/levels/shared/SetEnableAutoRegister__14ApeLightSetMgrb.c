/* SetEnableAutoRegister__14ApeLightSetMgrb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B900.c.
 */

extern char D_FE_0010A6B8[];

void SetEnableAutoRegister__14ApeLightSetMgrb(unsigned char b)
{
    *(char *)D_FE_0010A6B8 = (char)b;
}
