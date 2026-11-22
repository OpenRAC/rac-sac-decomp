/* CrateShared_Term__FP4MobyP18CrateCommonContent -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_03_1DB200.c.
 */

void CrateShared_Term__FP4MobyP18CrateCommonContent(int unused, char *node)
{
    char *linked = *(char **)(node + 0x14);
    if (linked != 0) {
        *(char **)linked = *(char **)node;
        if (*(char **)node != 0)
            *(char **)(*(char **)node + 0x14) = *(char **)(node + 0x14);
        *(char **)(node + 0x14) = 0;
    }
}
