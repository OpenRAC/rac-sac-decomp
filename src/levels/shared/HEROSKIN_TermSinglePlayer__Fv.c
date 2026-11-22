/* HEROSKIN_TermSinglePlayer__Fv -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12A798.c.
 */

extern int D_FE_000F4D50;
extern void Unload__8ApeWorld(int);
void HEROSKIN_TermSinglePlayer__Fv(void)
{
    int value = D_FE_000F4D50;
    if (value != 0) {
        Unload__8ApeWorld(value);
        D_FE_000F4D50 = 0;
    }
}