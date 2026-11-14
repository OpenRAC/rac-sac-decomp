/* func_0010C778 -- 172 bytes.
 *
 * A function of the boot executable at 0x0010C778; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Transposes a 3x3 matrix stored with 16-byte rows into a packed destination
 * and transforms the translation (source word 12, destination word 9).
 */

/* 16-byte src, packed dest, t src[12] dest[9] */
void func_0010C778(float *a0, float *a1)
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

    a0[0] = m00;
    a0[1] = m10;
    a0[2] = m20;
    a0[3] = m01;
    a0[4] = m11;
    a0[5] = m21;
    a0[6] = m02;
    a0[7] = m12;
    a0[8] = m22;
    {
        float x0 = -a0[0];
        float x1 = -a0[1];
        float x2 = -a0[2];
        float t0 = a1[12];
        float t1 = a1[13];
        float t2 = a1[14];
        a0[9] = x0 * t0 - a0[3] * t1 - a0[6] * t2;
        a0[10] = x1 * t0 - a0[4] * t1 - a0[7] * t2;
        a0[11] = x2 * t0 - a0[5] * t1 - a0[8] * t2;
    }
}
