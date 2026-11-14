/* func_00148AD0 -- 28 bytes.
 *
 * A function of the boot executable at 0x00148AD0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_00148AD0(void *self, int *out)
{
    if (out) {
        *out = *(int *)((char *)self + 0xB4);
        return 0;
    }
    return 37;
}
