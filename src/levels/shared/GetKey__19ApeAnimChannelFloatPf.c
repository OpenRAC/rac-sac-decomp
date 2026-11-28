/* GetKey__19ApeAnimChannelFloatPf -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies one float out of the object.
 */

typedef struct State {
    char pad[0x30];
    float field;
} State;

void GetKey__19ApeAnimChannelFloatPf(State *self, float *value)
{
    *value = self->field;
}
