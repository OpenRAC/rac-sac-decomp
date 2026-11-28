/* Init__11ArenaGetHitPC17ArenaGetHitConfigb -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ArenaGetHitConfig ArenaGetHitConfig;

typedef struct ArenaGetHit {
    char pad[0xC];
    unsigned char flag;
    char pad2[3];
    const ArenaGetHitConfig *cfg;
    float last;
} ArenaGetHit;

void Init__11ArenaGetHitPC17ArenaGetHitConfigb(
    ArenaGetHit *self,
    const ArenaGetHitConfig *cfg,
    int flag)
{
    self->cfg = cfg;
    self->flag = flag;
    self->last = 0;
}
