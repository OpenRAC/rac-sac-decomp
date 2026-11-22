/* func_FE_041338 -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01CB08.c.
 */

extern int sscanf(const char *, const char *, ...);
extern char D_FE_00124A40[];

int func_FE_041338(const char *text, int *value, int minimum, int maximum)
{
    if (sscanf(text, D_FE_00124A40, value) == 1) {
        if (*value < minimum) {
            *value = minimum;
        }
        if (maximum < *value) {
            *value = maximum;
        }
        return 1;
    }
    return 0;
}
