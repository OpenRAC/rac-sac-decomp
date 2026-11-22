/* GetCenterY__17HUD_BoundingBox16 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B610.c.
 */

int GetHeight__17HUD_BoundingBox16(void *);

int GetCenterY__17HUD_BoundingBox16(void *p)
{
    int r = GetHeight__17HUD_BoundingBox16(p);
    int v = *(int *)((char *)p + 4);

    return (r >> 1) + v;
}
