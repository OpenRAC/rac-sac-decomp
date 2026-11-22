/* SetHeight__17HUD_BoundingBox16i -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0AF058.c.
 */

extern int GetHeight__17HUD_BoundingBox16(const int *);
extern void ModifyMarginsByOffset__17HUD_BoundingBox16ss(int *, short, short);

void SetHeight__17HUD_BoundingBox16i(int *object, int value)
{
    int current = GetHeight__17HUD_BoundingBox16(object);
    short half = (short)((current - value) / 2);
    ModifyMarginsByOffset__17HUD_BoundingBox16ss(object, 0, half);
}
