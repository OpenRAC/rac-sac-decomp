/* RATCHET_WearingShield__FP7RATCHET -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0xB98 is non-zero.
 */

typedef struct State {
    char pad[0xB98];
    int field;
} State;

int RATCHET_WearingShield__FP7RATCHET(State *self)
{
    return self->field != 0;
}
