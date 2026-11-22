/* GU_FadeScaleAtEdges__FPfff -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_017028.c.
 */

void GU_FadeScaleAtEdges__FPfff(float *out, float a, float b)
{
    float t;

    if (b > 0.0f) {
        *out = 1.0f;
        if (a > 1.0f)
            a = 1.0f;
        if (a < b) {
            *out = a / b;
            return;
        }
        t = 1.0f - a;
        if (t < b)
            *out = t / b;
    } else {
        *out = 1.0f;
    }
}
