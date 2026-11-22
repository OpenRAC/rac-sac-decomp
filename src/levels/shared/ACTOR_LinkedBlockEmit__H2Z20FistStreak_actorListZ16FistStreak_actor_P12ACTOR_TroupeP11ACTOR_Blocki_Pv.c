/* ACTOR_LinkedBlockEmit__H2Z20FistStreak_actorListZ16FistStreak_actor_P12ACTOR_TroupeP11ACTOR_Blocki_Pv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rotates the cursor node of a list to the following slot (relinks three
 * words), counts the move and returns the node.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_2033E8.c.
 */

int *ACTOR_LinkedBlockEmit__H2Z20FistStreak_actorListZ16FistStreak_actor_P12ACTOR_TroupeP11ACTOR_Blocki_Pv(void *self, int *list)
{
    int *cur = (int *)list[3];
    int *next = (int *)cur[1];
    int first = cur[0];
    int second = next[18];

    cur[1] = second;
    next[18] = first;
    cur[0] = (int)next;
    list[4] = list[4] + 1;
    return next;
}
