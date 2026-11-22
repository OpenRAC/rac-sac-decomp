/* func_L01_00A8D8 -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_001940.c.
 */

void func_L01_00A8D8(float *a0, float x, float y)
{
    if (x < 0.0f) {
        if (x < -y) {
            a0[0] = a0[0] - y;
        } else {
            a0[0] = a0[2];
        }
    } else {
        if (y < x) {
            a0[0] = a0[0] + y;
        } else {
            a0[0] = a0[2];
        }
    }
}
