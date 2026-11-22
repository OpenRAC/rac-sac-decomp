/* FIRECRACKER_Emit__F32FIRECRACKER_SortedTrailBuiltinIDPC4VEC3T1PC7MATRIX3P28FIRECRACKER_SortedTrailActor -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0178.c.
 */

typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_L01_003B5D2C[];
extern void FIRECRACKER_Emit__FP29FIRECRACKER_SortedTrailTroupePC4VEC3T1PC7MATRIX3P28FIRECRACKER_SortedTrailActor(void *entry, void *v);

void FIRECRACKER_Emit__F32FIRECRACKER_SortedTrailBuiltinIDPC4VEC3T1PC7MATRIX3P28FIRECRACKER_SortedTrailActor(unsigned int index, void *v) {
    FIRECRACKER_Emit__FP29FIRECRACKER_SortedTrailTroupePC4VEC3T1PC7MATRIX3P28FIRECRACKER_SortedTrailActor(&D_L01_003B5D2C[index], v);
}
