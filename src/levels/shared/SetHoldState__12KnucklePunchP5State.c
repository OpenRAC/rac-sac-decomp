/* SetHoldState__12KnucklePunchP5State -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x20.
 */

typedef struct State {
    char pad[0x20];
    int field;
} State;

void SetHoldState__12KnucklePunchP5State(State *self, int value)
{
    self->field = value;
}
