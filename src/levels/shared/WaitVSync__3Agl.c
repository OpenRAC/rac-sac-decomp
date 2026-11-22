/* WaitVSync__3Agl -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0359F0.c.
 */

extern void sceGsSyncV(int value);

void WaitVSync__3Agl(void) {
    sceGsSyncV(0);
}
