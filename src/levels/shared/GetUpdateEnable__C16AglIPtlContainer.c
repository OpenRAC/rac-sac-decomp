/* GetUpdateEnable__C16AglIPtlContainer -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the low bits of the byte at offset 0x40.
 */

typedef struct State {
    char pad[0x40];
    unsigned char field;
} State;

int GetUpdateEnable__C16AglIPtlContainer(State *self)
{
    return self->field & 1;
}
