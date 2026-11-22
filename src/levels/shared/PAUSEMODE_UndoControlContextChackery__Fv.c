/* PAUSEMODE_UndoControlContextChackery__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B43A8.c.
 */

extern void *D_FE_001448FC;
extern void CONTROLLER_SetActiveContext__FUi(void *value);

void PAUSEMODE_UndoControlContextChackery__Fv(void) {
    CONTROLLER_SetActiveContext__FUi(D_FE_001448FC);
}
