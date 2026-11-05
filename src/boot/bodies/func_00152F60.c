/* func_00152F60 -- SCUS_976.23 0x00152F60, 12 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   func_00152F60 -- SCUS_976.23 0x00152F60, 12 bytes.
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
    char pad[0x20];
    int f;
} Obj_00152F60;

int func_00152F60(Obj_00152F60 *self, int v)
{
    self->f = v;
    return 0;
}
