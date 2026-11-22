/* GCS_FIRECRACKER_Register__F31GCS_FIRECRACKER_SortedBuiltinID -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF748.c.
 */

extern unsigned char g_gcs_firecracker_sorted[];
extern int D_L24_0035CE68[];
extern char D_L24_0025C660[];
extern char D_L24_0025C688[];
extern void GCS_FIRECRACKER_GetBuiltinMaterial__FP24GCS_FIRECRACKER_MaterialPC29GCS_FIRECRACKER_BuiltinConfig(void *dst, void *src);
extern void GCS_FIRECRACKER_Register__FP28GCS_FIRECRACKER_SortedTroupeP28GCS_FIRECRACKER_SortedConfigPC24GCS_FIRECRACKER_MaterialPC10ACTOR_Type(void *dst, int value, void *buf, void *table);

void GCS_FIRECRACKER_Register__F31GCS_FIRECRACKER_SortedBuiltinID(int index)
{
    int offset = index * 100;

    if (g_gcs_firecracker_sorted[offset] == 0) {
        char buf[16];
        int value = D_L24_0035CE68[index * 9];

        GCS_FIRECRACKER_GetBuiltinMaterial__FP24GCS_FIRECRACKER_MaterialPC29GCS_FIRECRACKER_BuiltinConfig(buf, &D_L24_0035CE68[index * 9]);
        GCS_FIRECRACKER_Register__FP28GCS_FIRECRACKER_SortedTroupeP28GCS_FIRECRACKER_SortedConfigPC24GCS_FIRECRACKER_MaterialPC10ACTOR_Type(g_gcs_firecracker_sorted + offset + 4, value, buf, D_L24_0025C660);
        GCS_FIRECRACKER_Register__FP28GCS_FIRECRACKER_SortedTroupeP28GCS_FIRECRACKER_SortedConfigPC24GCS_FIRECRACKER_MaterialPC10ACTOR_Type(g_gcs_firecracker_sorted + offset + 0x34, value, buf, D_L24_0025C688);
        g_gcs_firecracker_sorted[offset] = 1;
    }
}
