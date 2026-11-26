/* SetLightGroup__11ApeIDefBaseUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0x68.
 */

typedef struct State {
    char pad[0x68];
    int field;
} State;

void SetLightGroup__11ApeIDefBaseUi(State *self, int value)
{
    self->field = value;
}
