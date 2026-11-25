/* OperaDamQwark_GetProgress__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float reached through one pointer.
 */

typedef struct Node {
    char pad[0x1C];
    float value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

float OperaDamQwark_GetProgress__FP4Moby(State *self)
{
    return self->field->value;
}
