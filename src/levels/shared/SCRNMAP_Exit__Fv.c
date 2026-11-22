/* SCRNMAP_Exit__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B43A8.c.
 */

extern void *D_L01_00255204;
extern void UnLoadAllMapTexture__14DrawObjManager(void *value);

void SCRNMAP_Exit__Fv(void) {
    UnLoadAllMapTexture__14DrawObjManager(D_L01_00255204);
}
