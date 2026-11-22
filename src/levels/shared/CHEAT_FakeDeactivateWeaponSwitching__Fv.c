/* CHEAT_FakeDeactivateWeaponSwitching__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_026BF0.c.
 */

extern unsigned char D_L01_00253EAC;

void CHEAT_FakeDeactivateWeaponSwitching__Fv(void) {
    D_L01_00253EAC = 0;
}
