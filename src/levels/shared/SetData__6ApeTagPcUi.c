/* SetData__6ApeTagPcUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x4 and 0x8.
 */

typedef struct State {
    char pad[0x4];
    int first;
    int second;
} State;

void SetData__6ApeTagPcUi(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
