/* KillEffect__9GooSplashP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GooSplash {
    unsigned char pad[0x5C];
    int active;
} GooSplash;

extern char g_gooSplashCount[];

void KillEffect__9GooSplashP4Moby(GooSplash *self)
{
    self->active = 0;
    *(int *)g_gooSplashCount = *(int *)g_gooSplashCount - 1;
}
