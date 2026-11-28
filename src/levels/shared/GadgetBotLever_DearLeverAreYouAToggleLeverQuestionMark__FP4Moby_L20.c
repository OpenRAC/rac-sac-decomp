/* GadgetBotLever_DearLeverAreYouAToggleLeverQuestionMark__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the loaded word or byte is nonzero.
 */

typedef struct Node {
    unsigned char value;
} Node;

typedef struct State {
    char pad[0x54];
    Node *field;
} State;

int GadgetBotLever_DearLeverAreYouAToggleLeverQuestionMark__FP4Moby(State *self)
{
    return self->field->value != 0;
}
