/* KillEffect__14LightningStormP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct LightningStorm {
    char pad[0x68];
    unsigned char active;
    char gap[3];
    int stored;
    int cleared;
} LightningStorm;

void KillEffect__14LightningStormP4Moby(LightningStorm *self)
{
    self->active = 0;
    self->stored = 0x78;
    self->cleared = 0;
}
