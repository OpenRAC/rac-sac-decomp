/* SetLeftSide__17HUD_BoundingBox16i -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_16_096F00.c.
 */

void SetLeftSide__17HUD_BoundingBox16i(int *object, int value)
{
    int previous = object[0];
    object[0] = value;
    object[2] += value - previous;
}
