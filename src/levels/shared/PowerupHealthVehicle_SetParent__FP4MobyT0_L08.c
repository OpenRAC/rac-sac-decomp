/* PowerupHealthVehicle_SetParent__FP4MobyT0 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument at offset 0x30 of the object loaded from offset 0x54.
 */

typedef struct Node {
    char pad[0x30];
    int slot;
} Node;

typedef struct State {
    char pad[0x54];
    Node *field;
} State;

void PowerupHealthVehicle_SetParent__FP4MobyT0(State *self, int value)
{
    self->field->slot = value;
}
