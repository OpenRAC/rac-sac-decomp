/* GDEMESH_ResetResourceCounter__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_050DC8.c.
 */

extern unsigned int gENG_nResources;

void GDEMESH_ResetResourceCounter__Fv(void) {
    gENG_nResources = 0;
}
