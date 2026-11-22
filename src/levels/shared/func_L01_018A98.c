/* func_L01_018A98 -- 412 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a buffer and accumulates results over three lists of scene entries.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_012F50.c.
 */

typedef struct {
    char pad0[0x1C];
    char *list3;
    int cnt3;
    char pad24[8];
    char *list2;
    unsigned int cnt2;
    char pad34[0x10];
    char *list1;
    int cnt1;
} Scene;

extern Scene *G_UberBOG;
extern void *memset(void *, int, unsigned int);
extern int MOBY_GetCollisionMotionBound__FP4VEC3T0PC4Moby(float *a, float *b, char *e);
extern int TIE_GetCollisionMotionBound__FP4VEC3T0PC3Tie(float *a, float *b, char *e);
extern int SHRUB_GetCollisionMotionBound__FP4VEC3T0PC5Shrub(float *a, float *b, char *e);
extern int WORLDGRID_AccumulateBounded__FP13WorldGridCellPC9WorldGridPC4VEC3T2Ui(void *buf, void *a, float *x, float *y, int n);

int func_L01_018A98(void *buf, void *a, int n)
{
    float v0[4];
    float v1[4];
    float v2[4];
    char *e;
    char *end;
    int total;
    int i;
    int cnt;
    int j;

    memset(buf, 0, n * 8);
    total = 0;
    e = G_UberBOG->list1;
    end = e + G_UberBOG->cnt1 * 0x80;
    for (; e != end; e += 0x80) {
        int r = MOBY_GetCollisionMotionBound__FP4VEC3T0PC4Moby(v0, v1, e);
        if (r)
            total += WORLDGRID_AccumulateBounded__FP13WorldGridCellPC9WorldGridPC4VEC3T2Ui(buf, a, v0, v1, r);
    }
    e = G_UberBOG->list2;
    for (i = 0; i < G_UberBOG->cnt2; i++) {
        if (TIE_GetCollisionMotionBound__FP4VEC3T0PC3Tie(v0, v2, e))
            total += WORLDGRID_AccumulateBounded__FP13WorldGridCellPC9WorldGridPC4VEC3T2Ui(buf, a, v0, v2, 1);
        e += 0x64 + ((unsigned char)e[0x62]) * 8;
    }
    cnt = G_UberBOG->cnt3;
    e = G_UberBOG->list3;
    for (j = 0; j != cnt; j++) {
        if (SHRUB_GetCollisionMotionBound__FP4VEC3T0PC5Shrub(v0, v1, e))
            total += WORLDGRID_AccumulateBounded__FP13WorldGridCellPC9WorldGridPC4VEC3T2Ui(buf, a, v0, v1, 1);
        e += 0x54 + ((unsigned char)e[0x51]) * 8;
    }
    return total;
}
