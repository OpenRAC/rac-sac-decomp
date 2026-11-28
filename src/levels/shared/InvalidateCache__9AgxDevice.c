/* InvalidateCache__9AgxDevice -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two words of the state.
 */

typedef struct State {
    char pad[0x7C];
    int low;
    int high;
} State;

void InvalidateCache__9AgxDevice(State *self)
{
    self->low = 0;
    self->high = 0;
}
