/* MootatorSparkle_EmitParticle__FUiP22MootatorSparkle_ConfigP4VEC3T2Uii -- 292 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills batches of 60-byte records from two vectors and a source block.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1D41F8.c.
 */

typedef struct Vec3 { float x, y, z; } Vec3;

typedef struct Src {
    float f0, f4, f8, fC, f10, f14, f18;
} Src;

typedef struct Rec {
    Vec3 a;
    Vec3 b;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    int w2C;
    float f30;
    int w34;
    float f38;
} Rec;

extern Rec *PAR_Emit__FPiii(int *, void *, int);

void MootatorSparkle_EmitParticle__FUiP22MootatorSparkle_ConfigP4VEC3T2Uii(void *obj, Src *s, Vec3 *a, Vec3 *b, int tag, int total)
{
    int cnt;
    Rec *p;
    Rec *end;
    Rec *q;
    Vec3 *bp;

    while (total > 0) {
        p = PAR_Emit__FPiii(&cnt, obj, total);
        if (cnt == 0)
            break;
        end = p + cnt;
        for (q = p; q != end; q++) {
            q->a.x = a->x;
            q->a.y = a->y;
            q->a.z = a->z;
            bp = &q->b;
            bp->x = b->x;
            bp->y = b->y;
            bp->z = b->z;
            q->f20 = s->f8;
            q->f24 = s->fC;
            q->f28 = s->f10;
            q->f30 = s->f14;
            q->f38 = s->f18;
            q->f18 = s->f0;
            q->f1C = s->f4;
            q->w2C = tag;
            q->w34 = 0;
        }
        total -= cnt;
    }
}
