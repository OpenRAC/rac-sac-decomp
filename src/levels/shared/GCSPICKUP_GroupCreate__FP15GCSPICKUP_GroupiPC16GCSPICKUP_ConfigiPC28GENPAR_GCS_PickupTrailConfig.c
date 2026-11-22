/* GCSPICKUP_GroupCreate__FP15GCSPICKUP_GroupiPC16GCSPICKUP_ConfigiPC28GENPAR_GCS_PickupTrailConfig -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls a helper with a zero in the third slot, then stores three arguments
 * into a record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_126998.c.
 */

struct P126998 {
    char pad0[0x14];
    int f14;
    int f18;
    int f1C;
};

extern void PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(struct P126998 *p, int a1, int a2);

void GCSPICKUP_GroupCreate__FP15GCSPICKUP_GroupiPC16GCSPICKUP_ConfigiPC28GENPAR_GCS_PickupTrailConfig(struct P126998 *p, int a1, int a2, int a3, int a4)
{
    PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(p, a1, 0);
    p->f14 = a2;
    p->f18 = a3;
    p->f1C = a4;
}
