/* GetUserData__C15ApeFreeListNodeUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one indexed word.
 */

typedef struct State {
    char pad[0x8];
    int items[1];
} State;

int GetUserData__C15ApeFreeListNodeUi(State *self, int index)
{
    return self->items[index];
}
