/* CAMDRIVER_GetWorldMatrix__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_worldMatrix;

float *CAMDRIVER_GetWorldMatrix__Fv(void)
{
    return &g_worldMatrix;
}
