/* GCS_FIRECRACKER_Emit__F31GCS_FIRECRACKER_SortedBuiltinIDPC4VEC3T1f -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF930.c.
 */

typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_L24_003A541C[];
extern void GCS_FIRECRACKER_Emit__FP28GCS_FIRECRACKER_SortedTroupePC4VEC3T1f(Entry *entry, float *pos);

void GCS_FIRECRACKER_Emit__F31GCS_FIRECRACKER_SortedBuiltinIDPC4VEC3T1f(unsigned int index, float *pos) {
    GCS_FIRECRACKER_Emit__FP28GCS_FIRECRACKER_SortedTroupePC4VEC3T1f(&D_L24_003A541C[index], pos);
}
