/* UPDATE_DeferRender__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0DAF40.c.
 */

extern unsigned int m_updateDeferFrames;

void UPDATE_DeferRender__Fv(void) {
    m_updateDeferFrames = 5;
}
