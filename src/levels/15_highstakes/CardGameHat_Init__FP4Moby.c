/* CardGameHat_Init__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word through a pointer and returns 1.
 */

typedef struct Node {
    int value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int CardGameHat_Init__FP4Moby(State *self)
{
    int result = 1;
    self->field->value = 0;
    return result;
}
