/* GetCenterX__17HUD_BoundingBox16 -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Halves the engine count and adds the base value.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/GetCenterX__17HUD_BoundingBox16_FRONTEND.c.
 */

struct Obj {
    int f00;
};

int GetWidth__17HUD_BoundingBox16(struct Obj *);

int GetCenterX__17HUD_BoundingBox16(struct Obj *obj)
{
    int count;

    count = GetWidth__17HUD_BoundingBox16(obj);
    return (count >> 1) + obj->f00;
}
