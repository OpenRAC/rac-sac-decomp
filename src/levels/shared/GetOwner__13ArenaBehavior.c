/* GetOwner__13ArenaBehavior -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by two loads from the receiver.
 */

typedef struct Node {
    char pad[0x10];
    int value;
} Node;

typedef struct State {
    char pad[0x4];
    Node *field;
} State;

int GetOwner__13ArenaBehavior(State *self)
{
    return self->field->value;
}
