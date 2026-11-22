/* GCS_GetRewardWeight__F12GCS_RewardID -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F6D08.c.
 */

extern char D_L24_0025A958[];

char *GCS_GetRewardWeight__F12GCS_RewardID(int index)
{
    return D_L24_0025A958 + index * 16;
}
