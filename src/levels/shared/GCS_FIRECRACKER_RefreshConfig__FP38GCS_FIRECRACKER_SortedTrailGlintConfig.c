/* GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailGlintConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * P->f[18] = 1.0f / p->f[0].
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_114080.c.
 */

typedef struct {
    float f[32];
} Obj;

void GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailGlintConfig(Obj *p)
{
    p->f[18] = 1.0f / p->f[0];
}
