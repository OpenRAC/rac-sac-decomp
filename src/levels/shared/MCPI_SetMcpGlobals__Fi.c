/* MCPI_SetMcpGlobals__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_mcpGlobals;

void MCPI_SetMcpGlobals__Fi(int globals)
{
    g_mcpGlobals = globals;
}
