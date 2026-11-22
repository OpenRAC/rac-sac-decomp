/* GLOBALVARS_RestoreGameToTempSettings__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void GLOBALVARS_EnforceValidOnTempGameSettings__Fv(void);

void GLOBALVARS_RestoreGameToTempSettings__Fv(void)
{
    GLOBALVARS_EnforceValidOnTempGameSettings__Fv();
}
