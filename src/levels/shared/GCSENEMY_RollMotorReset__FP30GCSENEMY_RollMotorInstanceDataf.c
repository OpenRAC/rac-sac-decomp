/* GCSENEMY_RollMotorReset__FP30GCSENEMY_RollMotorInstanceDataf -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x0.
 */

typedef struct State {
    float field;
} State;

void GCSENEMY_RollMotorReset__FP30GCSENEMY_RollMotorInstanceDataf(State *self, float value)
{
    self->field = value;
}
