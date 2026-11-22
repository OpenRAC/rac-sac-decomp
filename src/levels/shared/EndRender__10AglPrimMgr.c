/* EndRender__10AglPrimMgr -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B43A8.c.
 */

extern void *D_FE_002567B0;
extern void EndRender__14AglPrimCmndBuf(void *value);

void EndRender__10AglPrimMgr(void) {
    EndRender__14AglPrimCmndBuf(D_FE_002567B0);
}
