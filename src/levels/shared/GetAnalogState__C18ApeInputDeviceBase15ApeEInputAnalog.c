/* GetAnalogState__C18ApeInputDeviceBase15ApeEInputAnalog -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one float from the array at offset 0x1C.
 */

typedef struct State {
    char pad[0x1C];
    float values[1];
} State;

float GetAnalogState__C18ApeInputDeviceBase15ApeEInputAnalog(State *self, int index)
{
    return self->values[index];
}
