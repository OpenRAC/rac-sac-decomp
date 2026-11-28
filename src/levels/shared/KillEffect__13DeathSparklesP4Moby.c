/* KillEffect__13DeathSparklesP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DeathSparkles {
    unsigned char pad[0x10];
    unsigned char active;
} DeathSparkles;

extern int g_deathSparklesCount;

void KillEffect__13DeathSparklesP4Moby(DeathSparkles *self)
{
    g_deathSparklesCount--;
    self->active = 0;
}
