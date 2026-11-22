/* func_L01_00B348 -- 164 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_0023B0.c.
 */

float func_L01_00B348(float value, float delta, float step, float min, float max)
{
    float table[4];
    float *sel;
    float *hi;

    table[1] = min;
    table[2] = max;
    if (delta != 0.0f) {
        if (delta * value < 0.0f)
            value = -value;
        table[0] = value + delta;
        sel = &table[1];
        hi = &table[2];
        if (!(table[0] < min)) {
            if (table[0] > max)
                sel = hi;
            else
                sel = &table[0];
        }
        value = *sel;
    } else {
        if (value < 0.0f) {
            value += step;
            if (value > 0.0f)
                value = 0.0f;
        } else {
            value -= step;
            if (value < 0.0f)
                value = 0.0f;
        }
    }
    return value;
}
