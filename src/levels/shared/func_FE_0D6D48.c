/* func_FE_0D6D48 -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_0258C0.c.
 */

unsigned int func_FE_0D6D48(unsigned char *p, unsigned int *out)
{
    unsigned int byte;
    unsigned int shift = 0;
    unsigned int result;

    byte = *p++;
    result = byte & 0x7F;
    while (byte & 0x80)
    {
        byte = *p++;
        shift += 7;
        result |= (byte & 0x7F) << shift;
    }
    *out = result;
    return (unsigned int)p;
}
