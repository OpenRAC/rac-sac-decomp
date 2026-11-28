/* Lvl07CameraBottom_IsTargetable__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Inverts the low bit of one byte through a pointer.
 */

typedef struct Node {
    char pad[0x22];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int Lvl07CameraBottom_IsTargetable__FP4Moby(State *self)
{
    return self->field->value ^ 1;
}
