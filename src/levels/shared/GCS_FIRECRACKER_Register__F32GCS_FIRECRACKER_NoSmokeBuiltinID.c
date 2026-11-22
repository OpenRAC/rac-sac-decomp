/* GCS_FIRECRACKER_Register__F32GCS_FIRECRACKER_NoSmokeBuiltinID -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0430.c.
 */

extern unsigned char g_gcs_firecracker_nosmoke[];
extern int D_L24_0035D018[];
extern void GCS_FIRECRACKER_GetBuiltinMaterial__FP24GCS_FIRECRACKER_MaterialPC29GCS_FIRECRACKER_BuiltinConfig(void *, void *);
extern void GCS_FIRECRACKER_Register__FP29GCS_FIRECRACKER_NoSmokeTroupeP29GCS_FIRECRACKER_NoSmokeConfigPC24GCS_FIRECRACKER_Material(char *, int, void *);

void GCS_FIRECRACKER_Register__F32GCS_FIRECRACKER_NoSmokeBuiltinID(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (g_gcs_firecracker_nosmoke[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_L24_0035D018 + param_1 * 0x24);
        v = *p;
        GCS_FIRECRACKER_GetBuiltinMaterial__FP24GCS_FIRECRACKER_MaterialPC29GCS_FIRECRACKER_BuiltinConfig(local, p);
        GCS_FIRECRACKER_Register__FP29GCS_FIRECRACKER_NoSmokeTroupeP29GCS_FIRECRACKER_NoSmokeConfigPC24GCS_FIRECRACKER_Material(g_gcs_firecracker_nosmoke + param_1 * 0x34 + 4, v, local);
        g_gcs_firecracker_nosmoke[param_1 * 0x34] = 1;
    }
}
