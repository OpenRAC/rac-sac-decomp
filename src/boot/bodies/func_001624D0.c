/* func_001624D0 -- SCUS_976.23 0x001624D0, 12 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   func_001624D0 -- SCUS_976.23 0x001624D0, 12 bytes.
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

typedef struct {
    char pad[0x88];
    int f;
} Obj_001624D0;

int func_001624D0(Obj_001624D0 *self, int v)
{
    self->f = v;
    return 0;
}
