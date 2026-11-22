/* Initialize__14ApeLightSetMgr -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_035A10.c.
 */

extern void SetEnableAutoRegister__14ApeLightSetMgrb(int value);

void Initialize__14ApeLightSetMgr(void) {
    SetEnableAutoRegister__14ApeLightSetMgrb(1);
}
