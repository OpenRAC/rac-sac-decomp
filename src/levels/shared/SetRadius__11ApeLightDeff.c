/* SetRadius__11ApeLightDeff -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x3C.
 */

typedef struct State {
    char pad[0x3C];
    float field;
} State;

void SetRadius__11ApeLightDeff(State *self, float value)
{
    self->field = value;
}
