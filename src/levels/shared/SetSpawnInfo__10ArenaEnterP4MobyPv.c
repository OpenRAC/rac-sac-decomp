/* SetSpawnInfo__10ArenaEnterP4MobyPv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the two arguments at offsets 0x20 and 0x24.
 */

typedef struct State {
    char pad[0x20];
    int first;
    int second;
} State;

void SetSpawnInfo__10ArenaEnterP4MobyPv(State *self, int first, int second)
{
    self->first = first;
    self->second = second;
}
