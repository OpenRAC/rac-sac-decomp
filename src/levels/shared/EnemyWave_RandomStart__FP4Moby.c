/* EnemyWave_RandomStart__FP4Moby -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_16F9D8.c.
 */

typedef struct {
    char pad0[0xC];
    float f0C;
    float f10;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x54 - 0x46];
    Rec *p54;
} Obj;

extern int rand(void);

void EnemyWave_RandomStart__FP4Moby(Obj *a0)
{
    Rec *p = a0->p54;
    float f;

    a0->b45 = 2;
    f = p->f10;
    p->f0C = f * ((float)rand() * 4.6566128730773926e-10f);
}
