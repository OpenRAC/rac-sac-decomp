/* func_0010B4E8 -- 112 bytes.
 *
 * A function of the boot executable at 0x0010B4E8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Scales a packed 3x3 and transposes it.
 */

void func_0010B4E8(float *a0, float *a1, float s)
{
    float m00 = a1[0];
    float m01 = a1[1];
    float m02 = a1[2];
    float m10 = a1[3];
    float m11 = a1[4];
    float m12 = a1[5];
    float m20 = a1[6];
    float m21 = a1[7];
    float m22 = a1[8];

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
