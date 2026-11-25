/* SetTimeScale__19ApeAnimPlayAnimNodef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x34.
 */

typedef struct State {
    char pad[0x34];
    float field;
} State;

void SetTimeScale__19ApeAnimPlayAnimNodef(State *self, float value)
{
    self->field = value;
}
