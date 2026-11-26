/* SetEndState__19ApeAnimPlayAnimNodei -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x3C.
 */

typedef struct State {
    char pad[0x3C];
    int field;
} State;

void SetEndState__19ApeAnimPlayAnimNodei(State *self, int value)
{
    self->field = value;
}
