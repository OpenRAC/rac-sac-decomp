/* func_001002E8 -- 12 bytes.
 *
 * A function of the boot executable at 0x001002E8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_0019EF08;

void func_001002E8(int value)
{
    g_boot_0019EF08 = value;
}
