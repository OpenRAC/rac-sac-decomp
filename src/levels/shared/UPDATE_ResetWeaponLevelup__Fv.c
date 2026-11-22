/* UPDATE_ResetWeaponLevelup__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01AFF8.c.
 */

extern unsigned int D_FE_000F04C8;
extern unsigned int D_FE_000F04CC;

void UPDATE_ResetWeaponLevelup__Fv(void) {
    D_FE_000F04C8 = 0;
    D_FE_000F04CC = 0;
}
