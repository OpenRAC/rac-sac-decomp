/* CAMERA_GetSinHalfFovX__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_sinHalfFovX;

float CAMERA_GetSinHalfFovX__Fv(void)
{
    return g_sinHalfFovX;
}
