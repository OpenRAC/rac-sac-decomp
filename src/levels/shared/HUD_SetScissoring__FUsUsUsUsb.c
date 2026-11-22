/* HUD_SetScissoring__FUsUsUsUsb -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Masks the four arguments to 16 bits.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00BD50.c.
 */

void _Internal_setScissoring__FUsUsUsUs(unsigned int, unsigned int, unsigned int, unsigned int);

void HUD_SetScissoring__FUsUsUsUsb(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    _Internal_setScissoring__FUsUsUsUs(a & 0xFFFF, b & 0xFFFF, c & 0xFFFF, d & 0xFFFF);
}
