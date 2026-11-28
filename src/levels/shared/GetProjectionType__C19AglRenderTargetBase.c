/* GetProjectionType__C19AglRenderTargetBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x31.
 */

typedef struct State {
    char pad[0x31];
    unsigned char field;
} State;

int GetProjectionType__C19AglRenderTargetBase(State *self)
{
    return self->field;
}
