/* ResetTimer__21StaticMidge_Celebrate -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0x10 of the state.
 */

typedef struct State {
    char pad[0x10];
    int field;
} State;

void ResetTimer__21StaticMidge_Celebrate(State *self)
{
    self->field = 0;
}
