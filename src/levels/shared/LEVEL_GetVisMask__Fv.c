/* LEVEL_GetVisMask__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned long g_vis_mask;

unsigned long LEVEL_GetVisMask__Fv(void)
{
    return g_vis_mask;
}
