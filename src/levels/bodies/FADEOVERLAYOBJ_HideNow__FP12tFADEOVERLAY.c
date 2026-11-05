/* FADEOVERLAYOBJ_HideNow__FP12tFADEOVERLAY -- FE.REL 0x000277E8, 12 bytes.
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

typedef struct tFADEOVERLAY {
    int pad0;
    int pad4;
    int f8;
    int padC;
    int f10;
} tFADEOVERLAY;

void FADEOVERLAYOBJ_HideNow__FP12tFADEOVERLAY(tFADEOVERLAY *self)
{
    /* f8 then f10: Haifa emits last-use first, dbr puts f8 in the delay slot. */
    self->f8 = 0;
    self->f10 = 0;
}
