/* GCSLASER_Deactivate__FP17GCSLASER_InstancePC13GCSLASER_Type -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets two state fields and releases an owned pointer when set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_11F430.c.
 */

struct R {
    char pad0[0x50];
    void *p50;
    char pad54[0x4c];
    int i_a0;
    int i_a4;
};
extern void GCS_FIRECRACKER_ReleaseTrail__FP32GCS_FIRECRACKER_SortedTrailActor(void *);

void GCSLASER_Deactivate__FP17GCSLASER_InstancePC13GCSLASER_Type(struct R *r)
{
    r->i_a0 = 4;
    r->i_a4 = 0;
    if (r->p50 != 0) {
        GCS_FIRECRACKER_ReleaseTrail__FP32GCS_FIRECRACKER_SortedTrailActor(r->p50);
        r->p50 = 0;
    }
}
