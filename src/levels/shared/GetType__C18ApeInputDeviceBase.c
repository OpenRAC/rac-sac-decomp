/* GetType__C18ApeInputDeviceBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word at offset 0x4.
 */

typedef struct State {
    char pad[0x4];
    int field;
} State;

int GetType__C18ApeInputDeviceBase(State *self)
{
    return self->field;
}
