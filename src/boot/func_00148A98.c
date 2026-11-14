/* func_00148A98 -- 24 bytes.
 *
 * A function of the boot executable at 0x00148A98; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Getter for the integer stored at self+0xC8: writes it to *out if out is not
 * NULL. Returns 0 in both cases.
 */

int func_00148A98(void *self, int *out)
{
    if (out)
        *out = *(int *)((char *)self + 0xC8);
    return 0;
}
