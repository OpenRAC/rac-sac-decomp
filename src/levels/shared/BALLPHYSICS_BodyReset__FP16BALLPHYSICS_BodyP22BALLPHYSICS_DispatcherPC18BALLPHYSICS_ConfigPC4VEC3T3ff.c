/* BALLPHYSICS_BodyReset__FP16BALLPHYSICS_BodyP22BALLPHYSICS_DispatcherPC18BALLPHYSICS_ConfigPC4VEC3T3ff -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_02E5D8.c.
 */

typedef struct {
    float x;
    float y;
    int z;
} Sample;

typedef struct {
    char flag0;
    char flag1;
    unsigned short count;
    Sample s1;
    Sample s2;
    float f1;
    float f2;
    float f3;
} Out;

typedef struct {
    char pad[0x28];
    unsigned short count;
} In;

typedef struct {
    float pad[11];
    float v2c;
    float pad2[8];
    float v50;
} Flt;

void BALLPHYSICS_BodyReset__FP16BALLPHYSICS_BodyP22BALLPHYSICS_DispatcherPC18BALLPHYSICS_ConfigPC4VEC3T3ff(Out *a0, In *a1, Flt *a2, Sample *a3, Sample *t0,
                 float f1, float f2)
{
    float d = a3->y * a2->v50;
    float e = a2->v2c;
    float h = 0.5f;
    unsigned short c;

    a0->flag0 = 0;
    a0->flag1 = 0;
    a0->f3 = h * ((e + d) + fabsf(d - e));
    c = a1->count;
    a1->count = c + 1;
    a0->count = c;
    a0->s1 = *a3;
    a0->s2 = *t0;
    a0->f1 = f1;
    a0->f2 = f2;
}
