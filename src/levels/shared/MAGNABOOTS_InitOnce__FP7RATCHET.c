/* MAGNABOOTS_InitOnce__FP7RATCHET -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0xCE0 of the state.
 */

typedef struct State {
    char pad[0xCE0];
    int field;
} State;

void MAGNABOOTS_InitOnce__FP7RATCHET(State *self)
{
    self->field = 0;
}
