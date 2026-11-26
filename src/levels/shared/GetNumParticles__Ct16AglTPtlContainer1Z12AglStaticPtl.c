/* GetNumParticles__Ct16AglTPtlContainer1Z12AglStaticPtl -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by two loads from the receiver.
 */

typedef struct Node {
    char pad[0x18];
    int value;
} Node;

typedef struct State {
    char pad[0x50];
    Node *field;
} State;

int GetNumParticles__Ct16AglTPtlContainer1Z12AglStaticPtl(State *self)
{
    return self->field->value;
}
