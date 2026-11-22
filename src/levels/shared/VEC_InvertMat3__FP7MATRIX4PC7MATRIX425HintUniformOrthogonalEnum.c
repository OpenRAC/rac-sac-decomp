/* VEC_InvertMat3__FP7MATRIX4PC7MATRIX425HintUniformOrthogonalEnum -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Normalises the first row of the caller's matrix by the inverse of its
 * squared length, then transposes the 3x3 part into the top left of the
 * caller's 4x4 output.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126628.c.
 */

void VEC_InvertMat3__FP7MATRIX4PC7MATRIX425HintUniformOrthogonalEnum(float *a0, float *a1)
{
    float m00 = a1[0];
    float m01 = a1[1];
    float m02 = a1[2];
    float m10 = a1[4];
    float m11 = a1[5];
    float m12 = a1[6];
    float m20 = a1[8];
    float m21 = a1[9];
    float m22 = a1[10];
    float s = 1.0f / (m00 * m00 + m01 * m01 + m02 * m02);

    a0[0] = m00 * s;
    a0[1] = m10 * s;
    a0[2] = m20 * s;
    a0[4] = m01 * s;
    a0[5] = m11 * s;
    a0[6] = m21 * s;
    a0[8] = m02 * s;
    a0[9] = m12 * s;
    a0[10] = m22 * s;
}
