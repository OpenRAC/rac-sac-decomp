/* SCRNCHEATS_Init__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Two calls in sequence.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01B898.c.
 */

void SCRNCHEATS_Init__Fv(void);
int HUDSOUND_Play__F9eHUDSOUND(int mode);

void SCRNCHEATS_Init__Fv(void)
{
    SCRNCHEATS_UpdateListData__Fv();
    HUDSOUND_Play__F9eHUDSOUND(6);
}
