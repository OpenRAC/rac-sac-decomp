/* GCS_FIRECRACKER_RefreshConfig__FP33GCS_FIRECRACKER_SortedTrailConfigb -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs three sub-object helpers, and a fourth when the flag is nonzero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1141B8.c.
 */

extern void GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailSparkConfig(char *p);
extern void GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailGlintConfig(char *p);
extern void GCS_FIRECRACKER_RefreshConfig__FP37GCS_FIRECRACKER_SortedTrailPuffConfig(char *p);
extern void GCS_FIRECRACKER_RefreshConfig__FP21GCS_FIRECRACKER_Flare(char *p);

void GCS_FIRECRACKER_RefreshConfig__FP33GCS_FIRECRACKER_SortedTrailConfigb(char *a0, int a1)
{
    GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailSparkConfig(a0 + 4);
    GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailGlintConfig(a0 + 0x4C);
    GCS_FIRECRACKER_RefreshConfig__FP37GCS_FIRECRACKER_SortedTrailPuffConfig(a0 + 0x98);
    if (a1 != 0) {
        GCS_FIRECRACKER_RefreshConfig__FP21GCS_FIRECRACKER_Flare(a0 + 0x108);
    }
}
