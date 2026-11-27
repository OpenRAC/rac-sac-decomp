/* Add__12StateMachineP5State -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void Add__12StateMachineP5State(int *self, int *state)
{
    int old;

    old = self[0];
    state[1] = (int)self;
    state[0] = old;
    self[0] = (int)state;
}
