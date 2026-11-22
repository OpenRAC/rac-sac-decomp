/* GCS_EntitySpawnerUpdate__Fv -- 316 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ages every live entry in the pool by one and swap-removes the ones that
 * expire, then stores the new count.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/MOBYS/GCS/GCS/LEVEL_15_0F63A8.c.
 */

struct Ent {
    char pad_00[0x24];
    float f_24;
    char pad_28[0x34 - 0x28];
};

struct Pool {
    struct Ent e[2049];
    int count;
};

extern struct Pool g_gcs;

extern void GCS_EntityEmit__FPC17GCS_EntitySpawner(struct Ent *e);

void GCS_EntitySpawnerUpdate__Fv(void)
{
    struct Ent *cur;
    struct Ent *end;
    float f;

    cur = &g_gcs.e[1];
    end = cur + g_gcs.count;
    while (cur != end) {
        f = cur->f_24 - 1.0f;
        if (f < 0.0f) {
            GCS_EntityEmit__FPC17GCS_EntitySpawner(cur);
            end--;
            *cur = *end;
        } else {
            cur->f_24 = f;
            cur++;
        }
    }
    g_gcs.count = end - &g_gcs.e[1];
}
