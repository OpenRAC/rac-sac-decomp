/* DRAW_SetMaterialTexWrap__FUi16DRAW_TexWrapMode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one field and inserts the low bits of the mode.
 */

int DRAW_SetMaterialTexWrap__FUi16DRAW_TexWrapMode(int material, int mode)
{
    return (material & -257) | ((mode & 1) << 8);
}
