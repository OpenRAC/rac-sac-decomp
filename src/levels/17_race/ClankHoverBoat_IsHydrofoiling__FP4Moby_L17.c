/* ClankHoverBoat_IsHydrofoiling__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word reached through one pointer is positive.
 */

typedef struct Node {
    char pad[0x1EC];
    int value;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

int ClankHoverBoat_IsHydrofoiling__FP4Moby(State *self)
{
    return self->field->value > 0;
}
