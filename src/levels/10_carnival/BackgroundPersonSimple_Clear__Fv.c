/* BackgroundPersonSimple_Clear__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_135AF0.c.
 */

extern char D_L10_003B6768[];
extern void ACTOR_ClearTroupe__FP12ACTOR_Troupe(void *);
extern void BackgroundPersonSimple_Reset__Fv(void);

void BackgroundPersonSimple_Clear__Fv(void)
{
    ACTOR_ClearTroupe__FP12ACTOR_Troupe(D_L10_003B6768);
    BackgroundPersonSimple_Reset__Fv();
}
