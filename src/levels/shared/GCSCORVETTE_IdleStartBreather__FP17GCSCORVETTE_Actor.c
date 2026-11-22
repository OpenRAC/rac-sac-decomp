/* GCSCORVETTE_IdleStartBreather__FP17GCSCORVETTE_Actor -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Raise a flag, set a value and run the two sub-object initialisers.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_107B70.c.
 */

typedef struct {
    char pad0[0x0D];
    char flag;
    char pad1[0xA];
    float value;
    char pad2[0x398 - 0x1C];
    char sub1[0x30];
    char sub2[0x100];
} Obj;

void GCSENEMY_TurretDeactivate__FP15GCSENEMY_Turret(void *p);

void GCSCORVETTE_IdleStartBreather__FP17GCSCORVETTE_Actor(Obj *a0)
{
    a0->flag = 1;
    a0->value = 90.0f;
    GCSENEMY_TurretDeactivate__FP15GCSENEMY_Turret(a0->sub1);
    GCSENEMY_TurretDeactivate__FP15GCSENEMY_Turret(a0->sub2);
}
