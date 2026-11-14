/* CAMERA_SetFovY__Ff -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_fov;

void CAMERA_SetFovY__Ff(float fov)
{
    g_fov = fov;
}
