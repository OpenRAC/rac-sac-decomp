/* func_L01_049CA8 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_09F898.c.
 */

int func_L01_049CA8(int *node)
{
    int next = node[1];
    *(int *)(node[0] + 4) = next;
    *(int *)node[1] = node[0];
    node[0] = 0;
    node[1] = 0;
    return next;
}
