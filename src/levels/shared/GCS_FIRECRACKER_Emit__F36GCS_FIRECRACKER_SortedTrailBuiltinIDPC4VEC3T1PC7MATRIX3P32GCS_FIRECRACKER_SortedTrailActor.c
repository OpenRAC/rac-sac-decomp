/* GCS_FIRECRACKER_Emit__F36GCS_FIRECRACKER_SortedTrailBuiltinIDPC4VEC3T1PC7MATRIX3P32GCS_FIRECRACKER_SortedTrailActor -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0178.c.
 */

typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_L24_003A58FC[];
extern void GCS_FIRECRACKER_Emit__FP33GCS_FIRECRACKER_SortedTrailTroupePC4VEC3T1PC7MATRIX3P32GCS_FIRECRACKER_SortedTrailActor(void *entry, void *v);

void GCS_FIRECRACKER_Emit__F36GCS_FIRECRACKER_SortedTrailBuiltinIDPC4VEC3T1PC7MATRIX3P32GCS_FIRECRACKER_SortedTrailActor(unsigned int index, void *v) {
    GCS_FIRECRACKER_Emit__FP33GCS_FIRECRACKER_SortedTrailTroupePC4VEC3T1PC7MATRIX3P32GCS_FIRECRACKER_SortedTrailActor(&D_L24_003A58FC[index], v);
}
