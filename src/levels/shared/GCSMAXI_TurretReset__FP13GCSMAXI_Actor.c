/* GCSMAXI_TurretReset__FP13GCSMAXI_Actor -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the item helper over the three 0x30-byte items at 0x244.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_10D4C0.c.
 */

typedef struct {
    char pad[0x30];
} Item;

typedef struct {
    char pad[0x244];
    Item items[3];
} Obj;

extern void GCSENEMY_TurretReset__FP15GCSENEMY_Turret(Item *item);

void GCSMAXI_TurretReset__FP13GCSMAXI_Actor(Obj *obj)
{
    int i;

    for (i = 0; i < 3; i++)
        GCSENEMY_TurretReset__FP15GCSENEMY_Turret(&obj->items[i]);
}
