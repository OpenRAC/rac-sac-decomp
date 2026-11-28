/* Lvl07CameraBottom_DidBrakeDisguise__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte reached through one pointer.
 */

typedef struct Node {
    char pad[0x23];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int Lvl07CameraBottom_DidBrakeDisguise__FP4Moby(State *self)
{
    return self->field->value;
}
