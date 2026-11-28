/* HUDTIMER_Refresh__FfUc -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a mode byte and the clamped (non-negative) value in the global block
 * and marks it set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/06_challax/LEVEL_06_0B0FB0.c.
 */

extern unsigned char D_L01_0025CCF8;
extern unsigned int D_L01_0025CC54;
extern float D_L01_0025CC5C;
extern unsigned int HUDTIMER_IsShowing__Fv(void);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void HUDTIMER_Refresh__FfUc(unsigned char mode, float value)
{
    float zero;

    HUDTIMER_IsShowing__Fv();
    D_L01_0025CC54 = mode;
    zero = 0.0f;
    D_L01_0025CC5C = *MaxPtr(&value, &zero);
    D_L01_0025CCF8 = 1;
}
