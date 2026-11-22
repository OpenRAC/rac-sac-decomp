/* IsXYInsideThisBox__17HUD_BoundingBox16ii -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether a point lies inside an inclusive integer rectangle.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_0ADB30.c.
 */

typedef struct {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect;

int IsXYInsideThisBox__17HUD_BoundingBox16ii(Rect *rect, int x, int y)
{
    return y >= rect->y0 && y <= rect->y1 && x >= rect->x0 && x <= rect->x1;
}
