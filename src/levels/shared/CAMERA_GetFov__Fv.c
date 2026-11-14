/* CAMERA_GetFov__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_fov;

float CAMERA_GetFov__Fv(void)
{
    return g_fov;
}
