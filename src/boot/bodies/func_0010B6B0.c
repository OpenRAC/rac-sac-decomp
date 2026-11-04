/* func_0010B6B0 -- SCUS_976.23 0x0010B6B0, 216 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_0010B6B0 (Inverts an orthogonal 3x3 with 16-byte rows into a packed 3x3.)
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (divpad:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

void func_0010B6B0(float *a0, float *a1)
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
    float s0 = 1.0f / (m00 * m00 + m01 * m01 + m02 * m02);
    float s1 = 1.0f / (m10 * m10 + m11 * m11 + m12 * m12);
    float s2 = 1.0f / (m20 * m20 + m21 * m21 + m22 * m22);

    a0[0] = m00 * s0;
    a0[1] = m10 * s1;
    a0[2] = m20 * s2;
    a0[3] = m01 * s0;
    a0[4] = m11 * s1;
    a0[5] = m21 * s2;
    a0[6] = m02 * s0;
    a0[7] = m12 * s1;
    a0[8] = m22 * s2;
}
