/* DamController_GetSpongeAvoids__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct DamFields {
    char pad[0x8];
    void *spongeAvoids;
} DamFields;

typedef struct DamCtrl {
    char pad[0x54];
    DamFields *fields;
} DamCtrl;

extern DamCtrl *g_damController;

void *DamController_GetSpongeAvoids__Fv(void)
{
    return g_damController->fields->spongeAvoids;
}
