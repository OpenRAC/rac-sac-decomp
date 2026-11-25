/* SetNext__14EffectCallbackP14EffectCallback -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the second argument at offset 0.
 */

typedef struct State {
    int field;
} State;

void SetNext__14EffectCallbackP14EffectCallback(State *self, int value)
{
    self->field = value;
}
