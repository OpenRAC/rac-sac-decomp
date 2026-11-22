/* VEC_InvertMat3__FP7MATRIX3PC7MATRIX425HintUniformOrthogonalEnum -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Normalises the first row of the caller's matrix by the inverse of its
 * length, then transposes the whole matrix into the caller's output array.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_132A18.c.
 */

void VEC_InvertMat3__FP7MATRIX3PC7MATRIX425HintUniformOrthogonalEnum(float *a0, float *a1)
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
    a0[3] = m01 * s;
    a0[4] = m11 * s;
    a0[5] = m21 * s;
    a0[6] = m02 * s;
    a0[7] = m12 * s;
    a0[8] = m22 * s;
}
