/* Setup__9LedgeGrab -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two words of the state.
 */

typedef struct State {
    char pad[0x2C];
    int low;
    char gap[0x4];
    int high;
} State;

void Setup__9LedgeGrab(State *self)
{
    self->low = 0;
    self->high = 0;
}
