/* SetParent__6ApeObjP6ApeObjP7ApePart -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0xF0 and 0xF4.
 */

typedef struct State {
    char pad[0xF0];
    int first;
    int second;
} State;

void SetParent__6ApeObjP6ApeObjP7ApePart(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
