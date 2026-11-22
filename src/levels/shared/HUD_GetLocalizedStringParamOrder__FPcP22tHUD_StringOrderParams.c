/* HUD_GetLocalizedStringParamOrder__FPcP22tHUD_StringOrderParams -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Decodes three 2-bit fields from a tagged byte pair.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_00B928.c.
 */

static __inline__ unsigned char is_tagged(const unsigned char *p)
{
    if (p == 0)
        return 0;
    return p[0] == 0x91;
}

void HUD_GetLocalizedStringParamOrder__FPcP22tHUD_StringOrderParams(const unsigned char *source, unsigned int *parts)
{
    unsigned char valid = is_tagged(source);

    if (valid) {
        unsigned int value = (signed char)source[1];
        unsigned int first = value & 3;
        unsigned int second;
        unsigned int third;

        value >>= 2;
        second = value & 3;
        value >>= 2;
        third = value & 3;
        parts[0] = first;
        parts[1] = second;
        parts[2] = third;
        parts[3] = (first != 0) + (second != 0) + (third != 0);
    }
}
