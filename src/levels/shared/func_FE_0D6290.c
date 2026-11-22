/* func_FE_0D6290 -- 216 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Variant W: index based, goto setbest (single assignment).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_0246B0.c.
 */

struct Ent {
    unsigned int lo;
    unsigned int hi;
    unsigned int val;
};

int func_FE_0D6290(unsigned int key, struct Ent *tab)
{
    int best;
    int i;
    struct Ent *prev;

    if (tab != 0) {
        best = -1;
        i = 0;
        while (tab[i].lo != 0xFFFFFFFFu) {
            if (key >= tab[i].lo && key < tab[i].hi) {
                if (best == -1)
                    goto setbest;
                prev = &tab[best];
                if (prev->hi < tab[i].hi)
                    goto next;
                if (tab[i].lo < prev->lo)
                    goto next;
setbest:
                best = i;
            } else if (best >= 0) {
                if (key < tab[i].lo)
                    break;
            }
next:
            i++;
        }
        if (best != -1)
            return tab[best].val;
    }
    return 0;
}
