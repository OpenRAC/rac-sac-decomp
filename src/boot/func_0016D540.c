/* func_0016D540 -- 16 bytes.
 *
 * A function of the boot executable at 0x0016D540; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Copies the pointer at offset 0x2A4 of the first argument into *out,
 * then returns 0. Pair of func_0016D530.
 */

int func_0016D540(void *self, void **out)
{
    *out = *(void **)((char *)self + 0x2A4);
    return 0;
}
