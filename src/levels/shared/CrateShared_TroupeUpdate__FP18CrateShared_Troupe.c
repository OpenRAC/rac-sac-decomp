/* CrateShared_TroupeUpdate__FP18CrateShared_Troupe -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CCEE8.c.
 */

extern void func_L01_1196C8(void *);
extern int MOBY_RegisterDrawCallback__FP4MobyPFP4Moby_v15MobyRenderStage(void *, void (*)(void *), unsigned int);

void CrateShared_TroupeUpdate__FP18CrateShared_Troupe(void *value)
{
    MOBY_RegisterDrawCallback__FP4MobyPFP4Moby_v15MobyRenderStage(value, func_L01_1196C8, 0);
}
