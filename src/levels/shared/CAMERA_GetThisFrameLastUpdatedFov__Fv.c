/* CAMERA_GetThisFrameLastUpdatedFov__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_thisFrameLastUpdatedFov;

float CAMERA_GetThisFrameLastUpdatedFov__Fv(void)
{
    return g_thisFrameLastUpdatedFov;
}
