/* FastMemZero__FPvUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Zeroes count 32-bit words: memset(ptr, 0, count * 4).
 */

extern void *memset(void *dest, int value, unsigned int size);

void FastMemZero__FPvUi(void *ptr, unsigned int count)
{
    memset(ptr, 0, count * 4);
}
