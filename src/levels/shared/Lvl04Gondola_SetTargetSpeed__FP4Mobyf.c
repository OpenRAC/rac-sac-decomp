/* Lvl04Gondola_SetTargetSpeed__FP4Mobyf -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument through one pointer.
 */

typedef struct Node {
    char pad[0x30];
    float value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void Lvl04Gondola_SetTargetSpeed__FP4Mobyf(State *self, float value)
{
    self->field->value = value;
}
