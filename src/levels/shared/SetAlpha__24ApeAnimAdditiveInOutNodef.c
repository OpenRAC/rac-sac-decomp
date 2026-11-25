/* SetAlpha__24ApeAnimAdditiveInOutNodef -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument through one pointer.
 */

typedef struct Node {
    char pad[0x4];
    float value;
} Node;

typedef struct State {
    char pad[0x28];
    Node *field;
} State;

void SetAlpha__24ApeAnimAdditiveInOutNodef(State *self, float value)
{
    self->field->value = value;
}
