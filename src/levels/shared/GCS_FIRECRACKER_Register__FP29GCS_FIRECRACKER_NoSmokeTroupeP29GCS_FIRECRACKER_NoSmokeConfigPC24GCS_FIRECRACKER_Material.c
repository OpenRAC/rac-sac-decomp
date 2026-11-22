/* GCS_FIRECRACKER_Register__FP29GCS_FIRECRACKER_NoSmokeTroupeP29GCS_FIRECRACKER_NoSmokeConfigPC24GCS_FIRECRACKER_Material -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores four resolved handles from an argument table into the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1150E8.c.
 */

typedef struct Obj15_1150E8 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj15_1150E8;

extern char D_L24_0025C6B0[];
extern void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(void *o, int p);
extern void GCS_FIRECRACKER_RefreshConfig__FP29GCS_FIRECRACKER_NoSmokeConfig(void *p);
extern int GCS_SPARK_RegisterSystem__FUi(int a);
extern int GCS_STREAK_RegisterParticleSystem__FUi(int a);
extern int GCS_BLAST_RegisterSystem__FUi(int a);
extern int FLASH_RegisterSystem__FUi(int a);

void GCS_FIRECRACKER_Register__FP29GCS_FIRECRACKER_NoSmokeTroupeP29GCS_FIRECRACKER_NoSmokeConfigPC24GCS_FIRECRACKER_Material(Obj15_1150E8 *o, void *p, int *tbl) {
    int v;

    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(o, (int)D_L24_0025C6B0);
    GCS_FIRECRACKER_RefreshConfig__FP29GCS_FIRECRACKER_NoSmokeConfig(p);
    o->f_2C = p;
    o->f_1C = GCS_SPARK_RegisterSystem__FUi(tbl[0]);
    o->f_20 = GCS_STREAK_RegisterParticleSystem__FUi(tbl[1]);
    o->f_24 = GCS_BLAST_RegisterSystem__FUi(tbl[2]);
    if (tbl[3] != 0) {
        v = FLASH_RegisterSystem__FUi(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
}
