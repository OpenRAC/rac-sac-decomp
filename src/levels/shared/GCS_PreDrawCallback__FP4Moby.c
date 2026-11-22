/* GCS_PreDrawCallback__FP4Moby -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void LWANIM_PostUpdate__Fv(void);
void GCSHIP_PreDraw__Fv(void);

void GCS_PreDrawCallback__FP4Moby(void)
{
    LWANIM_PostUpdate__Fv();
    GCSHIP_PreDraw__Fv();
}
