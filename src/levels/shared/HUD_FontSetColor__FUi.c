/* HUD_FontSetColor__FUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B8F0.c.
 */

extern int *D_FE_000FB63C;

void HUD_FontSetColor__FUi(void *p)
{
    *D_FE_000FB63C = (int)p;
}
