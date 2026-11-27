/* Init__10ArenaSwarmPC16ArenaSwarmConfigP8NavigateP5Stateb -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ArenaSwarm {
    char pad[0xC];
    unsigned char flag;
    char gap[3];
    const void *cfg;
    void *nav;
    char gap2[8];
    void *state;
} ArenaSwarm;

void Init__10ArenaSwarmPC16ArenaSwarmConfigP8NavigateP5Stateb(
    ArenaSwarm *self,
    const void *cfg,
    void *nav,
    void *state,
    int flag)
{
    self->cfg = cfg;
    self->nav = nav;
    self->state = state;
    self->flag = flag;
}
