/* JET_EffectReset__FP10JET_EffectPC16JET_EffectConfigPC8MATRIX43PC4VEC3T3 -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards its arguments to two helpers, one of them on a sub-object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_13EB00.c.
 */

typedef struct {
    float x, y, z;
} V;

extern void VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3(float *a0, float *a1, float *a2);
extern void JET_ResetInternal__FP10JET_EffectPC16JET_EffectConfigPC4VEC3T2(char *a0, char *a1, int a2, V *a3);

void JET_EffectReset__FP10JET_EffectPC16JET_EffectConfigPC8MATRIX43PC4VEC3T3(char *a0, char *a1, float *a2, float *a3, V *a4)
{
    VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3((float *)(a0 + 0x30), a2, a3);
    JET_ResetInternal__FP10JET_EffectPC16JET_EffectConfigPC4VEC3T2(a0, a1, (int)a3, a4);
}
