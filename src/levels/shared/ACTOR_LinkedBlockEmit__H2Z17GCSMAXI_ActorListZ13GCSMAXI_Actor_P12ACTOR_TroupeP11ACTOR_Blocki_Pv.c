/* ACTOR_LinkedBlockEmit__H2Z17GCSMAXI_ActorListZ13GCSMAXI_Actor_P12ACTOR_TroupeP11ACTOR_Blocki_Pv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Moves the cursor node of a list to the next slot (relinks three words) and
 * counts the move; returns the node that was linked in.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0F09F0.c.
 */

int *ACTOR_LinkedBlockEmit__H2Z17GCSMAXI_ActorListZ13GCSMAXI_Actor_P12ACTOR_TroupeP11ACTOR_Blocki_Pv(void *self, int *list)
{
    int *cur = (int *)list[3];
    int *next = (int *)cur[1];
    int first = cur[0];
    int second = next[0];

    cur[1] = second;
    next[0] = first;
    cur[0] = (int)next;
    list[4] = list[4] + 1;
    return next;
}
