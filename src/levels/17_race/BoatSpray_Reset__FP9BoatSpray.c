/* BoatSpray_Reset__FP9BoatSpray -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Shared accessor family f87c9b13: clear the int field at +0x0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_17D408.c.
 */

void BoatSpray_Reset__FP9BoatSpray(int *base)
{
    base[0] = 0;
}
