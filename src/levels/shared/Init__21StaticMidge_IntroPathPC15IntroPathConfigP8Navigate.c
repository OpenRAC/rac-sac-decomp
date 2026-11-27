/* Init__21StaticMidge_IntroPathPC15IntroPathConfigP8Navigate -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct State {
    char pad[0xC];
    void *config;
    void *navigate;
    unsigned char b14;
    unsigned char b15;
} State;

void Init__21StaticMidge_IntroPathPC15IntroPathConfigP8Navigate(
    State *self, void *config, void *navigate)
{
    self->config = config;
    self->navigate = navigate;
    self->b14 = 0;
    self->b15 = 0;
}
