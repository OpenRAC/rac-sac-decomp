/* func_00148AD0 -- 28 bytes.
 *
 * A function of the boot executable at 0x00148AD0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Getter for the integer at self+0xB4: if out is not NULL, writes it to *out
 * and returns 0; otherwise returns error code 37 (0x25). The non-NULL path
 * does not set the return value in the source, as in the original.
 */

int func_00148AD0(void *self, int *out)
{
    if (out) {
        *out = *(int *)((char *)self + 0xB4);
        return 0;
    }
    return 37;
}
