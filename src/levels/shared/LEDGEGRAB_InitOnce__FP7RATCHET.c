/* LEDGEGRAB_InitOnce__FP7RATCHET -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two words of the state.
 */

typedef struct State {
    char pad[0xC80];
    int low;
    char gap[0x18];
    int high;
} State;

void LEDGEGRAB_InitOnce__FP7RATCHET(State *self)
{
    self->low = 0;
    self->high = 0;
}
