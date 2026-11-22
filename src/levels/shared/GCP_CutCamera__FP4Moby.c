/* GCP_CutCamera__FP4Moby -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Starts the object's embedded effect and switches it to state 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_1740E8.c.
 */

extern void CAMDRIVER_SetAzimuthFacingDirection__FPC4VEC3if16CamPropertyBlend(void *, int, int, float);
extern void GCP_RefreshCameraProperties__FP4Mobyb(void *, int);

void GCP_CutCamera__FP4Moby(char *obj)
{
    CAMDRIVER_SetAzimuthFacingDirection__FPC4VEC3if16CamPropertyBlend(obj + 0x20, 100, 3, 1.0f);
    GCP_RefreshCameraProperties__FP4Mobyb(obj, 1);
}
