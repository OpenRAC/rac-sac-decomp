/* Line_EmitJoint__FP10Line_GroupPC10Line_Pointb -- 252 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs up to three list-driven callbacks for a node.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_108D80.c.
 */

typedef struct E { float a; float b; char pad[0xC]; } E;
typedef struct T { char pad[8]; E *e; unsigned short n0; unsigned short n1; } T;
typedef struct N { T *t; struct N *next; } N;
extern float *PAR_Emit__FPiP9PAR_Groupi(int *, N *, int);
extern void func_L01_173A18(float *, float, float);
extern void func_L01_173A28(float *, float, float *);
void Line_EmitJoint__FP10Line_GroupPC10Line_Pointb(N *n, float *p, int flag)
{
    int l0, l1, l2;
    float *r2;
    if (flag && n->next != n) {
        T *t = n->t;
        int k = t->n0 + t->n1 - 1;
        E *e = t->e + k;
        float a = e->a;
        float b = e->b;
        float *r0 = PAR_Emit__FPiP9PAR_Groupi(&l0, n, 1);
        float *r1;
        if (!l0)
            return;
        func_L01_173A18(r0, b, a);
        r1 = PAR_Emit__FPiP9PAR_Groupi(&l1, n, 1);
        if (!l1)
            return;
        func_L01_173A18(r1, *p, 1.0f);
    }
    r2 = PAR_Emit__FPiP9PAR_Groupi(&l2, n, 1);
    if (l2)
        func_L01_173A28(r2, 1.0f, p);
}
