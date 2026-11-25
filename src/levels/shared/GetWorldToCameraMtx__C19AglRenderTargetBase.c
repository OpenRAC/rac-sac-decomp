/* GetWorldToCameraMtx__C19AglRenderTargetBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the field at offset 0x100.
 */

typedef struct State {
    char pad[0x100];
    int field[1];
} State;

int *GetWorldToCameraMtx__C19AglRenderTargetBase(State *self)
{
    return self->field;
}
