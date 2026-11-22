/* BoltController_TypeUpdateBegin__FP8MobyType -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs BOLTACTOR_Update__Fv, then
 * MOBY_RegisterPostUpdateCallback__FP4MobyPFP4Moby_v with 0 and the address of
 * the handler at 0x1556F8.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_155718.c.
 */

extern void BOLTACTOR_Update__Fv(void);
extern void MOBY_RegisterPostUpdateCallback__FP4MobyPFP4Moby_v(int first, int second);
extern void BoltController_PostUpdate__FP4Moby(void);

void BoltController_TypeUpdateBegin__FP8MobyType(void)
{
    BOLTACTOR_Update__Fv();
    MOBY_RegisterPostUpdateCallback__FP4MobyPFP4Moby_v(0, (int)BoltController_PostUpdate__FP4Moby);
}
