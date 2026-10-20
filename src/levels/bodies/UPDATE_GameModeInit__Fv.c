/* UPDATE_GameModeInit__Fv -- LEVEL1.REL 0x025E18, 32 bytes.
 *
 * Asks the game-mode layer for the initialisation (mode 1).
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 */

extern void func_025E60(int mode, void *arg);

void UPDATE_GameModeInit__Fv(void)
{
    func_025E60(1, (void *)0);
}
