/* HUDELEMEXAMPLE_Refresh__FUc -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B4D80.c.
 */

extern int HUDELEMEXAMPLE_IsShowing__Fv(void);
extern unsigned int D_L01_0025CB6C;

int HUDELEMEXAMPLE_Refresh__FUc(unsigned char value)
{
    int result = HUDELEMEXAMPLE_IsShowing__Fv();
    D_L01_0025CB6C = value;
    return result;
}
