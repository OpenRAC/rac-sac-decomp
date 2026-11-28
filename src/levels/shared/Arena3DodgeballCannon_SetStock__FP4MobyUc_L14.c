/* Arena3DodgeballCannon_SetStock__FP4MobyUc -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument as a byte through one pointer.
 */

typedef struct Node {
    char pad[0x1C];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void Arena3DodgeballCannon_SetStock__FP4MobyUc(State *self, int value)
{
    self->field->value = value;
}
