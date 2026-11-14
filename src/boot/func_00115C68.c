/* func_00115C68 -- 80 bytes.
 *
 * A function of the boot executable at 0x00115C68; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_00297A00;
extern char g_boot_001FBA28[];
extern char g_boot_00297A10[];

extern void func_115D80(void);
extern void func_115968(void *object, void *a1, void *a2);

void *func_00115C68(void)
{
    if (g_boot_00297A00 == 0) {
        func_115D80();
        func_115968(&g_boot_00297A00, g_boot_001FBA28, g_boot_00297A10);
    }
    return &g_boot_00297A00;
}
