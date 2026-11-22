/* GadgetBotWheel_Moved__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void GadgetBotWheel_SetSupportPos__FP4Moby(void *value);
extern void GadgetBotWheel_UpdateAvoid__FP4Moby(void *value);

void GadgetBotWheel_Moved__FP4Moby(void *value) {
    GadgetBotWheel_SetSupportPos__FP4Moby(value);
    GadgetBotWheel_UpdateAvoid__FP4Moby(value);
}
