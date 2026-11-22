/* SUBTITLE_IsAllSpaces__FPc -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Skips the leading blanks of a string.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_014E10.c.
 */

int SUBTITLE_IsAllSpaces__FPc(signed char *s)
{
    unsigned int i;

    if (s == 0)
        return 1;
    for (i = 0; i < 0x200; i++) {
        if (s[i] == 0)
            return 1;
        if (s[i] != 0x20)
            return 0;
    }
    return 0;
}
