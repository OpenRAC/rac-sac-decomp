/* func_00148B00 -- 28 bytes.
 *
 * A function of the boot executable at 0x00148B00; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Getter for the integer at self+0x50: if out is not NULL, writes it to *out
 * and returns 0; otherwise returns error code 37 (0x25).
 */

int func_00148B00(void *self, int *out)
{
    if (out) {
        *out = *(int *)((char *)self + 0x50);
        return 0;
    }
    return 37;
}
