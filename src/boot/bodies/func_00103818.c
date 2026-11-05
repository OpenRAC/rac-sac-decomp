/* func_00103818 -- SCUS_976.23 0x00103818, 8 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_00103818 (8 octets)
 *   jr $ra ; swc1 $f12, 0x40($a0)
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
    char pad[0x40];
    float field_40;
} BootObj_00103818;

void func_00103818(BootObj_00103818 *self, float value)
{
    self->field_40 = value;
}
