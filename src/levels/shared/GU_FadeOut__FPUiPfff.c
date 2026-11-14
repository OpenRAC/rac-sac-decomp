/* GU_FadeOut__FPUiPfff -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The fade value is stepped down by `step` and clamped to `limit`; the new
 * alpha is recomputed from it with the constant 254.9f and stored in the top
 * byte of the colour word. The function returns 1 when the fade has reached
 * the limit.
 *
 * The limit lives across the call to fptoui, so it is kept in a callee-saved
 * float register. The retail stores the stepped value first and only
 * overwrites it with the limit when the value went below it, so the
 * unconditional store sits in the delay slot of the conditional branch; that
 * is the form that reproduces the retail comparison and branch.
 */

extern unsigned int fptoui(float x);

unsigned long long GU_FadeOut__FPUiPfff(unsigned int *color, float *fade,
                                        float limit, float step)
{
    unsigned int u;
    int flag;
    float f;

    f = *fade - step;
    *fade = f;
    if (f < limit)
        *fade = limit;

    u = *color & 0x00FFFFFFu;
    u |= fptoui(*fade * 254.9f) << 24;
    *color = u;

    flag = (*fade == limit) ? 1 : 0;
    return flag;
}
