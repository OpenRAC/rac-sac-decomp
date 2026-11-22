/* func_L01_16BD10 -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EEF20.c.
 */

extern void func_L01_16BCC0(int, int);

void func_L01_16BD10(char *first, char *second)
{
    func_L01_16BCC0(*(int *)(first + 0x2c), *(int *)(second + 0xc) != 0);
}
