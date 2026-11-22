/* BossArena_TypeReset__FP8MobyType -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_050DC8.c.
 */

extern unsigned int g_baPActive;

void BossArena_TypeReset__FP8MobyType(void) {
    g_baPActive = 0;
}
