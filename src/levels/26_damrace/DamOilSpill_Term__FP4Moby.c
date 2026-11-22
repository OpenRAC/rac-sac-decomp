/* DamOilSpill_Term__FP4Moby -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_174828.c.
 */

extern long long DamOilSpill_IsDynamic__FP4Moby(void);
extern void VehicleSection_RemoveDynamicMoby__FP4Moby(long long);

void DamOilSpill_Term__FP4Moby(long long value)
{
    if (DamOilSpill_IsDynamic__FP4Moby() != 0)
        VehicleSection_RemoveDynamicMoby__FP4Moby(value);
}
