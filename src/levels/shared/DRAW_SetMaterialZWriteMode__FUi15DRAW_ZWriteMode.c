/* DRAW_SetMaterialZWriteMode__FUi15DRAW_ZWriteMode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one field and inserts the low bits of the mode.
 */

int DRAW_SetMaterialZWriteMode__FUi15DRAW_ZWriteMode(int material, int mode)
{
    return (material & -33) | ((mode & 1) << 5);
}
