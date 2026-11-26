/* GetPosition__C7ApeFile -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x100.
 */

typedef struct State {
    char pad[0x100];
    int field;
} State;

int GetPosition__C7ApeFile(State *self)
{
    return self->field;
}
