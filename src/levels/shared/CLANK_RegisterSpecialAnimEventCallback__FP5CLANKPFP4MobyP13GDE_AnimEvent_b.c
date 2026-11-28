/* CLANK_RegisterSpecialAnimEventCallback -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern void *g_clank_special_anim_cb;

void CLANK_RegisterSpecialAnimEventCallback__FP5CLANKPFP4MobyP13GDE_AnimEvent_b(
    void *clank, void *cb)
{
    (void)clank;
    g_clank_special_anim_cb = cb;
}
