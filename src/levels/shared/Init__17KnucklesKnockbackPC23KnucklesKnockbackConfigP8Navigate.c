/* Init__17KnucklesKnockbackPC23KnucklesKnockbackConfigP8Navigate -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Cfg {
    char pad[0x14];
    float value;
} Cfg;

typedef struct KnucklesKnockback {
    char pad[0xC];
    Cfg *cfg;
    char gap[0x20];
    void *nav;
    float value;
    unsigned char flag;
} KnucklesKnockback;

void Init__17KnucklesKnockbackPC23KnucklesKnockbackConfigP8Navigate(
    KnucklesKnockback *self,
    Cfg *cfg,
    void *nav)
{
    self->nav = nav;
    self->cfg = cfg;
    self->flag = 0;
    self->value = cfg->value;
}
