/* func_001002B0 -- 20 bytes.
 *
 * A function of the boot executable at 0x001002B0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores 0x7FFFFFFF in a global word.
 */

extern int g_boot_0019EF10;

void func_001002B0(void)
{
    g_boot_0019EF10 = 0x7FFFFFFF;
}
