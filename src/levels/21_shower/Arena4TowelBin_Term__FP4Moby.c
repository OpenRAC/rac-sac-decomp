/* Arena4TowelBin_Term__FP4Moby -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_03_1A62A8.c.
 */

void Arena4TowelBin_Term__FP4Moby(char *object)
{
    char *node = *(char **)(object + 0x58);
    char *linked = *(char **)(node + 0x14);
    if (linked != 0) {
        *(char **)linked = *(char **)node;
        if (*(char **)node != 0)
            *(char **)(*(char **)node + 0x14) = *(char **)(node + 0x14);
        *(char **)(node + 0x14) = 0;
    }
}
