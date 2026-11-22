/* SetRightSide__17HUD_BoundingBox16i -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_16_096EE0.c.
 */

void SetRightSide__17HUD_BoundingBox16i(int *object, int value)
{
    int previous = object[2];
    object[2] = value;
    object[0] += value - previous;
}
