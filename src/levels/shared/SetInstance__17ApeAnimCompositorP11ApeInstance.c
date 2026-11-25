/* SetInstance__17ApeAnimCompositorP11ApeInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x70.
 */

typedef struct State {
    char pad[0x70];
    int field;
} State;

void SetInstance__17ApeAnimCompositorP11ApeInstance(State *self, int value)
{
    self->field = value;
}
