/* func_001036B0 -- SCUS_976.23 0x001036B0, 20 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_001036B0 (20 octets)
 *   ((a - 1) + b) & (-b). La negation de b est un local AVANT la somme,
 *   sinon GCC reassocie en a + (b - 1).
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

int func_001036B0(int a, int b)
{
    int r = a - 1;
    int n = -b;

    return (r + b) & n;
}
