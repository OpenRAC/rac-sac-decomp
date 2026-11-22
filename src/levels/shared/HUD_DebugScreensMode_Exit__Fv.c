/* HUD_DebugScreensMode_Exit__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_026BF0.c.
 */

extern unsigned char D_FE_000FB640;

void HUD_DebugScreensMode_Exit__Fv(void) {
    D_FE_000FB640 = 0;
}
