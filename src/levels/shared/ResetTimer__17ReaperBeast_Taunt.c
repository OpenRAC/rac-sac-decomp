/* ResetTimer__17ReaperBeast_Taunt -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0x14 of the state.
 */

typedef struct State {
    char pad[0x14];
    int field;
} State;

void ResetTimer__17ReaperBeast_Taunt(State *self)
{
    self->field = 0;
}
