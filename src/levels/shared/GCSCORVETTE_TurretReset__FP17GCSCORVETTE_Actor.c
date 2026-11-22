/* GCSCORVETTE_TurretReset__FP17GCSCORVETTE_Actor -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Updates the object's eight sub records.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_104AE8.c.
 */

typedef struct {
    char data[0x30];
} Item;

typedef struct {
    char pad[0x278];
    Item items[8];
} Obj;

extern void GCSENEMY_TurretReset__FP15GCSENEMY_Turret(Item *);

void GCSCORVETTE_TurretReset__FP17GCSCORVETTE_Actor(Obj *obj)
{
    int i;

    for (i = 0; i < 8; i++)
        GCSENEMY_TurretReset__FP15GCSENEMY_Turret(&obj->items[i]);
}
