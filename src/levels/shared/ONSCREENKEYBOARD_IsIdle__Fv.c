/* ONSCREENKEYBOARD_IsIdle__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_134838.c.
 */

extern unsigned int D_FE_00108AE0;

unsigned int ONSCREENKEYBOARD_IsIdle__Fv(void) {
    return D_FE_00108AE0 == 0;
}
