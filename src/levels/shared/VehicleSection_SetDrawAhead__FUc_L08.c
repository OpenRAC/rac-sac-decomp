/* VehicleSection_SetDrawAhead__FUc -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B4DB0.c.
 */

extern unsigned int D_L08_001F0804;

void VehicleSection_SetDrawAhead__FUc(unsigned int value)
{
    D_L08_001F0804 = value & 0xFFu;
}
