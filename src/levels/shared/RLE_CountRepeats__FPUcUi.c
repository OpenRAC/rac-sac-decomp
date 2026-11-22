/* RLE_CountRepeats__FPUcUi -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Counts leading repeats of the first byte (up to 0x80 bytes).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_134E78.c.
 */

unsigned char RLE_CountRepeats__FPUcUi(const unsigned char *data, unsigned int maximum)
{
    unsigned int n;
    unsigned int i;
    unsigned char first;
    unsigned char count;
    first = data[0];
    if (maximum > 0x80) n = 0x80; else n = maximum;
    count = 0;
    for (i = 1; i < n; i++) {
        if (first != data[i])
            break;
        count++;
    }
    if (count != 0)
        count++;
    return count;
}
