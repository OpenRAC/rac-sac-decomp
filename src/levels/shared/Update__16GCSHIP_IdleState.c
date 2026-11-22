/* Update__16GCSHIP_IdleState -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns -1 when the global is -1, otherwise 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137798.c.
 */

extern int D_L24_003A5D5C;

int Update__16GCSHIP_IdleState(void)
{
    if (D_L24_003A5D5C == -1) {
        return -1;
    }
    return 1;
}
