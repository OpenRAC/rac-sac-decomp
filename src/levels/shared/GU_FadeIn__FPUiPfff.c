/* GU_FadeIn__FPUiPfff -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int fptoui(float x);

unsigned long long GU_FadeIn__FPUiPfff(unsigned int *color, float *fade,
                                       float limit, float step)
{
    unsigned int u;
    int flag;
    float f;

    f = *fade + step;
    *fade = f;
    if (limit < f)
        *fade = limit;

    u = *color & 0x00FFFFFFu;
    u |= fptoui(*fade * 254.9f) << 24;
    *color = u;

    flag = (*fade == limit) ? 1 : 0;
    return flag;
}
