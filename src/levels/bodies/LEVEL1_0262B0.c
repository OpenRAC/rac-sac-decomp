/* LEVEL1_0262B0 -- LEVEL1.REL 0x0262B0, 32 bytes.
 *
 * Unnamed wrapper: asks the game-mode layer for mode 4.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 */

extern void func_025E60(int mode, void *arg);

void func_0262B0(void)
{
    func_025E60(4, (void *)0);
}
