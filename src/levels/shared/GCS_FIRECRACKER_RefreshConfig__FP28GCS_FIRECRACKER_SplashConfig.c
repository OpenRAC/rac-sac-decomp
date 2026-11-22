/* GCS_FIRECRACKER_RefreshConfig__FP28GCS_FIRECRACKER_SplashConfig -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_114180.c.
 */

extern void GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_SparkConfig(void *);
extern void GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_GlintConfig(void *);
extern void GCS_FIRECRACKER_RefreshConfig__FP21GCS_FIRECRACKER_Flare(void *);

void GCS_FIRECRACKER_RefreshConfig__FP28GCS_FIRECRACKER_SplashConfig(char *record)
{
    GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_SparkConfig(record + 0xc);
    GCS_FIRECRACKER_RefreshConfig__FP27GCS_FIRECRACKER_GlintConfig(record + 0x4c);
    GCS_FIRECRACKER_RefreshConfig__FP21GCS_FIRECRACKER_Flare(record + 0x90);
}
