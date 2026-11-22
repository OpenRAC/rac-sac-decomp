/* Begin__18BoltThief_SuckFace -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void ResetTimer__18BoltThief_SuckFace(void *value);
extern void Begin__12PlayAnimTurn(void *value);

void Begin__18BoltThief_SuckFace(void *value) {
    ResetTimer__18BoltThief_SuckFace(value);
    Begin__12PlayAnimTurn(value);
}
