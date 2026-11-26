/* PLAYER_GetEffectManager__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns a word reached through one pointer, plus 1392.
 */

typedef struct Node {
    int value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int PLAYER_GetEffectManager__FP4Moby(State *self)
{
    return self->field->value + 1392;
}
