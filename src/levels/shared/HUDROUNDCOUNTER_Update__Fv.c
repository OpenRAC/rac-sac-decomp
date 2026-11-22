/* HUDROUNDCOUNTER_Update__Fv -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0B8B30.c.
 */

extern int D_L01_0025CC30;
extern int D_L01_0025CC40;

void HUDROUNDCOUNTER_Update__Fv(void)
{
    int *v;
    int value;

    if (D_L01_0025CC30 != 0) {
        D_L01_0025CC30--;
    }
    v = &D_L01_0025CC40;
    if (D_L01_0025CC30 == 0) {
        value = D_L01_0025CC40 - 8;
    } else {
        value = D_L01_0025CC40 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_L01_0025CC40 > hi) {
            D_L01_0025CC40 = hi;
        }
    }
    if (D_L01_0025CC40 < 0) {
        D_L01_0025CC40 = 0;
    }
}
