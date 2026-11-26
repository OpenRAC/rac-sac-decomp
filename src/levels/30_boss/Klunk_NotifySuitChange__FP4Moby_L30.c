/* Klunk_NotifySuitChange__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the constant 1 in the byte at offset 0x46.
 */

typedef struct State {
    char pad[0x46];
    unsigned char field;
} State;

void Klunk_NotifySuitChange__FP4Moby(State *self)
{
    self->field = 1;
}
