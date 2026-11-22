/* LEVEL_DontRespawnMobyAfterCheckpoint__FP4Moby -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets one bit in a bitmap when a record field is nonzero, using two global
 * pointers.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/03_kalidon/LEVEL_03_019338.c.
 */

struct R19338 {
    char pad0[0x44];
    int f44;
};

struct G19338 {
    char pad0[0x10];
    unsigned int *f10;
};

struct P19338 {
    char pad0[0x5C];
    int f5C;
};

extern struct R19338 *G_UberBOG;
extern struct G19338 *D_L01_0024D44C;

void LEVEL_DontRespawnMobyAfterCheckpoint__FP4Moby(struct P19338 *p)
{
    struct R19338 *r;
    struct G19338 *g;
    unsigned int *bm;
    int s;

    if (p->f5C != 0) {
        r = G_UberBOG;
        g = D_L01_0024D44C;
        s = ((int)p - r->f44) >> 7;
        bm = g->f10;
        bm[(unsigned int)s >> 5] |= 1 << (s & 31);
    }
}
