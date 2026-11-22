/* MobyColor_FindData__FP4Moby -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_07A538.c.
 */

extern unsigned int D_L01_0026CDC4;
extern int D_L01_003B2D80[];

int *MobyColor_FindData__FP4Moby(int wanted)
{
    unsigned int index = 0;
    if (D_L01_0026CDC4 != 0) {
        int *item = D_L01_003B2D80;
        do {
            index++;
            if (*item == wanted) {
                return item;
            }
            item += 2;
        } while (index < D_L01_0026CDC4);
    }
    return 0;
}
