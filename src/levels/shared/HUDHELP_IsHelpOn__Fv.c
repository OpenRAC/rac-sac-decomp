/* HUDHELP_IsHelpOn__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B3738.c.
 */

extern char *pGV;

int HUDHELP_IsHelpOn__Fv(void)
{
    return *(int *)(pGV + 0x10) > 0;
}
