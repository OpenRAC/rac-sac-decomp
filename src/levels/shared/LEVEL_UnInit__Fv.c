/* LEVEL_UnInit__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void LEVEL_UnRegisterPowerDownCallbacks__Fv(void);
void LEVEL_UnRegisterVolemCallbacks__Fv(void);

void LEVEL_UnInit__Fv(void)
{
    LEVEL_UnRegisterPowerDownCallbacks__Fv();
    LEVEL_UnRegisterVolemCallbacks__Fv();
}
