/* PLAYER_Term__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B43A8.c.
 */

extern void *g_pActivePlayer;
extern void PLAYER_Term__FP6PLAYER(void *value);

void PLAYER_Term__Fv(void) {
    PLAYER_Term__FP6PLAYER(g_pActivePlayer);
}
