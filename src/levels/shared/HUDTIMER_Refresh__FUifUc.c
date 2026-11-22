/* HUDTIMER_Refresh__FUifUc -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/06_challax/LEVEL_06_0B0F78.c.
 */

extern void HUDTIMER_Refresh__FfUc(unsigned char);
extern int D_L01_0025CC58;
extern unsigned char D_L01_0025CCF8;
void HUDTIMER_Refresh__FUifUc(int first, unsigned char second)
{
    HUDTIMER_Refresh__FfUc(second);
    D_L01_0025CC58 = first;
    D_L01_0025CCF8 = 0;
}
