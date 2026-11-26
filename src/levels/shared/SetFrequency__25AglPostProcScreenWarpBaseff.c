/* SetFrequency__25AglPostProcScreenWarpBaseff -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two float arguments.
 */

typedef struct State {
    char pad[0x1660];
    float low;
    float high;
} State;

void SetFrequency__25AglPostProcScreenWarpBaseff(State *self, float first, float second)
{
    self->low = first;
    self->high = second;
}
