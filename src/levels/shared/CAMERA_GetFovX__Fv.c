/* CAMERA_GetFovX__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_fovX;

float CAMERA_GetFovX__Fv(void)
{
    return g_fovX;
}
