/* func_001159A8 -- 44 bytes.
 *
 * A function of the boot executable at 0x001159A8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_115900(void *a, int b, int c, int d);

int func_001159A8(void *a, int b, int c, int d)
{
    return func_115900(a, b, c, d) ? d : 0;
}
