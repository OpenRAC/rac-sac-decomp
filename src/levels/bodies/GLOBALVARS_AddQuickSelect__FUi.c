/* GLOBALVARS_AddQuickSelect__FUi -- FE.REL 0x009360, 8 bytes.
 *
 * Returns 0: no quick-select slot is added.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 */

unsigned int GLOBALVARS_AddQuickSelect(void)
{
    return 0;
}
