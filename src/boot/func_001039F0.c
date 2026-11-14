/* func_001039F0 -- 12 bytes.
 *
 * A function of the boot executable at 0x001039F0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Returns the value of a global word.
 */

extern int g_boot_001AAE34;

int func_001039F0(void)
{
    return g_boot_001AAE34;
}
