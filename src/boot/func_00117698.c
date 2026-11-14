/* func_00117698 -- 64 bytes.
 *
 * A function of the boot executable at 0x00117698; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_00206120;
extern const char g_boot_001FBAE0[];
extern void func_00115988(int *slot, const char *text);

int *func_00117698(void)
{
    if (g_boot_00206120 == 0) {
        func_00115988(&g_boot_00206120, g_boot_001FBAE0);
    }
    return &g_boot_00206120;
}
