/* func_001013B8 -- SCUS_976.23 0x001013B8, 32 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_001013B8 (32 octets)
 *   Cadre 0x10, sd/ld $ra. gnu-ee (sibcall off) ; sdk991111 emet un j.
 *   Appelle func_00101330(1, 0xFFFF).
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern void func_00101330(int first, unsigned int second);

void func_001013B8(void)
{
    func_00101330(1, 0xFFFFu);
}
