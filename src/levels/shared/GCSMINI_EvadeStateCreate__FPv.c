/* GCSMINI_EvadeStateCreate__FPv -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the object's scale to 1 and transforms the owner's offset vector into
 * the object's position with the shared matrix.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_113A58.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern float D_L24_003A3078[];
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(V3 *out, float *m, V3 *v);

void GCSMINI_EvadeStateCreate__FPv(char *obj)
{
    *(float *)(obj + 0x78) = 1.0f;
    VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3((V3 *)(obj + 0x6C), D_L24_003A3078, (V3 *)(*(char **)(obj + 0x254) + 0xAC));
}
