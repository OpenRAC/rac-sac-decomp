/* MobyColor_StopFlash__FP4Moby -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_079C18.c.
 */

extern unsigned int D_L01_0026CDC8;
extern int D_L01_003B2E00[];

void MobyColor_StopFlash__FP4Moby(int wanted)
{
    unsigned int index = 0;
    if (D_L01_0026CDC8 != 0) {
        int *item = D_L01_003B2E00;
        do {
            index++;
            if (*item == wanted) {
                item[5] = 3;
                return;
            }
            item += 6;
        } while (index < D_L01_0026CDC8);
    }
}
