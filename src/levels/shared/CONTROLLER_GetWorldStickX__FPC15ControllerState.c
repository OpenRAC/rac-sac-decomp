/* CONTROLLER_GetWorldStickX__FPC15ControllerState -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns zero when the controller is absent.
 */

typedef struct State {
    char pad[0x10];
    float field;
} State;

float CONTROLLER_GetWorldStickX__FPC15ControllerState(State *self)
{
    if (self == 0)
        return 0.0f;
    return self->field;
}
