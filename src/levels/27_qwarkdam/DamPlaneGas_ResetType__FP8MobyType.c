/* DamPlaneGas_ResetType__FP8MobyType -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_damPlaneGasType;
extern int g_damPlaneGasTypeDefault;

void DamPlaneGas_ResetType__FP8MobyType(void *type)
{
    g_damPlaneGasType = g_damPlaneGasTypeDefault;
}
