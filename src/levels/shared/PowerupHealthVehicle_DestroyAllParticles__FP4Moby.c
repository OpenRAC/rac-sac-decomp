/* PowerupHealthVehicle_DestroyAllParticles__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void PowerupHealthVehicle_DestroyTrail__FP4Moby(void *value);
extern void PowerupHealthVehicle_DestroySphereParticles__FP4Moby(void *value);

void PowerupHealthVehicle_DestroyAllParticles__FP4Moby(void *value) {
    PowerupHealthVehicle_DestroyTrail__FP4Moby(value);
    PowerupHealthVehicle_DestroySphereParticles__FP4Moby(value);
}
