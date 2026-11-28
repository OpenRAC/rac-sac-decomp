/* GetFOV__C19AglRenderTargetBase -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Converts the stored radian FOV at offset 0x34 into degrees.
 */

typedef struct State {
    char pad[0x34];
    float fov;
} State;

float GetFOV__C19AglRenderTargetBase(const State *self)
{
    return self->fov * 57.2957763671875f;
}
