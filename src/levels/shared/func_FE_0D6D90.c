/* func_FE_0D6D90 -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Decodes a 7-bit variable-length integer.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_025908.c.
 */

unsigned char *func_FE_0D6D90(unsigned char *p, unsigned int *out)
{
    unsigned int shift = 0;
    unsigned int value = 0;
    unsigned char b;

    do {
        b = *p++;
        value |= (unsigned int)(b & 0x7F) << shift;
        shift += 7;
    } while (b & 0x80);

    if (shift < 0x20) {
        if (b & 0x40)
            value |= -1 << shift;
    }
    *out = value;
    return p;
}
