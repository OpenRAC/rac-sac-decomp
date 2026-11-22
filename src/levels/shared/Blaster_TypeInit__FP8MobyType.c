/* Blaster_TypeInit__FP8MobyType -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void Explosion_RegisterSystems__Fv(void);
void BlasterShared_InitMuzzleFlashOnce__Fv(void);

void Blaster_TypeInit__FP8MobyType(void)
{
    Explosion_RegisterSystems__Fv();
    BlasterShared_InitMuzzleFlashOnce__Fv();
}
