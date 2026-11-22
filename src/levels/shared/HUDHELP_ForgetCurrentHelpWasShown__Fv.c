/* HUDHELP_ForgetCurrentHelpWasShown__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B43A8.c.
 */

extern void *D_L01_0025CB98;
extern void HUDHELP_ForgetHelpWasShown__Fi(void *value);

void HUDHELP_ForgetCurrentHelpWasShown__Fv(void) {
    HUDHELP_ForgetHelpWasShown__Fi(D_L01_0025CB98);
}
