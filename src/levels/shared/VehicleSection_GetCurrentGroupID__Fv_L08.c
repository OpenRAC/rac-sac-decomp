/* VehicleSection_GetCurrentGroupID__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VehicleGroup {
    char pad[0xC];
    unsigned char id;
} VehicleGroup;

typedef struct VehicleSection {
    char pad[0x54];
    VehicleGroup *group;
} VehicleSection;

extern VehicleSection *g_vehicleSection;

int VehicleSection_GetCurrentGroupID__Fv(void)
{
    return g_vehicleSection->group->id;
}
