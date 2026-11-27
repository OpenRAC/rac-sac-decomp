/* HUDHELP_RefreshYOffset__FiUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int g_hudHelpYParam;
extern int g_hudHelpYOffset;

void HUDHELP_RefreshYOffset__FiUi(int yOffset, unsigned int param)
{
    g_hudHelpYParam = param;
    g_hudHelpYOffset = yOffset;
}
