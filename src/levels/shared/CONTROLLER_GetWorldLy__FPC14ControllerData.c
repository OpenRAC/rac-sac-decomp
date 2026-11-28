/* CONTROLLER_GetWorldLy__FPC14ControllerData -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 128 when the controller is absent.
 */

typedef struct State {
    char pad[0xC];
    int field;
} State;

int CONTROLLER_GetWorldLy__FPC14ControllerData(State *self)
{
    if (self == 0)
        return 128;
    return self->field;
}
