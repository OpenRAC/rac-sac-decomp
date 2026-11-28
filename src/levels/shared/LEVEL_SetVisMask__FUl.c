/* LEVEL_SetVisMask__FUl -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned long g_vis_mask;

void LEVEL_SetVisMask__FUl(unsigned long mask)
{
    g_vis_mask = mask;
}
