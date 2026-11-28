/* CrateHealthVehicle_PowerupStolen__FP4MobyT0 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word through one pointer.
 */

typedef struct Node {
    char pad[0x24];
    int slot;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void CrateHealthVehicle_PowerupStolen__FP4MobyT0(State *self)
{
    self->field->slot = 0;
}
