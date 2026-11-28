/* SetMeshVisMask__11ApeInstanceUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x118.
 */

typedef struct State {
    char pad[0x118];
    int field;
} State;

void SetMeshVisMask__11ApeInstanceUi(State *self, int value)
{
    self->field = value;
}
