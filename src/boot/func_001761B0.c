/* func_001761B0 -- 16 bytes.
 *
 * A function of the boot executable at 0x001761B0; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int g_001CD7D8;

int func_001761B0(void)
{
    g_001CD7D8 = 1;
    return 1;
}
