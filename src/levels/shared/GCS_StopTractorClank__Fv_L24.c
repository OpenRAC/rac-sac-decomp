/* GCS_StopTractorClank__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GCS {
    char pad[0x120];
    int tractorClank;
} GCS;

extern GCS g_tractorBase;

void GCS_StopTractorClank__Fv(void)
{
    g_tractorBase.tractorClank--;
}
