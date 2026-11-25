/* SetTime__19ApeAnimPlayAnimNodef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x38.
 */

typedef struct State {
    char pad[0x38];
    float field;
} State;

void SetTime__19ApeAnimPlayAnimNodef(State *self, float value)
{
    self->field = value;
}
