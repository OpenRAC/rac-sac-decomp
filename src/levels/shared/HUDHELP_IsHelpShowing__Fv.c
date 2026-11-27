/* HUDHELP_IsHelpShowing__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern signed char g_hudHelpId;

int HUDHELP_IsHelpShowing__Fv(void)
{
    return g_hudHelpId != -1;
}
