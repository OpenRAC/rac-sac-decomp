/* VehicleSectionEnder_GetEndSection__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VehicleEnder {
    char pad[0x54];
    int *section;
} VehicleEnder;

extern VehicleEnder *g_vehicleEnder;

int VehicleSectionEnder_GetEndSection__Fv(void)
{
    return *g_vehicleEnder->section;
}
