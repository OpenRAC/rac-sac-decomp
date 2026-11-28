/* SetPhysics__11ApeInstanceP14ApePhysicsInst -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x120.
 */

typedef struct State {
    char pad[0x120];
    int field;
} State;

void SetPhysics__11ApeInstanceP14ApePhysicsInst(State *self, int value)
{
    self->field = value;
}
