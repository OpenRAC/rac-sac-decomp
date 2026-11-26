/* Level08Fan_Reset__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word through a pointer and one byte on the object.
 */

typedef struct Node {
    char pad[0x18];
    int value;
} Node;

typedef struct State {
    char pad[0x45];
    unsigned char flag;
    char gap[0x12];
    Node *field;
} State;

void Level08Fan_Reset__FP4Moby(State *self)
{
    self->field->value = 0;
    self->flag = 0;
}
