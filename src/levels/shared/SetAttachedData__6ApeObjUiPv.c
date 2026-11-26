/* SetAttachedData__6ApeObjUiPv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x100 and 0x104.
 */

typedef struct State {
    char pad[0x100];
    int first;
    int second;
} State;

void SetAttachedData__6ApeObjUiPv(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
