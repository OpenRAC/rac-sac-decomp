/* FIRECRACKER_Register__FP29FIRECRACKER_SortedTrailTroupeP29FIRECRACKER_SortedTrailConfigPC20FIRECRACKER_Material -- 156 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resolves three handles, derives a flag and stores the results.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0390.c.
 */

struct Ob { char p0[0x1C]; int f1C; int f20; int f24; int f28; void *f2C; };
struct Src { int f00; int f04; int f08; int f0C; };
extern char D_L01_002B6A60[];
extern void ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(void *a, void *b);
extern int SparkSprite_RegisterFasterSystem__FUi(int a);
extern int STREAK_RegisterParticleSystem__FUi(int a);
extern int FIRESMOKETRAIL_RegisterSystem__FUi(int a);
extern int FLASH_RegisterSystem__FUi(int a);
extern void func_L01_16C3F8(void *a, int b);

void FIRECRACKER_Register__FP29FIRECRACKER_SortedTrailTroupeP29FIRECRACKER_SortedTrailConfigPC20FIRECRACKER_Material(struct Ob *a0, void *a1, struct Src *a2)
{
    int v;

    ACTOR_CreateTroupe__FP12ACTOR_TroupePC10ACTOR_Type(a0, D_L01_002B6A60);
    a0->f1C = SparkSprite_RegisterFasterSystem__FUi(a2->f00);
    a0->f20 = STREAK_RegisterParticleSystem__FUi(a2->f04);
    a0->f24 = FIRESMOKETRAIL_RegisterSystem__FUi(a2->f08);
    if (a2->f0C != 0) {
        v = FLASH_RegisterSystem__FUi(a2->f0C);
    } else {
        v = -1;
    }
    a0->f28 = v;
    func_L01_16C3F8(a1, ~v != 0);
    a0->f2C = a1;
}
