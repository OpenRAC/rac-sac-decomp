/* DRAW_SetMaterialLayer__FUi10DRAW_Layer -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int DRAW_SetMaterialLayer__FUi10DRAW_Layer(int flags, int layer)
{
    return (flags & ~0x1F) | (layer & 0x1F);
}
