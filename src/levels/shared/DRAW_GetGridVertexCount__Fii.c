/* DRAW_GetGridVertexCount__Fii -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int DRAW_GetGridVertexCount__Fii(int n, int m)
{
    return (n * m + m) << 1;
}
