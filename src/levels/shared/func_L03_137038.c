/* func_L03_137038 -- 244 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the three pointer lists of an object and applies the matching visitor
 * to every entry.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_058E00.c.
 */

typedef struct {
    int *a[8];
    int na;
    int *b[16];
    int nb;
    int *c[32];
    int nc;
} Obj;

extern void GrindrailGate_SetCollisionFilter__FP4Mobyii(void);
extern void GrindrailSwitch_SetCollisionFilter__FP4Mobyii(void);
extern void GrindrailBomb_SetCollisionFilter__FP4Mobyii(void);

void func_L03_137038(Obj *o, int a1, int a2)
{
    int **p;
    int **q;
    int **r;
    int **e1;
    int **e2;
    int **e3;

    p = o->a;
    e1 = p + o->na;
    for (; p != e1; p++) {
        ((void (*)(int *, int, int))GrindrailGate_SetCollisionFilter__FP4Mobyii)(*p, a1, a2);
    }
    q = o->b;
    e2 = q + o->nb;
    for (; q != e2; q++) {
        ((void (*)(int *, int, int))GrindrailSwitch_SetCollisionFilter__FP4Mobyii)(*q, a1, a2);
    }
    r = o->c;
    e3 = r + o->nc;
    for (; r != e3; r++) {
        ((void (*)(int *, int, int))GrindrailBomb_SetCollisionFilter__FP4Mobyii)(*r, a1, a2);
    }
}
