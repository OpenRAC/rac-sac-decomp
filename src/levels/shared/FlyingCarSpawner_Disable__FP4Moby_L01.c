/* FlyingCarSpawner_Disable__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one byte through one pointer.
 */

typedef struct Node {
    char pad[0x60];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void FlyingCarSpawner_Disable__FP4Moby(State *self)
{
    self->field->value = 0;
}
