/* KABOOM_Emit__F22KABOOM_SortedBuiltinIDPC4VEC3 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EF930.c.
 */

typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_L01_003B327C[];
extern void KABOOM_Emit__FP19KABOOM_SortedTroupePC4VEC3(Entry *entry, float *pos);

void KABOOM_Emit__F22KABOOM_SortedBuiltinIDPC4VEC3(unsigned int index, float *pos) {
    KABOOM_Emit__FP19KABOOM_SortedTroupePC4VEC3(&D_L01_003B327C[index], pos);
}
