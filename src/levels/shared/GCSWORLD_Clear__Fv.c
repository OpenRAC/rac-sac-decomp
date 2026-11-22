/* GCSWORLD_Clear__Fv -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a counter and every fourth word of a 0x400-byte table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_132718.c.
 */

extern struct {
    char pad0[0x170];
    char *records;
    int pad1;
    int count;
} g_gcs_world;

void GCSWORLD_Clear__Fv(void)
{
    char *record = g_gcs_world.records;
    char *end = record + 0x400;
    g_gcs_world.count = 0;
    while (record != end) {
        *(int *)(record + 4) = 0;
        record += 8;
    }
}
