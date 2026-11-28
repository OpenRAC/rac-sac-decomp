/* Arena4Drain_Close__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 2 in the byte at offset 0x45.
 */

typedef struct State {
    char pad[0x45];
    unsigned char field;
} State;

void Arena4Drain_Close__FP4Moby(State *self)
{
    self->field = 2;
}
