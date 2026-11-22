/* func_L01_12E400 -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_07F9B8.c.
 */

typedef struct {
    int f0;
    float f4;
} Sub;

typedef struct {
    char pad[0x14];
    int f14;
    Sub *f18;
} Sub2;

typedef struct {
    char pad[0x8];
    int f8;
    char pad2[0x24 - 0xC];
    Sub2 s24;
} Obj;

extern void func_L01_12E308(char *p0, char *p1, float f1);

void func_L01_12E400(Obj *self)
{
    Sub2 *s = &self->s24;

    func_L01_12E308((char *)self + 0xC, (char *)self + 0x28, s->f18->f4);
    s->f14 = 0;
    self->f8 = s->f18->f0;
}
