/* KillEffect__9AcidSmokeP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AcidSmoke {
    unsigned char pad[0x30];
    int active;
} AcidSmoke;

extern char g_acidSmokeCount[];

void KillEffect__9AcidSmokeP4Moby(AcidSmoke *self)
{
    self->active = 0;
    *(int *)g_acidSmokeCount = *(int *)g_acidSmokeCount - 1;
}
