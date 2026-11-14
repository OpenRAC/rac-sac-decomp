/* func_0015BDC0 -- 32 bytes.
 *
 * A function of the boot executable at 0x0015BDC0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores a small code in the object, else returns 0x25.
 */

int func_0015BDC0(void *self, unsigned int code)
{
    if (code - 1 < 4) {
        *(int *)((char *)self + 0x6F8) = (int)code;
        return 0;
    }
    return 0x25;
}
