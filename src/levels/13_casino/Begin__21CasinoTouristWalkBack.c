/* Begin__21CasinoTouristWalkBack -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void GoToStartPoint__21CasinoTouristWalkBack(void *value);
extern void Begin__20BasicNavigateToPoint(void *value);

void Begin__21CasinoTouristWalkBack(void *value) {
    GoToStartPoint__21CasinoTouristWalkBack(value);
    Begin__20BasicNavigateToPoint(value);
}
