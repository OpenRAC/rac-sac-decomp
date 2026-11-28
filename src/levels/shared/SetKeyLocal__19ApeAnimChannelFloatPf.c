/* SetKeyLocal__19ApeAnimChannelFloatPf -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies one float into the object.
 */

typedef struct State {
    char pad[0x30];
    float field;
} State;

void SetKeyLocal__19ApeAnimChannelFloatPf(State *self, float *value)
{
    self->field = *value;
}
