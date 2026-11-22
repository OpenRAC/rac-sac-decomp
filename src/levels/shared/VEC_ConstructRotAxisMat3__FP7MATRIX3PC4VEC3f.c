/* VEC_ConstructRotAxisMat3__FP7MATRIX3PC4VEC3f -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls the helper with the three floats of the caller's vector and the
 * caller's float argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E9A40.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern void VEC_ConstructRotAxisMat3__FP7MATRIX3ffff(float a0, float a1, float a2, float a3);

void VEC_ConstructRotAxisMat3__FP7MATRIX3PC4VEC3f(int a0, V3 *a1, float a2)
{
    VEC_ConstructRotAxisMat3__FP7MATRIX3ffff(a1->f_00, a1->f_04, a1->f_08, a2);
}
