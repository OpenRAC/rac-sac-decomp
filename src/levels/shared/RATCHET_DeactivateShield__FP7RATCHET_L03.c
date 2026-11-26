/* RATCHET_DeactivateShield__FP7RATCHET -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the word at offset 0xB98 of the state.
 */

typedef struct State {
    char pad[0xB98];
    int field;
} State;

void RATCHET_DeactivateShield__FP7RATCHET(State *self)
{
    self->field = 0;
}
