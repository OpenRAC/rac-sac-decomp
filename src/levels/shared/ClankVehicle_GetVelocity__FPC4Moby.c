/* ClankVehicle_GetVelocity__FPC4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the pointer loaded from offset 0x58, advanced by 52 bytes.
 */

typedef struct State {
    char pad[0x58];
    char *field;
} State;

char *ClankVehicle_GetVelocity__FPC4Moby(State *self)
{
    return self->field + 52;
}
