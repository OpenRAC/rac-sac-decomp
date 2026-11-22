/* CrateChunkController_TypeInit__FP8MobyType -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void CrateChunkController_SoundInit__Fv(void);
void CrateChunkController_ShrapnelInit__Fv(void);

void CrateChunkController_TypeInit__FP8MobyType(void)
{
    CrateChunkController_SoundInit__Fv();
    CrateChunkController_ShrapnelInit__Fv();
}
