/* SetWidth__17HUD_BoundingBox16i -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0AF008.c.
 */

extern int GetWidth__17HUD_BoundingBox16(const void *);
extern void ModifyMarginsByOffset__17HUD_BoundingBox16ss(void *, int, int);

void SetWidth__17HUD_BoundingBox16i(void *state, int previous)
{
    int delta = GetWidth__17HUD_BoundingBox16(state) - previous;
    short half = delta / 2;
    ModifyMarginsByOffset__17HUD_BoundingBox16ss(state, half, 0);
}
