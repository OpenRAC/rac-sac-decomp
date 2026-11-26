/* GetPhysicsData__15ApeCollisionDef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xB0.
 */

typedef struct State {
    char pad[0xB0];
    int field;
} State;

int GetPhysicsData__15ApeCollisionDef(State *self)
{
    return self->field;
}
