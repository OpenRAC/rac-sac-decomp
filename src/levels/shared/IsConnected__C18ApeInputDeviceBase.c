/* IsConnected__C18ApeInputDeviceBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the low bits of the byte at offset 0x0.
 */

typedef struct State {
    unsigned char field;
} State;

int IsConnected__C18ApeInputDeviceBase(State *self)
{
    return self->field & 1;
}
