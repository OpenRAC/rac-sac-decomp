/* GetAspectRatio__C19AglRenderTargetBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x50.
 */

typedef struct State {
    char pad[0x50];
    float field;
} State;

float GetAspectRatio__C19AglRenderTargetBase(State *self)
{
    return self->field;
}
