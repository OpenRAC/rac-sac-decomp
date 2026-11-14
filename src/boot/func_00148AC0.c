/* func_00148AC0 -- 12 bytes.
 *
 * A function of the boot executable at 0x00148AC0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Setter: stores its argument in the integer at self+0xB4 and returns 0.
 */

int func_00148AC0(void *self, int value)
{
    *(int *)((char *)self + 0xB4) = value;
    return 0;
}
