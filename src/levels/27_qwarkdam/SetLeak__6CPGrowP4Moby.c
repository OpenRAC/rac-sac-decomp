/* SetLeak__6CPGrowP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one argument and clears one word.
 */

typedef struct State {
    char pad[0xC];
    int low;
    int high;
} State;

void SetLeak__6CPGrowP4Moby(State *self, int value)
{
    self->low = value;
    self->high = 0;
}
