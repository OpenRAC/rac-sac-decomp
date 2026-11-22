/* DYNAGRID_Disable__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_02A2C8.c.
 */

extern unsigned char D_L01_0031A7A8;

void DYNAGRID_Disable__Fv(void)
{
    D_L01_0031A7A8 = 1;
}
