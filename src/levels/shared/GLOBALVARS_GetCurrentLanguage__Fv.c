/* GLOBALVARS_GetCurrentLanguage__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0289E0.c.
 */

extern char *pGV;

int GLOBALVARS_GetCurrentLanguage__Fv(void)
{
    int result = 0;
    char *p = pGV;
    if (p != 0) result = *(int *)(p + 0x3c);
    return result;
}
