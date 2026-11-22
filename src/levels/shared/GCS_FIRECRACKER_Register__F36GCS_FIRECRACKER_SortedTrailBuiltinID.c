/* GCS_FIRECRACKER_Register__F36GCS_FIRECRACKER_SortedTrailBuiltinID -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0430.c.
 */

extern unsigned char g_gcs_firecracker_sortedTrail[];
extern int D_L24_0035D098[];
extern void GCS_FIRECRACKER_GetBuiltinMaterial__FP24GCS_FIRECRACKER_MaterialPC29GCS_FIRECRACKER_BuiltinConfig(void *, void *);
extern void GCS_FIRECRACKER_Register__FP33GCS_FIRECRACKER_SortedTrailTroupeP33GCS_FIRECRACKER_SortedTrailConfigPC24GCS_FIRECRACKER_Material(char *, int, void *);

void GCS_FIRECRACKER_Register__F36GCS_FIRECRACKER_SortedTrailBuiltinID(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (g_gcs_firecracker_sortedTrail[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_L24_0035D098 + param_1 * 0x24);
        v = *p;
        GCS_FIRECRACKER_GetBuiltinMaterial__FP24GCS_FIRECRACKER_MaterialPC29GCS_FIRECRACKER_BuiltinConfig(local, p);
        GCS_FIRECRACKER_Register__FP33GCS_FIRECRACKER_SortedTrailTroupeP33GCS_FIRECRACKER_SortedTrailConfigPC24GCS_FIRECRACKER_Material(g_gcs_firecracker_sortedTrail + param_1 * 0x34 + 4, v, local);
        g_gcs_firecracker_sortedTrail[param_1 * 0x34] = 1;
    }
}
