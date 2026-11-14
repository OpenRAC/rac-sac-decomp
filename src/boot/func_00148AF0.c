/* func_00148AF0 -- 12 bytes.
 *
 * A function of the boot executable at 0x00148AF0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_00148AF0(void *self, int value)
{
    *(int *)((char *)self + 0x50) = value;
    return 0;
}
