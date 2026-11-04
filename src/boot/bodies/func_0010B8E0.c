/* func_0010B8E0 -- SCUS_976.23 0x0010B8E0, 356 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_0010B8E0 (Inverts a 3x3 with 16-byte rows and transforms the translation.)
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (divpad:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

void func_0010B8E0(float *a0, float *a1)
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
    float c00 = m22 * m11 - m12 * m21;
    float c10 = m02 * m21 - m22 * m01;
    float c20 = m12 * m01 - m02 * m11;
    float c01 = m12 * m20 - m22 * m10;
    float c11 = m22 * m00 - m02 * m20;
    float c21 = m02 * m10 - m12 * m00;
    float c02 = m10 * m21 - m20 * m11;
    float c12 = m20 * m01 - m00 * m21;
    float c22 = m00 * m11 - m10 * m01;
    float s = 1.0f / (m00 * c00 + m10 * c10 + m20 * c20);

    a0[0] = c00 * s;
    a0[1] = c10 * s;
    a0[2] = c20 * s;
    a0[4] = c01 * s;
    a0[5] = c11 * s;
    a0[6] = c21 * s;
    a0[8] = c02 * s;
    a0[9] = c12 * s;
    a0[10] = c22 * s;
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
