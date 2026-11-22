/* func_FE_041430 -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01CC00.c.
 */

extern char D_FE_00124A50[];
extern int sscanf(const char *, const char *, ...);

int func_FE_041430(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_FE_00124A50, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
