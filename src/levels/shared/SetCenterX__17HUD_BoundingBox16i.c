/* SetCenterX__17HUD_BoundingBox16i -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0AF0C0.c.
 */

extern int GetCenterX__17HUD_BoundingBox16(int *record);

void SetCenterX__17HUD_BoundingBox16i(int *record, int value)
{
    int change = value - GetCenterX__17HUD_BoundingBox16(record);
    record[2] += change;
    record[0] += change;
}
