/* func_L01_0B2280 -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D9200.c.
 */

int func_L01_0B2280(int unused, unsigned int a1, unsigned int a2)
{
    int result = -1;
    if (a2 <= a1) {
        if (a2 != 0)
            result = 0;
        return result;
    }
    return 0;
}
