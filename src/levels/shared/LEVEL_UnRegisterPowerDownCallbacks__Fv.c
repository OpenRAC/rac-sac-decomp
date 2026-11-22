/* LEVEL_UnRegisterPowerDownCallbacks__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the indexed helper for slot 1 and then slot 0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_13E718.c.
 */

extern void PD_CB_ARRAY_UnregisterCb__FUi(int index);

void LEVEL_UnRegisterPowerDownCallbacks__Fv(void)
{
    PD_CB_ARRAY_UnregisterCb__FUi(1);
    PD_CB_ARRAY_UnregisterCb__FUi(0);
}
