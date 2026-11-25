/* Init__19AmoeboidSmall_MeleePC22ConditionalMeleeConfigP5State -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two arguments and clears the next word.
 */

typedef struct State {
    char pad[0x10];
    int low;
    int mid;
    int high;
} State;

void Init__19AmoeboidSmall_MeleePC22ConditionalMeleeConfigP5State(State *self, int first, int second)
{
    self->mid = second;
    self->low = first;
    self->high = 0;
}
