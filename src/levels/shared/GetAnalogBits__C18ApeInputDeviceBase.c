/* GetAnalogBits__C18ApeInputDeviceBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x7C.
 */

typedef struct State {
    char pad[0x7C];
    int field;
} State;

int GetAnalogBits__C18ApeInputDeviceBase(State *self)
{
    return self->field;
}
