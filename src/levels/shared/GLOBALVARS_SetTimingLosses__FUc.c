/* GLOBALVARS_SetTimingLosses__FUc -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern struct {
    char pad[0x4D1];
    unsigned char field;
} *g_vars;

void GLOBALVARS_SetTimingLosses__FUc(unsigned char v)
{
    g_vars->field = v;
}
