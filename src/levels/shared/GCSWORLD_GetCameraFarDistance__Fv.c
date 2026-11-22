/* GCSWORLD_GetCameraFarDistance__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the global float.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_133D80.c.
 */

extern float g_tweak_gcsworld_fadeInDist;

float GCSWORLD_GetCameraFarDistance__Fv(void)
{
    return g_tweak_gcsworld_fadeInDist;
}
