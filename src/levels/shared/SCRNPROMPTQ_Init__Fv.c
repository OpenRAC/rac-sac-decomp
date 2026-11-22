/* SCRNPROMPTQ_Init__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C9D00.c.
 */

extern int D_L01_002636A4;
extern int CONTROLLER_GetActiveContext__Fv(void);
extern void CONTROLLER_SetActiveContext__FUi(int);

void SCRNPROMPTQ_Init__Fv(void)
{
    D_L01_002636A4 = CONTROLLER_GetActiveContext__Fv();
    CONTROLLER_SetActiveContext__FUi(0x200);
}
