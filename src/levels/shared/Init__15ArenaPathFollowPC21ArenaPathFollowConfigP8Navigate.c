/* Init__15ArenaPathFollowPC21ArenaPathFollowConfigP8Navigate -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ArenaPathFollow {
    char pad[0x10];
    const void *cfg;
    int clear;
    char gap[4];
    void *nav;
    char gap2;
    unsigned char flag;
} ArenaPathFollow;

void Init__15ArenaPathFollowPC21ArenaPathFollowConfigP8Navigate(
    ArenaPathFollow *self,
    const void *cfg,
    void *nav)
{
    self->nav = nav;
    self->cfg = cfg;
    self->clear = 0;
    self->flag = 0;
}
