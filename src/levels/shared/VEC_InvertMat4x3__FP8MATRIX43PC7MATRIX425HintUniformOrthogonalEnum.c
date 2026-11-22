/* VEC_InvertMat4x3__FP8MATRIX43PC7MATRIX425HintUniformOrthogonalEnum -- 248 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds the inverse of a scaled rigid transform: the 3x3 part is transposed
 * and divided by the squared length of its first row, and the translation is
 * rotated back and negated.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126A00.c.
 */

void VEC_InvertMat4x3__FP8MATRIX43PC7MATRIX425HintUniformOrthogonalEnum(float *a0, float *a1)
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
    float t0;
    float t1;
    float t2;

    a0[0] = m00 * s;
    a0[1] = m10 * s;
    a0[2] = m20 * s;
    a0[3] = m01 * s;
    a0[4] = m11 * s;
    a0[5] = m21 * s;
    a0[6] = m02 * s;
    a0[7] = m12 * s;
    a0[8] = m22 * s;
    t0 = a1[12];
    t1 = a1[13];
    t2 = a1[14];
    a0[9] = (-(m00 * s) * t0 - m01 * s * t1) - m02 * s * t2;
    a0[10] = (-(m10 * s) * t0 - m11 * s * t1) - m12 * s * t2;
    a0[11] = (-(m20 * s) * t0 - m21 * s * t1) - m22 * s * t2;
}
