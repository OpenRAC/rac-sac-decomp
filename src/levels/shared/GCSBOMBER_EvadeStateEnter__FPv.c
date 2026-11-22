/* GCSBOMBER_EvadeStateEnter__FPv -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Pushes a default entry into the object's three-slot ring, hooks the returned
 * entry up to the linked record and starts it at full scale.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_103420.c.
 */

struct Q;

typedef struct {
    char pad0[8];
    int w8;
    char *handle;
    char padF0[0xF4 - 0x10];
    char ring[0x23C - 0xF4];
    char *link;
    char pad240[0x454 - 0x240];
    float scale;
} Obj;

extern char GCSENEMY_BankMotorUpdate__FP8MATRIX43P26GCSENEMY_MotorInstanceDataf[];

extern char *GCSENEMY_MotorBlendActive__FP14GCSENEMY_MotorPFP8MATRIX43P26GCSENEMY_MotorInstanceDataf_vf(struct Q *a0, int a1, float a2);
extern void GCSENEMY_BankMotorReset__FP30GCSENEMY_BankMotorInstanceDataPC24GCSENEMY_BankMotorConfig(char *handle, char *target);

void GCSBOMBER_EvadeStateEnter__FPv(Obj *o)
{
    char *h;
    char *link;

    o->w8 = 0;
    link = o->link;
    h = GCSENEMY_MotorBlendActive__FP14GCSENEMY_MotorPFP8MATRIX43P26GCSENEMY_MotorInstanceDataf_vf((struct Q *)o->ring, (int)GCSENEMY_BankMotorUpdate__FP8MATRIX43P26GCSENEMY_MotorInstanceDataf, 0.095238097012043f);
    GCSENEMY_BankMotorReset__FP30GCSENEMY_BankMotorInstanceDataPC24GCSENEMY_BankMotorConfig(h, link + 0x108);
    o->handle = h;
    o->scale = 1.0f;
}
