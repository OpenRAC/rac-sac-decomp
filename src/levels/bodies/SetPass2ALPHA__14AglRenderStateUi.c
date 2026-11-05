/* SetPass2ALPHA__14AglRenderStateUi -- FE.REL 0x000DDEA8, 8 bytes.
 *
 * Body translated from the retail module.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct AglRenderState AglRenderState;

struct AglRenderState
{
    char pad_00[0x16];
    unsigned short pass2alpha;
};

void SetPass2ALPHA__14AglRenderStateUi(AglRenderState *self, unsigned int value)
{
    self->pass2alpha = value;
}
