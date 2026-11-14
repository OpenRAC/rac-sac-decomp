/* func_0010BB80 -- 248 bytes.
 *
 * A function of the boot executable at 0x0010BB80; its placement is
 * listed in config/boot/bodies.tsv.
 */

void func_0010BB80(float *a0, float *a1)
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
    {
        float x0 = -a0[0];
        float x1 = -a0[1];
        float x2 = -a0[2];
        float t0 = a1[12];
        float t1 = a1[13];
        float t2 = a1[14];
        a0[12] = x0 * t0 - a0[4] * t1 - a0[8] * t2;
        a0[13] = x1 * t0 - a0[5] * t1 - a0[9] * t2;
        a0[14] = x2 * t0 - a0[6] * t1 - a0[10] * t2;
    }
}
