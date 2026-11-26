/* DRAW_GetRingVertexCount__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the argument plus 1, shifted left by 1.
 */

int DRAW_GetRingVertexCount__Fi(int count)
{
    return (count + 1) << 1;
}
