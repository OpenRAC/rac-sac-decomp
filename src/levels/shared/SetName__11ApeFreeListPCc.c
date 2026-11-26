/* SetName__11ApeFreeListPCc -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x34.
 */

typedef struct State {
    char pad[0x34];
    int field;
} State;

void SetName__11ApeFreeListPCc(State *self, int value)
{
    self->field = value;
}
