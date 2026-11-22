/* CrateAmmo_TypeAnimateBegin__FPC8MobyType -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char g_crateAmmo[];

void CrateShared_TroupeAnimate__FP18CrateShared_Troupe(void *);

void CrateAmmo_TypeAnimateBegin__FPC8MobyType(float a, float b, float c, float d)
{
    CrateShared_TroupeAnimate__FP18CrateShared_Troupe(g_crateAmmo);
}
