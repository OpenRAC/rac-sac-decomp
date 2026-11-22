/* SCRNMP_IGSAVE_Exit__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0359F0.c.
 */

extern void HUDDIAG_Terminate__Fb(int value);

void SCRNMP_IGSAVE_Exit__Fv(void) {
    HUDDIAG_Terminate__Fb(0);
}
