/* VEC_InverseMat4__FP7MATRIX4PC7MATRIX4 -- 2008 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Inverts a 4x4 float matrix by cofactor expansion; returns 0 when the
 * determinant is near zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/VEC_InverseMat4__FP7MATRIX4PC7MATRIX4.c.
 */

extern float fabsf(float x);

int VEC_InverseMat4__FP7MATRIX4PC7MATRIX4(float *dst, float *m)
{
    float t[12];
    float adj[16];
    float det;
    int j;

    t[0] = m[10] * m[15];
    t[1] = m[14] * m[11];
    t[2] = m[6] * m[15];
    t[3] = m[14] * m[7];
    t[4] = m[6] * m[11];
    t[5] = m[10] * m[7];
    t[6] = m[2] * m[15];
    t[7] = m[14] * m[3];
    t[8] = m[2] * m[11];
    t[9] = m[10] * m[3];
    t[10] = m[2] * m[7];
    t[11] = m[6] * m[3];

    adj[0] = t[0] * m[5] + t[3] * m[9] + t[4] * m[13];
    adj[0] -= t[1] * m[5] + t[2] * m[9] + t[5] * m[13];
    adj[1] = t[1] * m[1] + t[6] * m[9] + t[9] * m[13];
    adj[1] -= t[0] * m[1] + t[7] * m[9] + t[8] * m[13];
    adj[2] = t[2] * m[1] + t[7] * m[5] + t[10] * m[13];
    adj[2] -= t[3] * m[1] + t[6] * m[5] + t[11] * m[13];
    adj[3] = t[5] * m[1] + t[8] * m[5] + t[11] * m[9];
    adj[3] -= t[4] * m[1] + t[9] * m[5] + t[10] * m[9];
    adj[4] = t[1] * m[4] + t[2] * m[8] + t[5] * m[12];
    adj[4] -= t[0] * m[4] + t[3] * m[8] + t[4] * m[12];
    adj[5] = t[0] * m[0] + t[7] * m[8] + t[8] * m[12];
    adj[5] -= t[1] * m[0] + t[6] * m[8] + t[9] * m[12];
    adj[6] = t[3] * m[0] + t[6] * m[4] + t[11] * m[12];
    adj[6] -= t[2] * m[0] + t[7] * m[4] + t[10] * m[12];
    adj[7] = t[4] * m[0] + t[9] * m[4] + t[10] * m[8];
    adj[7] -= t[5] * m[0] + t[8] * m[4] + t[11] * m[8];

    t[0] = m[8] * m[13];
    t[1] = m[12] * m[9];
    t[2] = m[4] * m[13];
    t[3] = m[12] * m[5];
    t[4] = m[4] * m[9];
    t[5] = m[8] * m[5];
    t[6] = m[0] * m[13];
    t[7] = m[12] * m[1];
    t[8] = m[0] * m[9];
    t[9] = m[8] * m[1];
    t[10] = m[0] * m[5];
    t[11] = m[4] * m[1];

    adj[8] = t[0] * m[7] + t[3] * m[11] + t[4] * m[15];
    adj[8] -= t[1] * m[7] + t[2] * m[11] + t[5] * m[15];
    adj[9] = t[1] * m[3] + t[6] * m[11] + t[9] * m[15];
    adj[9] -= t[0] * m[3] + t[7] * m[11] + t[8] * m[15];
    adj[10] = t[2] * m[3] + t[7] * m[7] + t[10] * m[15];
    adj[10] -= t[3] * m[3] + t[6] * m[7] + t[11] * m[15];
    adj[11] = t[5] * m[3] + t[8] * m[7] + t[11] * m[11];
    adj[11] -= t[4] * m[3] + t[9] * m[7] + t[10] * m[11];
    adj[12] = t[2] * m[10] + t[5] * m[14] + t[1] * m[6];
    adj[12] -= t[4] * m[14] + t[0] * m[6] + t[3] * m[10];
    adj[13] = t[8] * m[14] + t[0] * m[2] + t[7] * m[10];
    adj[13] -= t[6] * m[10] + t[9] * m[14] + t[1] * m[2];
    adj[14] = t[6] * m[6] + t[11] * m[14] + t[3] * m[2];
    adj[14] -= t[10] * m[14] + t[2] * m[2] + t[7] * m[6];
    adj[15] = t[10] * m[10] + t[4] * m[2] + t[9] * m[6];
    adj[15] -= t[8] * m[6] + t[11] * m[10] + t[5] * m[2];

    det = m[0] * adj[0] + m[4] * adj[1] + m[8] * adj[2] + m[12] * adj[3];
    if (fabsf(det) < 1e-5f)
        return 0;
    det = 1.0f / det;
    for (j = 0; j < 16; j++)
        dst[j] = adj[j] * det;
    return 1;
}
