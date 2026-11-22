/* func_L01_0215E0 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Flushes the pending state when the mode allows it.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0220E0.c.
 */

int DYNAGRID_Enabled__Fv(void);
int func_L01_0212C0(void);

void func_L01_0215E0(void)
{
    if (DYNAGRID_Enabled__Fv())
        func_L01_0212C0();
}
