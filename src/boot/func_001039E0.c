/* func_001039E0 -- 12 bytes.
 *
 * A function of the boot executable at 0x001039E0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores its argument in a global word.
 */

extern int g_boot_001AAE38;

void func_001039E0(int value)
{
    g_boot_001AAE38 = value;
}
