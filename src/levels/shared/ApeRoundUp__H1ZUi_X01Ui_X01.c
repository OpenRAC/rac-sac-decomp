/* ApeRoundUp__H1ZUi_X01Ui_X01 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rounds the address up to a multiple of the alignment.
 */

int ApeRoundUp__H1ZUi_X01Ui_X01(int addr, int align)
{
    int base = addr - 1;
    return (base + align) & -align;
}
