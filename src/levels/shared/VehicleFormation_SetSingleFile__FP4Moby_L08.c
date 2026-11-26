/* VehicleFormation_SetSingleFile__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one constant through a pointer.
 */

typedef struct Node {
    char pad[0x1C];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void VehicleFormation_SetSingleFile__FP4Moby(State *self)
{
    self->field->value = 1;
}
