/* GetHeight__17HUD_BoundingBox16 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0A8798.c.
 */

int GetHeight__17HUD_BoundingBox16(int *range)
{
    return range[3] - range[1] + 1;
}
