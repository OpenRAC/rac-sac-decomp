/* VehicleSectionStarter_Reset__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_02A2C8.c.
 */

extern unsigned char D_L08_001F0814;

void VehicleSectionStarter_Reset__Fv(void)
{
    D_L08_001F0814 = 1;
}
