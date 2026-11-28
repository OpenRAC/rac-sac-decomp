/* GetProfileBar__15ApeAnimTreeNode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int *g_profileBar;

int *GetProfileBar__15ApeAnimTreeNode(void)
{
    if (g_profileBar == 0)
        g_profileBar = 0;
    return g_profileBar;
}
