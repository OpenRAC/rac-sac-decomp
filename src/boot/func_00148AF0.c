/* func_00148AF0 -- 12 bytes.
 *
 * A function of the boot executable at 0x00148AF0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Setter: stores its argument in the integer at self+0x50 and returns 0.
 */

int func_00148AF0(void *self, int value)
{
    *(int *)((char *)self + 0x50) = value;
    return 0;
}
