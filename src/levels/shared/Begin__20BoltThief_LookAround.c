/* Begin__20BoltThief_LookAround -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void ResetTimer__20BoltThief_LookAround(void *value);
extern void Begin__12PlayAnimTurn(void *value);

void Begin__20BoltThief_LookAround(void *value) {
    ResetTimer__20BoltThief_LookAround(value);
    Begin__12PlayAnimTurn(value);
}
