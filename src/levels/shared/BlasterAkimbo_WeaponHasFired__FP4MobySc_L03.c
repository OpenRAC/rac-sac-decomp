/* BlasterAkimbo_WeaponHasFired__FP4MobySc -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_148670.c.
 */

extern void BlasterShared_WeaponHasFired__FP4MobyRUiP16BlasterLightVarsSc(void *, void *, void *, int);

void BlasterAkimbo_WeaponHasFired__FP4MobySc(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    BlasterShared_WeaponHasFired__FP4MobyRUiP16BlasterLightVarsSc(record, base + 4, base + 8, value);
}
