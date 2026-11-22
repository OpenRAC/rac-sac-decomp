/* FIRECRACKER_Emit__F27FIRECRACKER_SortedBuiltinIDPC4VEC3 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF930.c.
 */

typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_L01_003B45A4[];
extern void FIRECRACKER_Emit__FP24FIRECRACKER_SortedTroupePC4VEC3(Entry *entry, float *pos);

void FIRECRACKER_Emit__F27FIRECRACKER_SortedBuiltinIDPC4VEC3(unsigned int index, float *pos) {
    FIRECRACKER_Emit__FP24FIRECRACKER_SortedTroupePC4VEC3(&D_L01_003B45A4[index], pos);
}
