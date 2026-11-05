/* func_00103820 -- SCUS_976.23 0x00103820, 8 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_00103820 (8 octets)
 *   jr $ra ; lw $v0, 0x54($a0)
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct {
    char pad[0x54];
    int field_54;
} BootObj_00103820;

int func_00103820(BootObj_00103820 *self)
{
    return self->field_54;
}
