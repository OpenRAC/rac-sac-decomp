/* func_L03_146A58 -- 248 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Evaluates one mode of a parameter blend and writes the result to the
 * selected output.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_06FDA8.c.
 */

struct Src {
    char pad[0x2B];
    unsigned char c;
};
struct Owner {
    char pad[0x20];
    struct Src *src;
};
struct Param {
    float v0;
    float v1;
    float t;
    char pad[0x18];
    unsigned char type;
};

void func_L03_146A58(struct Owner *o, struct Param *p, float *outA, float *outB, int *outI)
{
    float f2 = 0.0f;
    float f3 = 0.0f;
    float *dst = 0;
    struct Src *s = o->src;
    unsigned char type = p->type;

    if (type == 2) {
        return;
    } else if (type == 0) {
        dst = outB;
        f2 = p->v0;
        f3 = p->v1;
    } else if (type == 1) {
        dst = outA;
        f2 = p->v1;
        f3 = p->v0;
    } else if (type == 5) {
        *outI = (int)((float)s->c * p->t);
    } else if (type == 6) {
        *outI = (int)((float)(-s->c) * p->t) + s->c;
    } else if (type == 3) {
        dst = outA;
        f2 = p->v0;
        f3 = p->v1;
    } else if (type == 4) {
        f2 = p->v1;
        dst = outB;
        f3 = p->v0;
    }
    if (dst != 0)
        *dst = (f3 - f2) * p->t + f2;
}
