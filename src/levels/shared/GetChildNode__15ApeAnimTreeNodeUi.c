/* GetChildNode__15ApeAnimTreeNodeUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the indexed word through one pointer.
 */

typedef struct State {
    char pad[0xC];
    int *values;
} State;

int GetChildNode__15ApeAnimTreeNodeUi(State *self, int index)
{
    int *slot = &self->values[index];
    return *slot;
}
