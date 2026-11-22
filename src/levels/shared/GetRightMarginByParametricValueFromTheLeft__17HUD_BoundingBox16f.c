/* GetRightMarginByParametricValueFromTheLeft__17HUD_BoundingBox16f -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales the count returned by GetWidth__17HUD_BoundingBox16 for the record by
 * a float and adds the record's first word; returns the truncated sum.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A8928.c.
 */

extern int GetWidth__17HUD_BoundingBox16(int *record);

int GetRightMarginByParametricValueFromTheLeft__17HUD_BoundingBox16f(float scale, int *p)
{
    int n = GetWidth__17HUD_BoundingBox16(p);

    return (int)((float)n * scale + (float)*p);
}
