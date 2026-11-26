/* SetMatrix__14ApeAnimChannelP4AMtx -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x4.
 */

typedef struct State {
    char pad[0x4];
    int field;
} State;

void SetMatrix__14ApeAnimChannelP4AMtx(State *self, int value)
{
    self->field = value;
}
