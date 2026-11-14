/* MCPI_GetLoadProgress__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_loadProgress;

int MCPI_GetLoadProgress__Fv(void)
{
    return g_loadProgress;
}
