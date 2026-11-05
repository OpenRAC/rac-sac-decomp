/* GetTransientDataSize__5Punch -- LEVEL1.REL 0x0011E960, 8 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Retail: jr $ra ; addiu $v0, $zero, 0x2C
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

unsigned int GetTransientDataSize__5Punch(void)
{
    unsigned int size;

    size = 44;
    return size;
}
