/* SCRNCHEATS_Render__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0C4758.c.
 */

extern void SYSTEM_BeginFrame__Fb(int);
extern void SCRNCHEATS_Core_Render__Fv(void);
extern void SYSTEM_EndFrame__Fv(void);

void SCRNCHEATS_Render__Fv(void)
{
    SYSTEM_BeginFrame__Fb(1);
    SCRNCHEATS_Core_Render__Fv();
    SYSTEM_EndFrame__Fv();
}
