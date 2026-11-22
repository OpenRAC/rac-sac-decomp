/* LEVEL_UnRegisterVolemCallbacks__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_035A10.c.
 */

extern void VOLMEM_CB_ARRAY_UnregisterCb__FUi(int value);

void LEVEL_UnRegisterVolemCallbacks__Fv(void) {
    VOLMEM_CB_ARRAY_UnregisterCb__FUi(1);
}
