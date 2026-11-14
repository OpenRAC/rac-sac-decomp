/* func_00100298 -- 12 bytes.
 *
 * A function of the boot executable at 0x00100298; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Returns the value of a global word.
 */

extern int g_boot_0019EF04;

int func_00100298(void)
{
    return g_boot_0019EF04;
}
