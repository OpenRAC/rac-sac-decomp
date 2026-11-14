/* func_0016D530 -- 12 bytes.
 *
 * A function of the boot executable at 0x0016D530; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores the second argument at offset 0x2A4 of the first, then returns 0.
 */

int func_0016D530(void *self, void *value)
{
    *(void **)((char *)self + 0x2A4) = value;
    return 0;
}
