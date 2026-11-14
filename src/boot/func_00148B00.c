/* func_00148B00 -- 28 bytes.
 *
 * A function of the boot executable at 0x00148B00; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_00148B00(void *self, int *out)
{
    if (out) {
        *out = *(int *)((char *)self + 0x50);
        return 0;
    }
    return 37;
}
