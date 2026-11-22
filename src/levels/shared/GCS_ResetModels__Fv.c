/* GCS_ResetModels__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void LWANIM_Reset__Fv(void);

void GCS_ResetModels__Fv(void)
{
    LWANIM_Reset__Fv();
}
