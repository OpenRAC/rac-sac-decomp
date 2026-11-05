/* func_00103648 -- SCUS_976.23 0x00103648, 28 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   SCUS_976.23 : func_00103648 (28 octets)
 *   self->y = self->y + scale * self->x ; rend self (daddu $v0,$a0).
 *   $f12 est le parametre, pas un 1.0f : mul.s $f12,$f12,$f1.
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
    float x;
    float y;
} BootState_00103648;

BootState_00103648 *func_00103648(BootState_00103648 *self, float scale)
{
    self->y = self->y + scale * self->x;
    return self;
}
