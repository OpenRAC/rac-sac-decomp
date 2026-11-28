/* MarkFrameAsHit__11ArenaGetHit -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ArenaGetHitConfig {
    char pad[4];
    float t;
} ArenaGetHitConfig;

typedef struct ArenaGetHit {
    char pad[0xC];
    unsigned char flag;
    char pad2[3];
    const ArenaGetHitConfig *cfg;
    float last;
} ArenaGetHit;

void MarkFrameAsHit__11ArenaGetHit(ArenaGetHit *self)
{
    self->last = self->cfg->t;
}
