/* WAD_NextAssetByType__FP15WAD_FILE_HEADER -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/WAD_NextAssetByType__FP15WAD_FILE_HEADER_LEVEL_02.c.
 */

char *WAD_NextAssetByType__FP15WAD_FILE_HEADER(char *object)
{
    char *node = *(char **)(object + 0x70);
    if (node != 0) {
        int value = *(int *)(object + 0x64);
        do {
            if (*(int *)(node + 0x64) == value)
                break;
            node = *(char **)(node + 0x70);
        } while (node != 0);
    }
    return node;
}
