/* FIRECRACKER_Emit__F28FIRECRACKER_NoSmokeBuiltinIDPC4VEC3 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0178.c.
 */

typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_L01_003B5B24[];
extern void FIRECRACKER_Emit__FP25FIRECRACKER_NoSmokeTroupePC4VEC3(void *entry, void *v);

void FIRECRACKER_Emit__F28FIRECRACKER_NoSmokeBuiltinIDPC4VEC3(unsigned int index, void *v) {
    FIRECRACKER_Emit__FP25FIRECRACKER_NoSmokeTroupePC4VEC3(&D_L01_003B5B24[index], v);
}
