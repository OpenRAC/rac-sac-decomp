/* BoltThief_NoAlert__FP4Mobyb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument as a byte through one pointer.
 */

typedef struct Node {
    char pad[0x3D];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void BoltThief_NoAlert__FP4Mobyb(State *self, int value)
{
    self->field->value = value;
}
