/* SetLabel__15ApeAnimTreeNodeUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0.
 */

typedef struct State {
    int field;
} State;

void SetLabel__15ApeAnimTreeNodeUi(State *self, int value)
{
    self->field = value;
}
