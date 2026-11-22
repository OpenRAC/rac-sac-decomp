/* HUDATTACKCHARGEBAR_Update__Fv -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Steps a countdown and a byte counter, then clamps a signed level value to
 * 0..255.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_0B6EC8.c.
 */

extern int D_L01_0025CA90;
extern unsigned char D_L01_0025CAA9;
extern int D_L01_0025CA9C;

static inline void WrapByte(unsigned char *p, unsigned int limit)
{
    *p = *p + 1;
    if (*p > limit) {
        *p = 0;
    }
}

static inline void ClampInt(int *p, int max)
{
    if (*p > max) {
        *p = max;
    }
    if (*p < 0) {
        *p = 0;
    }
}

void HUDATTACKCHARGEBAR_Update__Fv(void)
{
    int *p;
    int v;

    if (D_L01_0025CA90 != 0) {
        D_L01_0025CA90--;
    }
    WrapByte(&D_L01_0025CAA9, 24);
    p = &D_L01_0025CA9C;
    if (D_L01_0025CA90 == 0) {
        v = D_L01_0025CA9C - 8;
    } else {
        v = D_L01_0025CA9C + 8;
    }
    *p = v;
    ClampInt(&D_L01_0025CA9C, 255);
}
