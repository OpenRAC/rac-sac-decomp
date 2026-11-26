/* DRAW_SetMaterialBloom__FUi14DRAW_BloomMode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one field and inserts the low bits of the mode.
 */

int DRAW_SetMaterialBloom__FUi14DRAW_BloomMode(int material, int mode)
{
    return (material & -513) | ((mode & 1) << 9);
}
