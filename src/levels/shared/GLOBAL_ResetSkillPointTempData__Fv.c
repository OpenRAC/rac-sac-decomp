/* GLOBAL_ResetSkillPointTempData__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_028928.c.
 */

extern char g_skillPointTempData[];
extern void *memset(void *, int, unsigned int);

void GLOBAL_ResetSkillPointTempData__Fv(void)
{
    memset(g_skillPointTempData, 0, 0x10);
}
