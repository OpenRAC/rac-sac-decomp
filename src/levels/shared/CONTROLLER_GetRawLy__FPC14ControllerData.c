/* CONTROLLER_GetRawLy__FPC14ControllerData -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the scaled axis, or the scaled neutral value when absent.
 */

typedef struct State {
    char pad[12];
    int axis;
} State;

int CONTROLLER_GetRawLy__FPC14ControllerData(State *self)
{
    int value;

    value = 128;
    if (self != 0)
        value = self->axis;
    return (value << 15) - value;
}
