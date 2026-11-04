/* func_0010B890 -- SCUS_976.23 0x0010B890, 76 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_0010B890 (Transposes a 3x3 with 16-byte rows into a packed 3x3.)
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

void func_0010B890(float *a0, float *a1)
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
}
