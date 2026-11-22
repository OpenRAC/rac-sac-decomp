/* HUDMEMCARD_Refresh__FUc -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B4D80.c.
 */

extern int HUDMEMCARD_IsShowing__Fv(void);
extern unsigned int D_FE_000FC7FC;

int HUDMEMCARD_Refresh__FUc(unsigned char value)
{
    int result = HUDMEMCARD_IsShowing__Fv();
    D_FE_000FC7FC = value;
    return result;
}
