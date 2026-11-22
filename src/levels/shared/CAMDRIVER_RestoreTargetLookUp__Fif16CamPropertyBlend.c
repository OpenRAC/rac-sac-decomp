/* CAMDRIVER_RestoreTargetLookUp__Fif16CamPropertyBlend -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0039C8.c.
 */

extern void CAMDRIVER_SetTargetLookUp__Ffif16CamPropertyBlend(int, int, float, float);

void CAMDRIVER_RestoreTargetLookUp__Fif16CamPropertyBlend(int a, float value, int b)
{
    CAMDRIVER_SetTargetLookUp__Ffif16CamPropertyBlend(a, b, 0.0f, value);
}
