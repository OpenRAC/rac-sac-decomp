/* GetFarZClip__C19AglRenderTargetBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the float at offset 0x3C.
 */

typedef struct State {
    char pad[0x3C];
    float field;
} State;

float GetFarZClip__C19AglRenderTargetBase(State *self)
{
    return self->field;
}
