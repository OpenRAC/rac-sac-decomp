/* FE_008090 -- FE.REL 0x008090, 32 bytes.
 *
 * Unnamed thunk: calls the shared helper with the argument pair (4, 0).
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 */

extern void func_007810(int a, int b);

void func_008090(void)
{
    func_007810(4, 0);
}
