/* func_L01_11AF60 -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks a global record list, moving a link word out of each record that lacks
 * a flag bit.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CD688.c.
 */

struct Obj3 {
    char pad0[0x6C];
    int w6C;
    char pad1[0x78 - 0x70];
    unsigned char b78;
};

extern int D_L01_003B18F4;
void func_L01_11A1A0(struct Obj3 *p);

void func_L01_11AF60(void)
{
    struct Obj3 *s0;
    int *link;
    int v;

    link = &D_L01_003B18F4;
    s0 = (struct Obj3 *)D_L01_003B18F4;
    if (s0 == 0) {
        return;
    }
    do {
        func_L01_11A1A0(s0);
        if ((s0->b78 & 2) != 0) {
            link = &s0->w6C;
        } else {
            v = s0->w6C;
            *link = v;
            s0->w6C = 0;
        }
        s0 = (struct Obj3 *)*link;
    } while (s0 != 0);
}
