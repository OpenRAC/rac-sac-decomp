/* GetLoop__C9ApeSpline -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the low bits of the byte at offset 0x20.
 */

typedef struct State {
    char pad[0x20];
    unsigned char field;
} State;

int GetLoop__C9ApeSpline(State *self)
{
    return self->field & 1;
}
