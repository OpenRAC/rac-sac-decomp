/* KABOOM_Register__F22KABOOM_SortedBuiltinID -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF748.c.
 */

extern unsigned char g_kaboom_sorted[];
extern int D_L01_003B1498[];
extern char D_L01_002AED20[];
extern char D_L01_002AED48[];
extern void func_L01_150828(void *dst, void *src);
extern void func_L01_150700(void *dst, int value, void *buf, void *table);

void KABOOM_Register__F22KABOOM_SortedBuiltinID(int index)
{
    int offset = index * 100;

    if (g_kaboom_sorted[offset] == 0) {
        char buf[16];
        int value = D_L01_003B1498[index * 9];

        func_L01_150828(buf, &D_L01_003B1498[index * 9]);
        func_L01_150700(g_kaboom_sorted + offset + 4, value, buf, D_L01_002AED20);
        func_L01_150700(g_kaboom_sorted + offset + 0x34, value, buf, D_L01_002AED48);
        g_kaboom_sorted[offset] = 1;
    }
}
