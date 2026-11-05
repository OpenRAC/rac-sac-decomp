/* func_001022C0 -- SCUS_976.23 0x001022C0, 16 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_001022C0 (16 octets)
 *   lwc1 global 0x001AAC1C ; jr $ra ; swc1 0($a0)
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern float g_boot_001AAC1C;

void func_001022C0(float *out)
{
    *out = g_boot_001AAC1C;
}
