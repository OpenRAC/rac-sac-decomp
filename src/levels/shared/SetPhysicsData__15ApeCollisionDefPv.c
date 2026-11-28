/* SetPhysicsData__15ApeCollisionDefPv -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0xB0.
 */

typedef struct State {
    char pad[0xB0];
    int field;
} State;

void SetPhysicsData__15ApeCollisionDefPv(State *self, int value)
{
    self->field = value;
}
