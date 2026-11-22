/* IKLEG_RunFeedbackLoop__FP11IKLEG_Statef -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0292A8.c.
 */

typedef struct {
    char pad0[0x34];
    float v34;
    float v38;
    float v3C;
    float v40;
    float v44;
    float v48;
    char pad1[0x0C];
    float v58;
    float v5C;
    char pad2[0x24];
    float v84;
    float v88;
} T;

void IKLEG_RunFeedbackLoop__FP11IKLEG_Statef(T *a0, float k)
{
    float f0, f2, f3, g, h, w, u;

    f0 = a0->v5C * a0->v44 * k;
    f2 = a0->v58 + f0;
    f3 = a0->v34;

    a0->v58 = f2;
    if (f3 < f2) {
        a0->v58 = f3;
    } else {
        g = a0->v38;
        if (f2 < g) {
            a0->v58 = g;
        }
    }

    h = a0->v88 * a0->v48 * k;
    w = a0->v84 + h;
    u = a0->v3C;

    a0->v84 = w;
    if (u < w) {
        a0->v84 = u;
    } else {
        g = a0->v40;
        if (w < g) {
            a0->v84 = g;
        }
    }
}
