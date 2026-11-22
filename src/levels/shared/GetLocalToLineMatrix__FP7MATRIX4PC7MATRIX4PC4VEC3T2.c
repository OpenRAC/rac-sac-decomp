/* GetLocalToLineMatrix__FP7MATRIX4PC7MATRIX4PC4VEC3T2 -- 180 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds two local transformed vectors from a pair of inputs and forwards them
 * to two helpers.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E2650.c.
 */

void VEC_LookAtUpLeft__FP4VEC3T0PC4VEC3(float *a0, float *a1, float *a2);
void VEC_InvertMat4x3__FP7MATRIX4PC7MATRIX419HintOrthonormalEnum(float *a0, float *a1, int a2);
void VEC_MultiplyMatrix4x3__FP7MATRIX4PC7MATRIX4T1(char *a0, char *a1, float *a2);

void GetLocalToLineMatrix__FP7MATRIX4PC7MATRIX4PC4VEC3T2(char *a0, char *a1, float *a2, float *a3)
{
    float m[16];
    float out[16];
    float *r2;

    VEC_LookAtUpLeft__FP4VEC3T0PC4VEC3(&m[0], &m[4], a3);
    r2 = &m[8];
    r2[0] = a3[0];
    r2[1] = a3[1];
    r2[2] = a3[2];
    m[12] = a2[0];
    m[13] = a2[1];
    m[14] = a2[2];
    VEC_InvertMat4x3__FP7MATRIX4PC7MATRIX419HintOrthonormalEnum(out, m, 0);
    VEC_MultiplyMatrix4x3__FP7MATRIX4PC7MATRIX4T1(a0, a1, out);
}
