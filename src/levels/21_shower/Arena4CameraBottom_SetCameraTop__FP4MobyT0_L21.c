/* Arena4CameraBottom_SetCameraTop__FP4MobyT0 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument at offset 0x8 of the object loaded from offset 0x58.
 */

typedef struct Node {
    char pad[0x8];
    int slot;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void Arena4CameraBottom_SetCameraTop__FP4MobyT0(State *self, int value)
{
    self->field->slot = value;
}
