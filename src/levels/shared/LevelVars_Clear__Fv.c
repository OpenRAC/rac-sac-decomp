/* LevelVars_Clear__Fv -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_019618.c.
 */

extern char G_LevelVars[];
extern char G_LevelSaved[];
extern void FastMemZero__FPvUi(void *, int);

void LevelVars_Clear__Fv(void)
{
    FastMemZero__FPvUi(G_LevelVars, 1);
    FastMemZero__FPvUi(G_LevelSaved, 1);
}
