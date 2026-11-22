/* CAMDRIVER_RestoreHeight__Fif16CamPropertyBlend -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_003998.c.
 */

extern void CAMDRIVER_SetHeight__Ffif16CamPropertyBlend(int first, int second, float x, float y);

void CAMDRIVER_RestoreHeight__Fif16CamPropertyBlend(int a, float value, int b)
{
    CAMDRIVER_SetHeight__Ffif16CamPropertyBlend(a, b, 1.1399999856948853f, value);
}
