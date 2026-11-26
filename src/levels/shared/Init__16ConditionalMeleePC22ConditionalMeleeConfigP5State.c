/* Init__16ConditionalMeleePC22ConditionalMeleeConfigP5State -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x10 and 0x14.
 */

typedef struct State {
    char pad[0x10];
    int first;
    int second;
} State;

void Init__16ConditionalMeleePC22ConditionalMeleeConfigP5State(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
