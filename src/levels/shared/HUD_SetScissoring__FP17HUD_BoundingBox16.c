/* HUD_SetScissoring__FP17HUD_BoundingBox16 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00BD78.c.
 */

void HUD_SetScissoring__FUsUsUsUsb(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

void HUD_SetScissoring__FP17HUD_BoundingBox16(const unsigned short *p)
{
    HUD_SetScissoring__FUsUsUsUsb(p[0], p[2], p[4], p[6], 1);
}
