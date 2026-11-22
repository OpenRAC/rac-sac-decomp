/* RATCHET_GetState__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B43A8.c.
 */

extern void *g_pRatchetPlayer;
extern void RATCHET_GetState__FP7RATCHET(void *value);

void RATCHET_GetState__Fv(void) {
    RATCHET_GetState__FP7RATCHET(g_pRatchetPlayer);
}
