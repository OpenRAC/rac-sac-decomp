/* func_00115CF8 -- 80 bytes.
 *
 * A function of the boot executable at 0x00115CF8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_00297A20;
extern char g_boot_001FBA40[];
extern char g_boot_00297A10[];

extern void func_115D80(void);
extern void func_115968(void *object, void *a1, void *a2);

void *func_00115CF8(void)
{
    if (g_boot_00297A20 == 0) {
        func_115D80();
        func_115968(&g_boot_00297A20, g_boot_001FBA40, g_boot_00297A10);
    }
    return &g_boot_00297A20;
}
