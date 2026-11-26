/* SetFOV__17ApeCameraInstancef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at offset 0x150.
 */

typedef struct State {
    char pad[0x150];
    float field;
} State;

void SetFOV__17ApeCameraInstancef(State *self, float value)
{
    self->field = value;
}
