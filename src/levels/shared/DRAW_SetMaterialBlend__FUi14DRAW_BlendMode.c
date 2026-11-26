/* DRAW_SetMaterialBlend__FUi14DRAW_BlendMode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one field and inserts the low bits of the mode.
 */

int DRAW_SetMaterialBlend__FUi14DRAW_BlendMode(int material, int mode)
{
    return (material & -15361) | ((mode & 15) << 10);
}
