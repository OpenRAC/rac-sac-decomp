/* PowerupAmmo_UpdateOnGround__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void PowerupAmmo_CheckAllPlayers__FP4Moby(void *value);
extern void PowerupAmmo_DrawGlow__FP4Moby(void *value);

void PowerupAmmo_UpdateOnGround__FP4Moby(void *value) {
    PowerupAmmo_CheckAllPlayers__FP4Moby(value);
    PowerupAmmo_DrawGlow__FP4Moby(value);
}
