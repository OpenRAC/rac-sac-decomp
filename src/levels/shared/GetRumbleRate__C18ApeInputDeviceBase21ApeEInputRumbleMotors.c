/* GetRumbleRate__C18ApeInputDeviceBase21ApeEInputRumbleMotors -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one float from the array at offset 0x80.
 */

typedef struct State {
    char pad[0x80];
    float values[1];
} State;

float GetRumbleRate__C18ApeInputDeviceBase21ApeEInputRumbleMotors(State *self, int index)
{
    return self->values[index];
}
