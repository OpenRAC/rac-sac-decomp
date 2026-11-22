/* GCS_FIRECRACKER_RefreshConfig__FP29GCS_FIRECRACKER_NoSmokeConfig -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_114140.c.
 */

extern void GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_SparkConfig(char *);
extern void GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_GlintConfig(char *);
extern void GCS_FIRECRACKER_RefreshConfig__FP33GCS_FIRECRACKER_NoSmokePuffConfig(char *);
extern void GCS_FIRECRACKER_RefreshConfig__FP21GCS_FIRECRACKER_Flare(char *);

void GCS_FIRECRACKER_RefreshConfig__FP29GCS_FIRECRACKER_NoSmokeConfig(char *record)
{
    GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_SparkConfig(record + 0x4);
    GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_GlintConfig(record + 0x44);
    GCS_FIRECRACKER_RefreshConfig__FP33GCS_FIRECRACKER_NoSmokePuffConfig(record + 0x88);
    GCS_FIRECRACKER_RefreshConfig__FP21GCS_FIRECRACKER_Flare(record + 0xd0);
}
