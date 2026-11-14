/* CAMERA_SetDisplaySystem__F14CameraSystemID -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_displaySystem;

void CAMERA_SetDisplaySystem__F14CameraSystemID(int id)
{
    g_displaySystem = id;
}
