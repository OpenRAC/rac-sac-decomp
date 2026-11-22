/* EnemyController_MoveAway__FP21EnemyCtrlr_UpdateDataff -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds a sample to a running average held in a record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_16F1C8.c.
 */

typedef struct {
    char pad0[8];
    float a;
    float b;
    char pad10[9];
    unsigned char flag;
} Rec;

typedef struct {
    Rec *rec;
    char pad4[0x14];
    unsigned int count;
} Avg;

static inline void Scale2(float *p, float k)
{
    p[0] *= k;
    p[1] *= k;
}

void EnemyController_MoveAway__FP21EnemyCtrlr_UpdateDataff(Avg *m, float x, float y)
{
    float k;

    k = (float)m->count;
    Scale2(&m->rec->a, k);
    m->rec->a += x;
    m->rec->b += y;
    m->count++;
    Scale2(&m->rec->a, 1.0f / (float)m->count);
    m->rec->flag = 1;
}
