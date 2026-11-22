/* MEMCARDCLIENT_DisableAutoSave__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0211F0.c.
 */

extern void MEMCARDCLIENT_SetAutoSaveSLot__Fi(int value);

void MEMCARDCLIENT_DisableAutoSave__Fv(void) {
    MEMCARDCLIENT_SetAutoSaveSLot__Fi(-1);
}
