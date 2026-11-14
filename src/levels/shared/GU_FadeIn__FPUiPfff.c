/* GU_FadeIn__FPUiPfff -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sibling of GU_FadeOut: the fade value is stepped up by `step` and clamped to
 * `limit` from above. The new alpha is recomputed with the constant 254.9f and
 * stored in the top byte of the colour word, and the function returns 1 when
 * the fade has reached the limit.
 *
 * The retail stores the stepped value first and only overwrites it with the
 * limit when the value went past it, so the unconditional store sits in the
 * delay slot of the conditional branch.
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
