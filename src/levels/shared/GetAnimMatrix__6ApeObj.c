/* GetAnimMatrix__6ApeObj -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0xA0.
 */

typedef struct State {
    char pad[0xA0];
    int field;
} State;

int GetAnimMatrix__6ApeObj(State *self)
{
    return self->field;
}
