/* func_001494e8 -- 12 bytes.
 *
 * A function of the boot executable at 0x001494E8; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_001494E8(char *p, int i)
{
    return *(int *)(p + (i << 2));
}
