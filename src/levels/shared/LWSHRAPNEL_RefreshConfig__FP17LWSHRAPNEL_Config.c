/* LWSHRAPNEL_RefreshConfig__FP17LWSHRAPNEL_Config -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_036380.c.
 */

extern void BALLPHYSICS_RefreshConfig__FP18BALLPHYSICS_Config(void *);

void LWSHRAPNEL_RefreshConfig__FP17LWSHRAPNEL_Config(char *item)
{
    BALLPHYSICS_RefreshConfig__FP18BALLPHYSICS_Config(item + 0x28);
}
