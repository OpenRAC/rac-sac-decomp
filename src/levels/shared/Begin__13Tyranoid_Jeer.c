/* Begin__13Tyranoid_Jeer -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void ResetTimer__13Tyranoid_Jeer(void *value);
extern void Begin__13ArenaPlayAnim(void *value);

void Begin__13Tyranoid_Jeer(void *value) {
    ResetTimer__13Tyranoid_Jeer(value);
    Begin__13ArenaPlayAnim(value);
}
