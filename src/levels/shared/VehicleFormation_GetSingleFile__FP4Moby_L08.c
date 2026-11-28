/* VehicleFormation_GetSingleFile__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte reached through one pointer.
 */

typedef struct Node {
    char pad[0x1C];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int VehicleFormation_GetSingleFile__FP4Moby(State *self)
{
    return self->field->value;
}
