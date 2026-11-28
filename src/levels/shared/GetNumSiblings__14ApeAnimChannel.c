/* GetNumSiblings__14ApeAnimChannel -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned halfword at offset 0x14.
 */

typedef struct State {
    char pad[0x14];
    unsigned short field;
} State;

int GetNumSiblings__14ApeAnimChannel(State *self)
{
    return self->field;
}
