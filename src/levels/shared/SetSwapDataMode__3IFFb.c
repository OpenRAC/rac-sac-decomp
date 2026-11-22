/* SetSwapDataMode__3IFFb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B900.c.
 */

extern char D_FE_002480AC[];

void SetSwapDataMode__3IFFb(unsigned char b)
{
    *(char *)D_FE_002480AC = (char)b;
}
