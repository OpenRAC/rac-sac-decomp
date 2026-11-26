/* Init__14BasicNavWanderPC20BasicNavWanderConfigP8NavigateP7Trigger -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the three arguments at offsets 0xC, 0x10 and 0x14.
 */

typedef struct State {
    char pad[0xC];
    int first;
    int second;
    int third;
} State;

void Init__14BasicNavWanderPC20BasicNavWanderConfigP8NavigateP7Trigger(State *self, int first, int second, int third)
{
    self->first = first;
    self->second = second;
    self->third = third;
}
