/* SetCenterY__17HUD_BoundingBox16i -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Shifts the two position words by the difference between the requested value
 * and the current one.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_096E90.c.
 */

typedef struct {
    int pad0;
    int a;
    int pad8;
    int b;
} Obj;

extern int GetCenterY__17HUD_BoundingBox16(Obj *obj);

void SetCenterY__17HUD_BoundingBox16i(Obj *obj, int value)
{
    int delta = value - GetCenterY__17HUD_BoundingBox16(obj);

    obj->a += delta;
    obj->b += delta;
}
