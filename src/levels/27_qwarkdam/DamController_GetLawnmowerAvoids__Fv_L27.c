/* DamController_GetLawnmowerAvoids__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DamFields {
    char pad[0x14];
    void *lawnmowerAvoids;
} DamFields;

typedef struct DamCtrl {
    char pad[0x54];
    DamFields *fields;
} DamCtrl;

extern DamCtrl *g_damController;

void *DamController_GetLawnmowerAvoids__Fv(void)
{
    return g_damController->fields->lawnmowerAvoids;
}
