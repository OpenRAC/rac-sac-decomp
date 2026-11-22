/* DRAW_GetVertexSize__F15DRAW_VertFormat -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_000190.c.
 */

extern unsigned int D_FE_0011C708[];

unsigned int DRAW_GetVertexSize__F15DRAW_VertFormat(unsigned int index) {
    return D_FE_0011C708[index];
}
