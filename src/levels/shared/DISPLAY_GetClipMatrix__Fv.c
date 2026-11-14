/* DISPLAY_GetClipMatrix__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_clipMatrix;

int *DISPLAY_GetClipMatrix__Fv(void)
{
    return &g_clipMatrix;
}
