/* strncpynull__FPcPCcUi -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B5B0.c.
 */

char *strncpy(char *, const char *, unsigned int);

char *strncpynull__FPcPCcUi(char *dst, const char *src, unsigned int size)
{
    if (size != 0) {
        dst[size - 1] = 0;
        return strncpy(dst, src, size - 1);
    }
    return dst;
}
