/* Init__12BalconyDeathPC22ReallyBasicDeathConfigP4MobyP5StateT3 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct State {
    char pad[0xC];
    void *config;
    void *state;
    void *extra;
    char pad18[0xC];
    void *moby;
} State;

void Init__12BalconyDeathPC22ReallyBasicDeathConfigP4MobyP5StateT3(
    State *self, void *config, void *moby, void *state, void *extra)
{
    self->state = state;
    self->extra = extra;
    self->moby = moby;
    self->config = config;
}
