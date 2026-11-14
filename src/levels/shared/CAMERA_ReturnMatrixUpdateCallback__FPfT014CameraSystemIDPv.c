/* CAMERA_ReturnMatrixUpdateCallback__FPfT014CameraSystemIDPv -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef int CameraSystemID;

void *CAMERA_ReturnMatrixUpdateCallback__FPfT014CameraSystemIDPv(
    float *pos, float *target, CameraSystemID id, void *ctx)
{
    (void)pos;
    (void)target;
    (void)id;
    return ctx;
}
