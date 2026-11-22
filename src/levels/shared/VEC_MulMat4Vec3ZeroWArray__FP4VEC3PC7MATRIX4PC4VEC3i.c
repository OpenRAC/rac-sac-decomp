/* VEC_MulMat4Vec3ZeroWArray__FP4VEC3PC7MATRIX4PC4VEC3i -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies the rows of a three-by-three matrix (kept with a four-float
 * stride) by the vectors of the caller, one row each.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_125DE0.c.
 */

void VEC_MulMat4Vec3ZeroWArray__FP4VEC3PC7MATRIX4PC4VEC3i(float *a0, float *a1, float *a2, int a3)
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
    if (a3 > 0) {
        do {
            float x = a2[0];
            float y = a2[1];
            float z = a2[2];
            a0[0] = x * m00 + y * m10 + z * m20;
            a0[1] = x * m01 + y * m11 + z * m21;
            a0[2] = x * m02 + y * m12 + z * m22;
            a2 += 3;
            a0 += 3;
            a3--;
        } while (a3);
    }
}
