/* CONTROLLER_GetActiveContext__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int g_activeContext;

unsigned int CONTROLLER_GetActiveContext__Fv(void)
{
    return g_activeContext;
}
