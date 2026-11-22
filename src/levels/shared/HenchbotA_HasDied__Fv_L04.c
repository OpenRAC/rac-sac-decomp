/* HenchbotA_HasDied__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one byte of the global flag table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001400.c.
 */

extern unsigned char D_L04_00289DB4[];

unsigned char HenchbotA_HasDied__Fv(void)
{
    return D_L04_00289DB4[0];
}
