/* SmokeBomb_ClearDamagedEnemies__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_050DC8.c.
 */

extern unsigned int D_L01_0026C9E4;

void SmokeBomb_ClearDamagedEnemies__Fv(void) {
    D_L01_0026C9E4 = 0;
}
