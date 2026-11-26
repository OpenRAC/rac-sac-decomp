/* VehicleFormation_IsActive__FPC4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the byte at offset 0x46 equals 2.
 */

typedef struct State {
    char pad[0x46];
    unsigned char field;
} State;

int VehicleFormation_IsActive__FPC4Moby(State *self)
{
    return self->field == 2;
}
