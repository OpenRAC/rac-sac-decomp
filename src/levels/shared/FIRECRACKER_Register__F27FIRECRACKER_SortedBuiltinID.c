/* FIRECRACKER_Register__F27FIRECRACKER_SortedBuiltinID -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF748.c.
 */

extern unsigned char g_firecracker_sorted[];
extern int D_L01_003B3BE8[];
extern char D_L01_002B69E8[];
extern char D_L01_002B6A10[];
extern void func_L01_16AFB8(void *dst, void *src);
extern void func_L01_16B878(void *dst, int value, void *buf, void *table);

void FIRECRACKER_Register__F27FIRECRACKER_SortedBuiltinID(int index)
{
    int offset = index * 100;

    if (g_firecracker_sorted[offset] == 0) {
        char buf[16];
        int value = D_L01_003B3BE8[index * 9];

        func_L01_16AFB8(buf, &D_L01_003B3BE8[index * 9]);
        func_L01_16B878(g_firecracker_sorted + offset + 4, value, buf, D_L01_002B69E8);
        func_L01_16B878(g_firecracker_sorted + offset + 0x34, value, buf, D_L01_002B6A10);
        g_firecracker_sorted[offset] = 1;
    }
}
