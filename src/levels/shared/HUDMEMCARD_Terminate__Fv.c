/* HUDMEMCARD_Terminate__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01AFF8.c.
 */

extern unsigned int D_FE_000FC7FC;
extern unsigned int D_FE_000FC800;

void HUDMEMCARD_Terminate__Fv(void) {
    D_FE_000FC7FC = 0;
    D_FE_000FC800 = 0;
}
