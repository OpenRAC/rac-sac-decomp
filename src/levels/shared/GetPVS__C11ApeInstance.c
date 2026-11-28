/* GetPVS__C11ApeInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x138.
 */

typedef struct State {
    char pad[0x138];
    int field;
} State;

int GetPVS__C11ApeInstance(State *self)
{
    return self->field;
}
