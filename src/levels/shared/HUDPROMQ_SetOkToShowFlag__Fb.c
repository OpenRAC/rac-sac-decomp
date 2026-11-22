/* HUDPROMQ_SetOkToShowFlag__Fb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B900.c.
 */

extern char HUDPROMQ_G_OkToShow[];

void HUDPROMQ_SetOkToShowFlag__Fb(unsigned char b)
{
    *(char *)HUDPROMQ_G_OkToShow = (char)b;
}
