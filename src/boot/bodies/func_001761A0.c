/* func_001761A0 -- SCUS_976.23 0x001761A0, 12 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   func_001761A0 -- SCUS_976.23 0x001761A0, 12 bytes.
 *   Body translated from the boot executable.
 *   Placement: virtual address in the boot executable; the other
 *   placements of the same body are listed in config/boot/bodies.tsv.
 *   Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 *   retail bytes of that placement, byte for byte.  The program-level
 *   gate is still pending, so the body is proved, not promoted.
 *   The layout of the structures is the one this body reads; it is not
 *   confirmed by the data of the disc yet.
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern int g_001CD7D8;

void func_001761A0(void)
{
    g_001CD7D8 = 0;
}
