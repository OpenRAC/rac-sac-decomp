/* func_L01_181E20 -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_06E1E0.c.
 */

extern float fabsf(float value);

float func_L01_181E20(float position, float velocity, float bound,
                  float factor, float step)
{
    position = position + factor * velocity;
    bound = bound * fabsf(velocity);
    if (position < 0.0f) {
        bound = -bound;
        if (position < bound) {
            position = position + step;
            if (bound < position)
                position = bound;
        }
    } else if (bound < position) {
        position = position - step;
        if (position < bound)
            position = bound;
    }
    return position;
}
