/* FinalBossFightController_MovieFinishedCB__FPv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores one constant through a pointer.
 */

typedef struct Node {
    char pad[0x62];
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void FinalBossFightController_MovieFinishedCB__FPv(State *self)
{
    self->field->value = 1;
}
