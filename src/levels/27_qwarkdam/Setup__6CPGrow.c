/* Setup__6CPGrow -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two words of the state.
 */

typedef struct State {
    char pad[0xC];
    int low;
    int high;
} State;

void Setup__6CPGrow(State *self)
{
    self->low = 0;
    self->high = 0;
}
