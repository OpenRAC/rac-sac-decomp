/* CONTROLLER_GetWorldLx__FPC14ControllerData -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 128 when the controller is absent.
 */

typedef struct State {
    char pad[0x8];
    int field;
} State;

int CONTROLLER_GetWorldLx__FPC14ControllerData(State *self)
{
    if (self == 0)
        return 128;
    return self->field;
}
