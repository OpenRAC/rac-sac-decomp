/* func_L01_028A38 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01B9D8.c.
 */

extern void func_L01_0287C0(void *, int, int, int);

void func_L01_028A38(void *output, char *record)
{
    func_L01_0287C0(output, *(int *)(record + 0x20), *(int *)(record + 0x24), *(int *)(record + 0x28));
}
