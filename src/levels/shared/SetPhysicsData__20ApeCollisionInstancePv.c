/* SetPhysicsData__20ApeCollisionInstancePv -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x60.
 */

typedef struct State {
    char pad[0x60];
    int field;
} State;

void SetPhysicsData__20ApeCollisionInstancePv(State *self, int value)
{
    self->field = value;
}
