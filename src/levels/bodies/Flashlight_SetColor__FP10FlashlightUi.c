/* Flashlight_SetColor__FP10FlashlightUi -- LEVEL1.REL 0x00115918, 8 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Retail: jr $ra ; sw $a1, 0x74($a0)
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct Flashlight {
    char pad[0x74];
    unsigned int color;
} Flashlight;

void Flashlight_SetColor__FP10FlashlightUi(Flashlight *self, unsigned int v)
{
    self->color = v;
}
