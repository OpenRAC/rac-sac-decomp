/* SAC_BeginProfiling__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_035A10.c.
 */

extern void StartProfiling__11ApeProfilerQ211ApeProfiler9ETimeMode(int value);

void SAC_BeginProfiling__Fv(void) {
    StartProfiling__11ApeProfilerQ211ApeProfiler9ETimeMode(1);
}
