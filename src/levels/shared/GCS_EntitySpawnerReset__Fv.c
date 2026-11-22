/* GCS_EntitySpawnerReset__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/MOBYS/GCS/GCS/LEVEL_15_0F6388.c.
 */

struct Holder
{
    char pad[0x1a034];
    int field;
};

extern struct Holder g_gcs;

void GCS_EntitySpawnerReset__Fv(void)
{
    g_gcs.field = 0;
}
