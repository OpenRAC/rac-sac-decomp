/* func_L24_0BE038 -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F8130.c.
 */

extern void LWANIM_ContextDestroy__FP14LWANIM_Context(void *);

void func_L24_0BE038(char *item)
{
    LWANIM_ContextDestroy__FP14LWANIM_Context(item + 0x44);
}
