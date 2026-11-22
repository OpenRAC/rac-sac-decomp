/* GADGET_IsTransformed__FUi -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_024EA0.c.
 */

extern int GADGET_GetCurrentPowerLevel__FUi(void);

int GADGET_IsTransformed__FUi(int a, int b)
{
    return GADGET_GetCurrentPowerLevel__FUi() > 2;
}
