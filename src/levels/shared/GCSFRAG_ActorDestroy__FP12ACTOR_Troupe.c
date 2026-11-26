/* GCSFRAG_ActorDestroy__FP12ACTOR_Troupe -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the per-item helper over every item of every group in the owner's list.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_036260.c.
 */

typedef struct Group {
    struct Group *next;
    char pad_04[8];
    char *items;
    int count;
} Group;

extern void GCSFRAG_Destroy__FP13GCSFRAG_Actor(void);

void GCSFRAG_ActorDestroy__FP12ACTOR_Troupe(char *owner)
{
    Group *group = *(Group **)(owner + 8);
    char *item;
    char *end;

    if (group != 0) {
        do {
            item = group->items;
            end = item + group->count * 0x84;
            do {
                ((void (*)(char *item))GCSFRAG_Destroy__FP13GCSFRAG_Actor)(item);
                item += 0x84;
            } while (item != end);
            group = group->next;
        } while (group != 0);
    }
}
