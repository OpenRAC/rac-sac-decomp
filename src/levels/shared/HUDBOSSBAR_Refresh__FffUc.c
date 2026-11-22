/* HUDBOSSBAR_Refresh__FffUc -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Starts a new request: runs the shared reset, stores the mode byte and the
 * two float parameters in globals and raises the pending flag.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/07_dreamtime/LEVEL_07_0B4320.c.
 */

extern int D_L01_0025CAAC;
extern float D_L01_0025CAB8;
extern float D_L01_0025CABC;
extern char D_L01_0025CB60;
extern unsigned int HUDBOSSBAR_IsShowing__Fv(void);

void HUDBOSSBAR_Refresh__FffUc(unsigned char mode, float a, float b)
{
    HUDBOSSBAR_IsShowing__Fv();
    D_L01_0025CAAC = mode;
    D_L01_0025CAB8 = a;
    D_L01_0025CABC = b;
    D_L01_0025CB60 = 1;
}
