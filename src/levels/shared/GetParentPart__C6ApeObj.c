/* GetParentPart__C6ApeObj -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xF4.
 */

typedef struct State {
    char pad[0xF4];
    int field;
} State;

int GetParentPart__C6ApeObj(State *self)
{
    return self->field;
}
