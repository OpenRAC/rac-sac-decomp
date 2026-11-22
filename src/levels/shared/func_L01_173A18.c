/* func_L01_173A18 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_114FB8.c.
 */

/* LEVEL_04:0x114FB8 / LEVEL_05:0x106560 -- fills a 2-float vector. */
void func_L01_173A18(float *vector, float x, float y)
{
    vector[0] = y;
    vector[1] = x;
}
