/* CAMERA_GetSinHalfFovX__Fv_LEVEL2_0000A4B0 -- LEVEL2.REL 0x0000A4B0, 12 bytes.
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

extern float g_sinHalfFovX;

float CAMERA_GetSinHalfFovX__Fv(void)
{
    return g_sinHalfFovX;
}
