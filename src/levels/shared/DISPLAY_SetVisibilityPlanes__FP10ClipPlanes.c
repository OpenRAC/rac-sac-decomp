/* DISPLAY_SetVisibilityPlanes__FP10ClipPlanes -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/DISPLAY_SetVisibilityPlanes__FP10ClipPlanes_LEVEL_01.c.
 */

extern char *g_pCurrentClipPlanes;
extern char g_WorldClipPlanes[];

void DISPLAY_SetVisibilityPlanes__FP10ClipPlanes(char *value)
{
    if (value == 0)
        g_pCurrentClipPlanes = g_WorldClipPlanes;
    else
        g_pCurrentClipPlanes = value;
}
