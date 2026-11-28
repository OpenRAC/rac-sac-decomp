/* FinalBossFightController_GetArenaCenterLocation__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns a word reached through one pointer, plus 48.
 */

typedef struct Node {
    char pad[0x14];
    int value;
} Node;

typedef struct State {
    char pad[0x54];
    Node *field;
} State;

int FinalBossFightController_GetArenaCenterLocation__FP4Moby(State *self)
{
    return self->field->value + 48;
}
