/* GCS_FIRECRACKER_Init__Fv -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs four index loops over local helper functions.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_115C38.c.
 */

extern void GCS_FIRECRACKER_Register__F31GCS_FIRECRACKER_SortedBuiltinID(int i);
extern void GCS_FIRECRACKER_Register__F32GCS_FIRECRACKER_NoSmokeBuiltinID(int i);
extern void GCS_FIRECRACKER_Register__F31GCS_FIRECRACKER_SplashBuiltinID(int i);
extern void GCS_FIRECRACKER_Register__F36GCS_FIRECRACKER_SortedTrailBuiltinID(int i);

void GCS_FIRECRACKER_Init__Fv(void) {
    int i;

    for (i = 0; i < 12; i++) {
        GCS_FIRECRACKER_Register__F31GCS_FIRECRACKER_SortedBuiltinID(i);
    }
    i = 0;
    do {
        GCS_FIRECRACKER_Register__F32GCS_FIRECRACKER_NoSmokeBuiltinID(i);
        i++;
    } while (i <= 0);
    for (i = 0; i < 3; i++) {
        GCS_FIRECRACKER_Register__F31GCS_FIRECRACKER_SplashBuiltinID(i);
    }
    for (i = 0; i < 7; i++) {
        GCS_FIRECRACKER_Register__F36GCS_FIRECRACKER_SortedTrailBuiltinID(i);
    }
}
