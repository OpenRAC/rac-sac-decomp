/* PAUSEMENU_SetCurrentXYHighlightScales__FP10tPAUSEMENUff -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes the two float arguments into the vector.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_012360.c.
 */

int PAUSEMENU_SetCurrentXYHighlightScales__FP10tPAUSEMENUff(float *p, float x, float y)
{
    p[0x10] = x;
    p[0x11] = y;
    return 1;
}
