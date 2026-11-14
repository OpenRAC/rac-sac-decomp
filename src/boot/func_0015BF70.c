/* func_0015BF70 -- 32 bytes.
 *
 * A function of the boot executable at 0x0015BF70; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Writes the constant 0x42400, or returns 0x25 on a null pointer.
 */

int func_0015BF70(void *self, int *target)
{
    if (target != 0) {
        *target = 0x42400;
        return 0;
    }
    return 0x25;
}
