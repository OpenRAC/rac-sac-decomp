/* AttentionGetter_Reset__FP15AttentionGetterffff -- 240 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * 240-byte body, 9 placements. * * What it does: fills a six-float record from
 * four float arguments. Two of * the fields are random angles in [-pi, pi):
 * (float)rand() * 2^-31 * 2pi - pi. * The other four are the arguments
 * themselves, a half-sum and a half-difference. * * Where the form comes from:
 * * - the two random stores come first in the source, which keeps all four *
 * parameters live across the two calls and reproduces the seven * callee-saved
 * float saves of the retail frame (0x50); * - the retail keeps -pi as a
 * negative constant and adds it (add.s), so the * offset is written as "+
 * -3.1415927f"; * - the statement order that reproduces the retail's prologue
 * copies is * f0, f4, f8, fC, f10, f14 (swept over the 360 legal orders). * *
 * Proof: *** EXACT *** at LEVEL_01.REL:0x0EA9D8, profile gnu-ee-trial-divpad.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0EA9D8.c.
 */

typedef struct {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    float f14;
} Rec;

extern int rand(void);

void AttentionGetter_Reset__FP15AttentionGetterffff(Rec *p, float a, float b, float c, float d)
{
    p->f0 = (float)rand() * 0x1p-31f * 6.2831855f + -3.1415927f;
    p->f4 = a;
    p->f8 = (float)rand() * 0x1p-31f * 6.2831855f + -3.1415927f;
    p->fC = d;
    p->f10 = (c + b) * 0.5f;
    p->f14 = (c - b) * 0.5f;
}
