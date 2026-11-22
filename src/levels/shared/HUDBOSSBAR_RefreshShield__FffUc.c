/* HUDBOSSBAR_RefreshShield__FffUc -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the shared reset, then stores the mode byte and the two float
 * parameters in globals.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_0B3438.c.
 */

extern int D_L01_0025CAB0;
extern float D_L01_0025CAC0;
extern float D_L01_0025CAC4;
extern unsigned int HUDBOSSBAR_IsShowing__Fv(void);

void HUDBOSSBAR_RefreshShield__FffUc(unsigned char mode, float a, float b)
{
    HUDBOSSBAR_IsShowing__Fv();
    D_L01_0025CAB0 = mode;
    D_L01_0025CAC0 = a;
    D_L01_0025CAC4 = b;
}
