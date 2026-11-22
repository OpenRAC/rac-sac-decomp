/* GU_FadeAlphaAtEdges__FPUiff -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clamps a ratio and packs it into the top byte of a word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_016F70.c.
 */

extern int fptoui(float f);

void GU_FadeAlphaAtEdges__FPUiff(unsigned int *o, float x, float y)
{
    int r;
    float ratio;

    if (0.0f < y) {
        if (1.0f < x) {
            x = 1.0f;
        }
        if (x < y) {
            ratio = x / y;
        } else {
            x = 1.0f - x;
            if (x < y) {
                ratio = x / y;
            } else {
                ratio = 1.0f;
            }
        }
        r = fptoui(ratio * 255.0f);
        *o = (*o & 0x00FFFFFFu) | (r << 24);
    } else {
        *o = *o | 0xFF000000u;
    }
}
