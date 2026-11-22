/* ACTOR_DestroyTroupe__FP12ACTOR_Troupe -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_09FB40.c.
 */

extern void ACTOR_ClearTroupe__FP12ACTOR_Troupe(void);

void ACTOR_DestroyTroupe__FP12ACTOR_Troupe(char *record)
{
    char *link;
    ACTOR_ClearTroupe__FP12ACTOR_Troupe();
    link = record + 0xc;
    *(char **)(link + 4) = link;
    *(char **)(record + 0xc) = link;
}
