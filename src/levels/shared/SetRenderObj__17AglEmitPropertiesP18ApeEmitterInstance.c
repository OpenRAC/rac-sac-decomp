/* SetRenderObj__17AglEmitPropertiesP18ApeEmitterInstance -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores an argument and the constant 2.
 */

typedef struct State {
    char pad[0x3C];
    int field;
    int value;
} State;

void SetRenderObj__17AglEmitPropertiesP18ApeEmitterInstance(State *self, int argument)
{
    self->value = argument;
    self->field = 2;
}
