/* GetSibling__14ApeAnimChannelUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the indexed word through one pointer.
 */

typedef struct State {
    char pad[0x10];
    int *values;
} State;

int GetSibling__14ApeAnimChannelUi(State *self, int index)
{
    int *slot = &self->values[index];
    return *slot;
}
