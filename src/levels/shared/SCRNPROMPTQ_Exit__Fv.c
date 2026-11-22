/* SCRNPROMPTQ_Exit__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C9D30.c.
 */

extern void CONTROLLER_SetActiveContext__FUi(void *);
extern void *D_L01_002636A4;

void SCRNPROMPTQ_Exit__Fv(void)
{
    CONTROLLER_SetActiveContext__FUi(D_L01_002636A4);
    D_L01_002636A4 = 0;
}
