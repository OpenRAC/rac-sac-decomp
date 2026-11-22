/* RATCHET_PreMobyInit__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_050DC8.c.
 */

extern unsigned int g_pRatchetPlayer;

void RATCHET_PreMobyInit__Fv(void) {
    g_pRatchetPlayer = 0;
}
