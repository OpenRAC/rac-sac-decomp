/* HUD_DrawRectangleArea__FssssffUiUiUiUif -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00E538.c.
 */

/* Candidate for FRONTEND.REL:0x00E538.
 * Turns rectangle corners into a center and signed dimensions.
 */
extern void HUD_DrawRectangle__FssssffUiUiUiUif(float scale_x, float scale_y, float scale_z,
                        short center_x, short center_y, short width,
                        short height, unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);

void HUD_DrawRectangleArea__FssssffUiUiUiUif(float scale_x, float scale_y, float scale_z,
                 short left, short top, short right, short bottom,
                 unsigned int arg8, unsigned int arg9,
                 unsigned int arg10, unsigned int arg11)
{
    short width = right - left + 1;
    short height = bottom - top + 1;
    short center_x = left + (width >> 1);
    short center_y = top + (height >> 1);
    HUD_DrawRectangle__FssssffUiUiUiUif(scale_x, scale_y, scale_z, center_x, center_y,
                width, height, arg8, arg9, arg10, arg11);
}
