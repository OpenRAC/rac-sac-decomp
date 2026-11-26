/* SetAlpha__21ApeAnimBlendInOutNodeif -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument in the indexed slot.
 */

typedef struct State {
    char pad[0x2C];
    float *values;
} State;

void SetAlpha__21ApeAnimBlendInOutNodeif(State *self, int index, float value)
{
    float *slot = &self->values[index];
    *slot = value;
}
