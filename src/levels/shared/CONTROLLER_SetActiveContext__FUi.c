/* CONTROLLER_SetActiveContext__FUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int g_activeContext;

void CONTROLLER_SetActiveContext__FUi(unsigned int ctx)
{
    g_activeContext = ctx;
}
