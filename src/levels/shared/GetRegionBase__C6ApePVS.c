/* GetRegionBase__C6ApePVS -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the unsigned byte at offset 0x11.
 */

typedef struct State {
    char pad[0x11];
    unsigned char field;
} State;

int GetRegionBase__C6ApePVS(State *self)
{
    return self->field;
}
