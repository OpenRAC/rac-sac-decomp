/* GetAnimDef__19ApeAnimPlayAnimNode -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x40.
 */

typedef struct State {
    char pad[0x40];
    int field;
} State;

int GetAnimDef__19ApeAnimPlayAnimNode(State *self)
{
    return self->field;
}
