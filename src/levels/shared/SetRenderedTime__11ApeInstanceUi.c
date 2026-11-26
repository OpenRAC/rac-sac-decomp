/* SetRenderedTime__11ApeInstanceUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x128.
 */

typedef struct State {
    char pad[0x128];
    int field;
} State;

void SetRenderedTime__11ApeInstanceUi(State *self, int value)
{
    self->field = value;
}
