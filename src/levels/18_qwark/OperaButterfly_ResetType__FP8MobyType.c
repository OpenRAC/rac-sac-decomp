/* OperaButterfly_ResetType__FP8MobyType -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01AFF8.c.
 */

extern unsigned int g_ob_help_timer;
extern unsigned int D_L18_002141E4;

void OperaButterfly_ResetType__FP8MobyType(void) {
    g_ob_help_timer = 0;
    D_L18_002141E4 = 0;
}
