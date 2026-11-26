/* GetNumChildren__15ApeAnimTreeNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned halfword at offset 0x10.
 */

typedef struct State {
    char pad[0x10];
    unsigned short field;
} State;

int GetNumChildren__15ApeAnimTreeNode(State *self)
{
    return self->field;
}
