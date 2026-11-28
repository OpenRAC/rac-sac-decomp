/* KillEffect__8MobyGlowP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MobyGlow {
    char pad[0x1C];
    unsigned char active;
} MobyGlow;

extern int D_L01_0026CEE8;

void KillEffect__8MobyGlowP4Moby(MobyGlow *self, void *moby)
{
    self->active = 0;
    D_L01_0026CEE8--;
    (void)moby;
}
