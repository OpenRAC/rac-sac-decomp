/* HUDTIMERBAR_Update__Fv -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0B8B30.c.
 */

extern int D_L01_0025CCFC;
extern int D_L01_0025CD04;

void HUDTIMERBAR_Update__Fv(void)
{
    int *v;
    int value;

    if (D_L01_0025CCFC != 0) {
        D_L01_0025CCFC--;
    }
    v = &D_L01_0025CD04;
    if (D_L01_0025CCFC == 0) {
        value = D_L01_0025CD04 - 8;
    } else {
        value = D_L01_0025CD04 + 8;
    }
    *v = value;
    {
        int hi = 0xFF;
        if (D_L01_0025CD04 > hi) {
            D_L01_0025CD04 = hi;
        }
    }
    if (D_L01_0025CD04 < 0) {
        D_L01_0025CD04 = 0;
    }
}
