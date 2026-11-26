/* Init__5StuckPC11StuckConfigP8Navigate -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two integer arguments.
 */

typedef struct State {
    char pad_C[0xC];
    int at_C;
    int at_10;
} State;

void Init__5StuckPC11StuckConfigP8Navigate(State *self, int first, int second)
{
    self->at_C = second;
    self->at_10 = first;
}
