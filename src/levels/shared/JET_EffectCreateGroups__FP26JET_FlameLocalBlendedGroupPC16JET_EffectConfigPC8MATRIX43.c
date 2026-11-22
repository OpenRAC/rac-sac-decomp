/* JET_EffectCreateGroups__FP26JET_FlameLocalBlendedGroupPC16JET_EffectConfigPC8MATRIX43 -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks two 24-byte slots, calling a helper with each slot and a table word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1E8F08.c.
 */

struct A1E8F08 {
    char pad0[0x18];
};

struct E1E8F08 {
    int f00;
    char pad04[0x78];
};

struct B1E8F08 {
    char pad0[0x120];
    struct E1E8F08 e[1];
};

extern void JET_FlameLocalCreateGroup__FP26JET_FlameLocalBlendedGroupiPC8MATRIX43(struct A1E8F08 *p, long long v, int c);

void JET_EffectCreateGroups__FP26JET_FlameLocalBlendedGroupPC16JET_EffectConfigPC8MATRIX43(struct A1E8F08 *p, struct B1E8F08 *b, int c)
{
    int cur;
    int end;
    struct E1E8F08 *q;

    cur = (int)p;
    end = cur + 0x30;
    q = b->e;
    do {
        JET_FlameLocalCreateGroup__FP26JET_FlameLocalBlendedGroupiPC8MATRIX43((struct A1E8F08 *)cur, q->f00, c);
        cur += 0x18;
        q++;
    } while (cur < end);
}
