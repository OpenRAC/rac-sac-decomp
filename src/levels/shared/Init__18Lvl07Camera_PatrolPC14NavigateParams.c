/* Init__18Lvl07Camera_PatrolPC14NavigateParams -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the config, sets one flag, and clears the next byte.
 */

typedef struct State {
    char pad[0xC];
    int config;
    unsigned char flag;
    char gap;
    unsigned char clear;
} State;

void Init__18Lvl07Camera_PatrolPC14NavigateParams(State *self, int config)
{
    self->config = config;
    self->flag = 1;
    self->clear = 0;
}
