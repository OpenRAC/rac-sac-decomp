/* FoutainPenInk_TypeInit__FP8MobyType -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C0AF0.c.
 */

extern char D_L01_0026BB18[];
extern void Ink_Init__Fv(void);
extern void DECAL_ConfigRefresh__FP18DECAL_CSRampConfig(void *);

void FoutainPenInk_TypeInit__FP8MobyType(void)
{
    Ink_Init__Fv();
    DECAL_ConfigRefresh__FP18DECAL_CSRampConfig(D_L01_0026BB18);
}
