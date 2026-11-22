/* ConstrainTheseXY__17HUD_BoundingBox16PiT1 -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clamps a point to the rectangle's bounds.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_0ADAE0.c.
 */

typedef struct {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect;

void ConstrainTheseXY__17HUD_BoundingBox16PiT1(Rect *rect, int *x, int *y)
{
    *x = *x < rect->x0 ? rect->x0 : *x;
    *x = rect->x1 < *x ? rect->x1 : *x;
    *y = *y < rect->y0 ? rect->y0 : *y;
    *y = rect->y1 < *y ? rect->y1 : *y;
}
