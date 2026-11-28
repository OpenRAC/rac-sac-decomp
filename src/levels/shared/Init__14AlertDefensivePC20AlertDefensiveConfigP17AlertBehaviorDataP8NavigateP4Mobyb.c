/* Init__14AlertDefensivePC20AlertDefensiveConfigP17AlertBehaviorDataP8NavigateP4Mobyb -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AlertDefensive {
    char pad[0xC];
    const void *cfg;
    void *data;
    void *nav;
    void *moby;
    unsigned char flag;
} AlertDefensive;

void Init__14AlertDefensivePC20AlertDefensiveConfigP17AlertBehaviorDataP8NavigateP4Mobyb(
    AlertDefensive *self,
    const void *cfg,
    void *data,
    void *nav,
    void *moby,
    int flag)
{
    self->cfg = cfg;
    self->data = data;
    self->nav = nav;
    self->moby = moby;
    self->flag = flag;
}
