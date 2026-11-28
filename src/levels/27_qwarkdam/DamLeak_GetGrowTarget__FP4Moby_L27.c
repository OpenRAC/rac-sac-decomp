/* DamLeak_GetGrowTarget__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by two loads from the receiver.
 */

typedef struct Node {
    char pad[0x14];
    int value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int DamLeak_GetGrowTarget__FP4Moby(State *self)
{
    return self->field->value;
}
