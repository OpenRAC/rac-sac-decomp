/* func_00100288 -- 12 bytes.
 *
 * A function of the boot executable at 0x00100288; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_boot_0019EF04;

void func_00100288(int value)
{
    g_boot_0019EF04 = value;
}
