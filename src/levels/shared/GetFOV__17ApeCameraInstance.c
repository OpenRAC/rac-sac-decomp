/* GetFOV__17ApeCameraInstance -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x150.
 */

typedef struct State {
    char pad[0x150];
    float field;
} State;

float GetFOV__17ApeCameraInstance(State *self)
{
    return self->field;
}
