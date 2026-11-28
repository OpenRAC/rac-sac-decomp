/* GetPhysics__C11ApeInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x120.
 */

typedef struct State {
    char pad[0x120];
    int field;
} State;

int GetPhysics__C11ApeInstance(State *self)
{
    return self->field;
}
