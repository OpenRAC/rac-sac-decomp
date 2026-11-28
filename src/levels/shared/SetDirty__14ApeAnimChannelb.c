/* SetDirty__14ApeAnimChannelb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument as a byte at offset 0xC.
 */

typedef struct State {
    char pad[0xC];
    unsigned char field;
} State;

void SetDirty__14ApeAnimChannelb(State *self, int value)
{
    self->field = value;
}
