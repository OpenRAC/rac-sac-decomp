/* BOLTCRANK_InitStructure__FP7RATCHET -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two words of the state.
 */

typedef struct State {
    char pad[0xB54];
    int low;
    int high;
} State;

void BOLTCRANK_InitStructure__FP7RATCHET(State *self)
{
    self->low = 0;
    self->high = 0;
}
