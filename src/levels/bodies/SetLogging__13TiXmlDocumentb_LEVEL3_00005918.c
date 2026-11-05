/* SetLogging__13TiXmlDocumentb_LEVEL3_00005918 -- LEVEL3.REL 0x00005918, 12 bytes.
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

extern unsigned char g_logging;

void SetLogging__13TiXmlDocumentb(int logging)
{
    g_logging = logging;
}
