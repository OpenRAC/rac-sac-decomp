/* GetEndState__C19ApeAnimPlayAnimNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x3C.
 */

typedef struct State {
    char pad[0x3C];
    int field;
} State;

int GetEndState__C19ApeAnimPlayAnimNode(State *self)
{
    return self->field;
}
