/* UPDATE_CountdownToWeaponLevelup__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01AFE0.c.
 */

extern int D_FE_000F04C8;
extern int D_FE_000F04CC;

void UPDATE_CountdownToWeaponLevelup__FUi(int value)
{
    D_FE_000F04C8 = 15;
    D_FE_000F04CC = value;
}
