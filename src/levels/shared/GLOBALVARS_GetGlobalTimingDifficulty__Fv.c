/* GLOBALVARS_GetGlobalTimingDifficulty__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern struct {
    char pad[0x4AC];
    unsigned char field;
} *g_vars;

unsigned char GLOBALVARS_GetGlobalTimingDifficulty__Fv(void)
{
    return g_vars->field;
}
