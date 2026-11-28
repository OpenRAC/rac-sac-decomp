/* WeightedAverageAccumulate__19ApeAnimChannelFloatPff -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds key * weight into the accumulator.
 */

typedef struct State {
    char pad[0x30];
    float key;
} State;

void WeightedAverageAccumulate__19ApeAnimChannelFloatPff(
    State *self, float *acc, float weight)
{
    *acc += self->key * weight;
}
