/* func_001035F8 -- 8 bytes.
 *
 * A function of the boot executable at 0x001035F8; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_001035F8(void *self)
{
    int value;

    value = *(int *)((char *)self + 0x5C);

    return value;
}
