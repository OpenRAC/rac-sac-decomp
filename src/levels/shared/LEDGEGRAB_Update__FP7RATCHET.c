/* LEDGEGRAB_Update__FP7RATCHET -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void LEDGEGRAB_UpdateSubstates__FP7RATCHET(void *value);
extern void LEDGEGRAB_ChangeSubstates__FP7RATCHET(void *value);

void LEDGEGRAB_Update__FP7RATCHET(void *value) {
    LEDGEGRAB_UpdateSubstates__FP7RATCHET(value);
    LEDGEGRAB_ChangeSubstates__FP7RATCHET(value);
}
