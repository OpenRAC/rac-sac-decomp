/* CorrectEndianVoid__FPv -- LEVEL13.REL 0x00071570, 32 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Retail (32 bytes): take the address of the incoming pointer and
 *   pass it to the void specialisation of ApeEndianSwap.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (sdk991111-sdkas:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

extern void ApeEndianSwap__H1Zv_RPX01_v(void **p);

void CorrectEndianVoid__FPv(void *p)
{
    ApeEndianSwap__H1Zv_RPX01_v(&p);
}
