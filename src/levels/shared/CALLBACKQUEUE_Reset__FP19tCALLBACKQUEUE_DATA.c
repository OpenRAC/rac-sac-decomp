/* CALLBACKQUEUE_Reset__FP19tCALLBACKQUEUE_DATA -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Shared accessor family f87c9b13: clear the int field at +0x0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_17D408.c.
 */

void CALLBACKQUEUE_Reset__FP19tCALLBACKQUEUE_DATA(int *base)
{
    base[0] = 0;
}
