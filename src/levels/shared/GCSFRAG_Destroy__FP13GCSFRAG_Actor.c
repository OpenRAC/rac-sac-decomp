/* GCSFRAG_Destroy__FP13GCSFRAG_Actor -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_11CB10.c.
 */

extern void GCS_FIRECRACKER_ReleaseTrail__FP32GCS_FIRECRACKER_SortedTrailActor(char *);

void GCSFRAG_Destroy__FP13GCSFRAG_Actor(char *record)
{
    char *p = *(char **)(record + 0x70);
    if (p != 0)
        GCS_FIRECRACKER_ReleaseTrail__FP32GCS_FIRECRACKER_SortedTrailActor(p);
}
