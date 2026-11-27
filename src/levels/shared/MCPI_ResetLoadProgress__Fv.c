/* MCPI_ResetLoadProgress__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_loadProgress;

void MCPI_ResetLoadProgress__Fv(void)
{
    g_loadProgress = 0x7FFFFFFF;
}
