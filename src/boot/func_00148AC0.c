/* func_00148AC0 -- 12 bytes.
 *
 * A function of the boot executable at 0x00148AC0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_00148AC0(void *self, int value)
{
    *(int *)((char *)self + 0xB4) = value;
    return 0;
}
