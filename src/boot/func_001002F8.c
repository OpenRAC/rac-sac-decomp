/* func_001002F8 -- 12 bytes.
 *
 * A function of the boot executable at 0x001002F8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_0019EF0C;

void func_001002F8(int value)
{
    g_boot_0019EF0C = value;
}
