/* GLOBALVARS_SetTimingAces__FUc -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern struct {
    char pad[0x4D2];
    unsigned char field;
} *g_vars;

void GLOBALVARS_SetTimingAces__FUc(unsigned char v)
{
    g_vars->field = v;
}
