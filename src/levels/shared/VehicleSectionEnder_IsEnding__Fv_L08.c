/* VehicleSectionEnder_IsEnding__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Ender {
    unsigned char pad[0x45];
    unsigned char state;
} Ender;

extern Ender *g_vehicleSectionEnder;

int VehicleSectionEnder_IsEnding__Fv(void)
{
    return (unsigned)(g_vehicleSectionEnder->state - 2) < 2u;
}
