/* OperaLemurVerse_LastRequiredWaveDone__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word through one pointer.
 */

typedef struct Node {
    char pad[0x8];
    int slot;
} Node;

typedef struct State {
    char pad[0x54];
    Node *field;
} State;

void OperaLemurVerse_LastRequiredWaveDone__FP4Moby(State *self)
{
    self->field->slot = 0;
}
