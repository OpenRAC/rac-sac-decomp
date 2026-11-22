/* SCRN_NOSCREEN_Update__Fv -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C9340.c.
 */

extern int (*D_L01_00263698)(void);
extern void (*D_L01_0026369C)(void);

void SCRN_NOSCREEN_Update__Fv(void)
{
    if (D_L01_00263698() != 0)
        D_L01_0026369C();
}
