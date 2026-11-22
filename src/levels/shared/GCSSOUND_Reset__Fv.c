/* GCSSOUND_Reset__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void GCSSOUND_EmitterResetAll__Fv(void);

void GCSSOUND_Reset__Fv(void)
{
    GCSSOUND_EmitterResetAll__Fv();
}
