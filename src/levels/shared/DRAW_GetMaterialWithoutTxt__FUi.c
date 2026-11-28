/* DRAW_GetMaterialWithoutTxt__FUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

unsigned int DRAW_GetMaterialWithoutTxt__FUi(unsigned int n)
{
    return n & 0x000FFFFFu;
}
