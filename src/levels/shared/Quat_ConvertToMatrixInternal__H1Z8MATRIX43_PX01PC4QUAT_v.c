/* Quat_ConvertToMatrixInternal__H1Z8MATRIX43_PX01PC4QUAT_v -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_06_119B10.c.
 */

/* Quaternion (x, y, z, w) -> 3x3 rotation matrix, column major.
   The nine products are kept in explicit locals: the retail code holds
   them in that form. */
void Quat_ConvertToMatrixInternal__H1Z8MATRIX43_PX01PC4QUAT_v(float *m, float *q)
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

    m[0] = 1.0f - 2.0f * (yy + zz);
    m[1] = 2.0f * (xy + zw);
    m[2] = 2.0f * (xz - yw);
    m[3] = 2.0f * (xy - zw);
    m[4] = 1.0f - 2.0f * (xx + zz);
    m[5] = 2.0f * (yz + xw);
    m[6] = 2.0f * (xz + yw);
    m[7] = 2.0f * (yz - xw);
    m[8] = 1.0f - 2.0f * (xx + yy);
}
