/* GCP_SetYawGoal__FP6PLAYERf -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0xB6C.
 */

typedef struct State {
    char pad[0xB6C];
    float field;
} State;

void GCP_SetYawGoal__FP6PLAYERf(State *self, float value)
{
    self->field = value;
}
