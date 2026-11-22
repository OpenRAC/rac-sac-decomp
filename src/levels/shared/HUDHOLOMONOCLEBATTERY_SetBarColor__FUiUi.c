/* HUDHOLOMONOCLEBATTERY_SetBarColor__FUiUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A5D20.c.
 */

extern int D_L01_0026A614;
extern int D_L01_0026A618;

void HUDHOLOMONOCLEBATTERY_SetBarColor__FUiUi(int first, int second)
{
    D_L01_0026A614 = first;
    D_L01_0026A618 = second;
}
