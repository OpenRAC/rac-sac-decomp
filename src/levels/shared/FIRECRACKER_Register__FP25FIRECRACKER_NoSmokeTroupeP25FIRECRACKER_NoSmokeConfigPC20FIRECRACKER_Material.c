/* FIRECRACKER_Register__FP25FIRECRACKER_NoSmokeTroupeP25FIRECRACKER_NoSmokeConfigPC20FIRECRACKER_Material -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores four resolved handles and a trailing value into the object, then runs
 * a final helper.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EFF18.c.
 */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_L01_002B6A38[];
extern void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(void *o, void *p);
extern void func_L01_16BD10(void *o, int *tbl);
extern int SparkSprite_RegisterFasterSystem__FUi(int a);
extern int STREAK_RegisterParticleSystem__FUi(int a);
extern int BLAST_RegisterSystem__FUi(int a);
extern int FLASH_RegisterSystem__FUi(int a);

void FIRECRACKER_Register__FP25FIRECRACKER_NoSmokeTroupeP25FIRECRACKER_NoSmokeConfigPC20FIRECRACKER_Material(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(o, D_L01_002B6A38);
    o->f_2C = p;
    o->f_1C = SparkSprite_RegisterFasterSystem__FUi(tbl[0]);
    o->f_20 = STREAK_RegisterParticleSystem__FUi(tbl[1]);
    o->f_24 = BLAST_RegisterSystem__FUi(tbl[2]);
    if (tbl[3] != 0) {
        v = FLASH_RegisterSystem__FUi(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_L01_16BD10(o, tbl);
}
