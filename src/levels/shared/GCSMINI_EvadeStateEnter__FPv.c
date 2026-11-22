/* GCSMINI_EvadeStateEnter__FPv -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the actor: copies the speed from its record, creates the effect
 * handle with a short fade, zeroes it and stores it, and sets full scale.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_113A90.c.
 */

struct Q;

typedef struct Rec {
    char pad_00[0x9C];
    float speed;
} Rec;

typedef struct Obj {
    char pad_00[8];
    int f8;
    float fC;
    void *handle;
    char pad_14[0xFC];
    char q110[0x144];
    Rec *rec;
    char pad_258[0x74];
    float scale;
} Obj;

extern char *GCSENEMY_MotorBlendActive__FP14GCSENEMY_MotorPFP8MATRIX43P26GCSENEMY_MotorInstanceDataf_vf(struct Q *a0, int a1, float a2);
extern void GCSENEMY_RollMotorReset__FP30GCSENEMY_RollMotorInstanceDataf(float *p, float v);
extern void GCSENEMY_RollMotorUpdate__FP8MATRIX43P26GCSENEMY_MotorInstanceDataf(void);

void GCSMINI_EvadeStateEnter__FPv(Obj *object)
{
    char *handle;

    object->f8 = 0;
    object->fC = object->rec->speed;
    handle = GCSENEMY_MotorBlendActive__FP14GCSENEMY_MotorPFP8MATRIX43P26GCSENEMY_MotorInstanceDataf_vf((struct Q *)object->q110, (int)GCSENEMY_RollMotorUpdate__FP8MATRIX43P26GCSENEMY_MotorInstanceDataf, 0.095238097f);
    GCSENEMY_RollMotorReset__FP30GCSENEMY_RollMotorInstanceDataf((float *)handle, 0.0f);
    object->handle = handle;
    object->scale = 1.0f;
}
