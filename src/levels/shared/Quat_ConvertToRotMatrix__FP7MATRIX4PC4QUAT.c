/* Quat_ConvertToRotMatrix__FP7MATRIX4PC4QUAT -- 200 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Quaternion (x, y, z, w) to a 4x4 row-major matrix.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_122F50.c.
 */

void Quat_ConvertToRotMatrix__FP7MATRIX4PC4QUAT(float *m, float *q)
{
    float x = q[0];
    float y = q[1];
    float z = q[2];
    float w = q[3];
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float xw = x * w;
    float yz = y * z;
    float yw = y * w;
    float zw = z * w;
    float n = 0.0f;

    m[0] = 1.0f - 2.0f * (yy + zz);
    m[1] = 2.0f * (xy + zw);
    m[2] = 2.0f * (xz - yw);
    m[11] = n;
    m[4] = 2.0f * (xy - zw);
    m[5] = 1.0f - 2.0f * (xx + zz);
    m[6] = 2.0f * (yz + xw);
    m[7] = n;
    m[8] = 2.0f * (xz + yw);
    m[9] = 2.0f * (yz - xw);
    m[10] = 1.0f - 2.0f * (xx + yy);
    m[3] = n;
}
