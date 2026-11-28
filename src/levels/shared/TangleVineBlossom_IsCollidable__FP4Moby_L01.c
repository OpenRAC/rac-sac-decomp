/* TangleVineBlossom_IsCollidable__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Compares the value at offset 0x45.
 */

typedef struct State {
    char pad[0x45];
    unsigned char field;
} State;

int TangleVineBlossom_IsCollidable__FP4Moby(State *self)
{
    return (unsigned)(self->field - 2) < 2u;
}
