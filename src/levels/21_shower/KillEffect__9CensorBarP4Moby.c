/* KillEffect__9CensorBarP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct CensorBar {
    unsigned char pad[0x10];
    int active;
} CensorBar;

extern char g_censorCount[];

void KillEffect__9CensorBarP4Moby(CensorBar *self)
{
    self->active = 0;
    *(int *)g_censorCount = *(int *)g_censorCount - 1;
}
