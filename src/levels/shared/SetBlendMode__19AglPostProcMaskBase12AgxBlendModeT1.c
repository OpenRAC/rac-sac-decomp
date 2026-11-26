/* SetBlendMode__19AglPostProcMaskBase12AgxBlendModeT1 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x30 and 0x34.
 */

typedef struct State {
    char pad[0x30];
    int first;
    int second;
} State;

void SetBlendMode__19AglPostProcMaskBase12AgxBlendModeT1(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
