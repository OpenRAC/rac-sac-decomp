/* LightweightSystem_Update__FP4Mobyf -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the shared init and then registers the object with its update callback.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_1AE340.c.
 */

extern void LWANIM_PreUpdate__Fv(void);
extern int MOBY_RegisterPreDrawCallback__FP4MobyPFP4Moby_v15MobyRenderStage(unsigned int first, unsigned int second, unsigned int third);
extern void LightweightSystem_PreDrawCallback__FP4Moby(void);

void LightweightSystem_Update__FP4Mobyf(unsigned int obj)
{
    LWANIM_PreUpdate__Fv();
    MOBY_RegisterPreDrawCallback__FP4MobyPFP4Moby_v15MobyRenderStage(obj, (unsigned int)LightweightSystem_PreDrawCallback__FP4Moby, 0);
}
