/* func_0016D530 -- 12 bytes.
 *
 * A function of the boot executable at 0x0016D530; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_0016D530(void *self, void *value)
{
    *(void **)((char *)self + 0x2A4) = value;
    return 0;
}
