/* Init__9LedgeGrabPC15LedgeGrabConfigP5State -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x38 and 0x3C.
 */

typedef struct State {
    char pad[0x38];
    int first;
    int second;
} State;

void Init__9LedgeGrabPC15LedgeGrabConfigP5State(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
